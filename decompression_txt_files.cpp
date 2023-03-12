#include <fstream>
#include <iostream>
#include <zlib.h>
#include <vector>
using namespace std;

int main()
{
    string s1;
    cout << "Enter filename to be decompressed : ";
    cin >> s1;

    ifstream infile1(s1, ios::binary);
    if (!infile1)
    {
        cout << "Infile not found. Press Enter to continue....." << endl;
        cin.ignore();
        return 0;
    }

    vector<unsigned char> src(istreambuf_iterator<char>(infile1), {});

    vector<char> dest(src.size() * 2);
    uLongf destlen = dest.size();

    uncompress(reinterpret_cast<Bytef *>(dest.data()), &destlen, src.data(), src.size());
    dest.resize(destlen);

    cout << "Enter decompressed filename : ";
    cin >> s1;
    ofstream outfile1(s1, ios::trunc);
    outfile1.write(reinterpret_cast<const char *>(dest.data()), dest.size());
    cout << "Decompression successful. Press Enter to continue....." << endl;
    cin.ignore();

    return 0;
}