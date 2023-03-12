#include <fstream>
#include <iostream>
#include <zlib.h>
#include <vector>
using namespace std;

int main()
{
    // Taking the name of file to be decompressed
    string s1;
    cout << "Enter filename to be decompressed : ";
    cin >> s1;

    // If file not found then give error
    ifstream infile1(s1, ios::binary);
    if (!infile1)
    {
        cout << "Infile not found. Press Enter to continue....." << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    // Buffer memory & iterator for compressed data to read in unsigned char form
    vector<unsigned char> src(istreambuf_iterator<char>(infile1), {});

    // Buffer memory for uncompressed data in char form
    vector<char> dest(src.size() * 2);
    uLongf destlen = dest.size();

    // Using uncompress function from zlib
    uncompress(reinterpret_cast<Bytef *>(dest.data()), &destlen, src.data(), src.size());

    dest.resize(destlen);

    // Opening Output file with original extension of .txt
    ofstream outfile1("decompressed_" + s1.substr(0, s1.length() - 4), ios::trunc);

    // Writing uncompressed data to output file in readable form
    outfile1.write(reinterpret_cast<const char *>(dest.data()), dest.size());

    // Can also check for unsuccesful decompression through value returned by uncompress function
    cout << "Decompression successful. Press Enter to continue....." << endl;
    cin.ignore();
    cin.get();

    return 0;
}