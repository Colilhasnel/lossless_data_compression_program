<h3> Lossless Data Compression Program </h3><br>

1. About this Project <br>
    This is a simple data compression & decompression code written using the zlib library. Currently, it only works for .txt files and is not intended to use for other file formats. <br>
    The motivation to write this program was mainly learning. <br>
<br>
2. How to Use <br>
    i. First, open the "compression_txt_files.exe". <br>
        - Enter the name of the file to be compressed. E.g. "story1.txt". <br>
        - Include an extension while entering the filename. <br>
        - You write the path if the file is not in the same directory. <br>
        - Be careful while writing the file or path name, as tab completion is not working. <br>
    ii. The compression program will output a compressed file with the .bin extension <br>
        - Output filename format = "compressed_<input_filename>" <br>
        - E.g. For filename = "story1.txt"; Output filename = "compressed_story1.txt.bin" <br> 
        - Don't change the ".txt.bin" extension of the compressed file. <br> 
    iii. Next, Use the "decompression_txt_file.cpp". <br>
        - Enter the name of the file to be decompressed. E.g. "compressed_story1.txt.bin" <br>
        - Only use the decompression program with files compressed through the compression program of this particular project. Otherwise, bizarre things might happen. <br>
    iv. The decompression program will output the decompressed file, similar to the original file. <br>
        - The extension of the output file will be .txt. <br>
        - Output filename format = "decompressed_<inputfilename>". <br> 
        - E.g. filename = "compressed_story1.txt.bin"; Output filename = "decompressed_compressed_story1.txt". <br>
<br>
3. Features & Limitations <br>
    i. The executable files are independent of any dependencies, i.e. they can be used without any other library or drivers. <br>
    ii. Displays Metrics after compression or decompression is done. <br>
    iii. Fast & Lossless Data Compression. <br>
    iv. Can be used for many textfiles, just by entering the name or path. <br>
    v. I have included sample file in the "_test_samples" directory. <br>
<br>
    vi. Only available for .txt files <br>
    vii. Sometimes end data is lost for large files(Working on it) <br>
<br>
4. Formulas Used <br>
    i. Compression Ratio = (Compressed_File_Size / Original_File_Size) *100 <br>
    ii. Compression Speed = (Compressed_File_Size / Time_taken_for_compression) <br>
    iii. Decompression Ratio = (Decompressed_File_Size / Compressed_File_Size) *100 <br>
    iv. Decompression Speed = (Decompressed_File_Size / Time_taken_for_decompression) <br>
<br>
7. Source Code <br>
    - I have put the source code in the "_code" directory. Code for both compression and decompression is available with proper comments. <br>
    - Feel free to modify and use the source as you see fit. <br>
<br>
**Updated on 13/03/23 <br>
<br>
Please get in touch with me at shahsahils100@gmail.com for any queries. <br>
Creator - Sahil Shah <br>


