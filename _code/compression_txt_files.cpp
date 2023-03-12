#include <fstream>
#include <iostream>
#include <zlib.h>
#include <vector>
using namespace std;

int main()
{
    string s1;
    cout << "Enter filename to be compressed : ";
    cin >> s1;

    ifstream infile1(s1, ios::in);
    if (!infile1)
    {
        cout << "Infile not found. Press Enter to continue....." << endl;
        cin.ignore();
        return 0;
    }

    vector<char> src(istreambuf_iterator<char>(infile1), {});

    vector<unsigned char> dest(src.size() * 2);
    uLongf destlen = dest.size();

    compress2(dest.data(), &destlen, reinterpret_cast<const Bytef *>(src.data()), src.size(), Z_BEST_COMPRESSION);
    dest.resize(destlen);

    cout << "Enter compressed filename : ";
    cin >> s1;
    ofstream outfile1(s1, ios::binary | ios::trunc);
    outfile1.write(reinterpret_cast<const char *>(dest.data()), dest.size());
    cout << "Compression successful. Press Enter to continue.....";
    cin.ignore();
    return 0;
}