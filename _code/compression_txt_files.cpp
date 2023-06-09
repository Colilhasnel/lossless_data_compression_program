#include <chrono>
#include <fstream>
#include <iostream>
#include <zlib.h>
#include <vector>
using namespace std;

int main()
{
    // Taking the name of file to be compressed
    string s1;
    cout << "Enter filename to be compressed : ";
    cin >> s1;

    // If file not found then give error
    ifstream infile1(s1, ios::in);
    if (!infile1)
    {
        cout << "Infile not found. Press Enter to continue....." << endl;
        cin.ignore();
        cin.get();
        return 0;
    }

    // Buffer memory & iterator for source data in char form
    vector<char> src(istreambuf_iterator<char>(infile1), {});

    // Buffer memory for compressed data in unsigned char
    vector<unsigned char> dest(src.size() * 2);
    uLongf destlen = dest.size();

    // Starting clock to mearsure compression time
    auto start = chrono::high_resolution_clock::now();

    // Using compress2 function from zlib
    compress2(dest.data(), &destlen, reinterpret_cast<const Bytef *>(src.data()), src.size(), Z_BEST_COMPRESSION);

    // Calculating Time
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    double compression_time = elapsed.count();

    // Resizing Destination vector
    dest.resize(destlen * 1.5);

    // Opening Output file with extension .bin(binary) in binary form
    ofstream outfile1("compressed_" + s1 + ".bin", ios::binary | ios::trunc);

    // Writing compressed data to output file in binary form
    outfile1.write(reinterpret_cast<const char *>(dest.data()), dest.size());

    // Can also check for unsuccesful compression through value returned by compress2 function
    cout << "Compression successful" << endl;

    // Displaying Metrics
    size_t original_size = src.size();
    size_t compressed_size = dest.size();
    double compression_ratio = (compressed_size / (double)original_size) * 100;
    double compression_speed = original_size / compression_time;
    cout << "Original File Size = " << original_size << " bytes" << endl;
    cout << "Compressed Size = " << compressed_size << " bytes" << endl;
    cout << "Compression Ratio = " << compression_ratio << " %" << endl;
    cout << "Compression Speed = " << compression_speed << " bytes per second" << endl;
    cout << "Press Enter to continue....." << endl;
    cin.ignore();
    cin.get();

    return 0;
}