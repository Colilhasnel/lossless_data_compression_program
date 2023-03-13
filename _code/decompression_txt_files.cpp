#include <chrono>
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

    // Starting clock to mearsure decompression time
    auto start = chrono::high_resolution_clock::now();

    // Using uncompress function from zlib
    uncompress(reinterpret_cast<Bytef *>(dest.data()), &destlen, src.data(), src.size());

    // Calculating Time
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    double decompression_time = elapsed.count();

    // Resizing Destination vector
    dest.resize(destlen);

    // Opening Output file with original extension of .txt
    ofstream outfile1("decompressed_" + s1.substr(0, s1.length() - 4), ios::trunc);

    // Writing uncompressed data to output file in readable form
    outfile1.write(reinterpret_cast<const char *>(dest.data()), dest.size());

    // Can also check for unsuccesful decompression through value returned by uncompress function
    cout << "Decompression successful." << endl;

    // Displaying Metrics
    size_t compressed_size = src.size();
    size_t decompressed_size = dest.size();
    double decompression_ratio = (decompressed_size / (double)compressed_size) * 100;
    double decompression_speed = decompressed_size / decompression_time;
    cout << "Compressed File Size = " << compressed_size << " bytes" << endl;
    cout << "Decomressed File Size = " << decompressed_size << " bytes" << endl;
    cout << "Decompression Ratio = " << decompression_ratio << " %" << endl;
    cout << "Decompression Speed = " << decompression_speed << " bytes per second" << endl;
    cout << "Press Enter to continue....." << endl;
    cin.ignore();
    cin.get();

    return 0;
}