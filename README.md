1. About this Project
    This is a simple data compression & decompression code written using the zlib library. Currently, it only works for .txt files and is not intended to use for other file formats.
    The motivation to write this program was mainly learning.

2. How to Use
    i. First, open the "compression_txt_files.exe". <br>
        - Enter the name of the file to be compressed. E.g. "story1.txt"
        - Include an extension while entering the filename.
        - You write the path if the file is not in the same directory.
        - Be careful while writing the file or path name, as tab completion is not working.
    ii. The compression program will output a compressed file with the .bin extension
        - Output filename format = "compressed_<input_filename>"
        - E.g. For filename = "story1.txt"; Output filename = "compressed_story1.txt.bin"
        - Don't change the ".txt.bin" extension of the compressed file.
    iii. Next, Use the "decompression_txt_file.cpp".
        - Enter the name of the file to be decompressed. E.g. "compressed_story1.txt.bin"
        - Only use the decompression program with files compressed through the compression program of this particular project. Otherwise, bizarre things might 				  happen.
    iv. The decompression program will output the decompressed file, similar to the original file.
        - The extension of the output file will be .txt.
        - Output filename format = "decompressed_<inputfilename>";
        - E.g. filename = "compressed_story1.txt.bin"; Output filename = "decompressed_compressed_story1.txt".

3. Features & Limitations
    i. The executable files are independent of any dependencies, i.e. they can be used without any other library or drivers.
    ii. Fast & Lossless Data Compression.
    iii. Can be used for many textfiles, just by entering the name or path.
    iv. I have included sample file in the "_test_samples" directory.

    v. Only available for .txt files
    vi. Sometimes end data is lost for large files(Working on it)

7. Source Code
    - I have put the source code in the "_code" directory. Code for both compression and decompression is available with proper comments.
    - Feel free to modify and use the source as you see fit.

**Updated on 13/03/23

Please get in touch with me at shahsahils100@gmail.com for any queries.
Creator - Sahil Shah

