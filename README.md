<h3> Lossless Data Compression Program </h3>

<div class = "column1" style = "margin : 0px 0px 0px 20px" >
1. About this Project <br>
<div class = "column2" style = "margin: 0px 0px 0px 40px">
    This is a simple data compression & decompression code written using the zlib library. Currently, it only works for .txt files and is not intended to use for other file formats. <br>
    The motivation to write this program was mainly learning. <br>
    </div>
<br>
2. How to Use <br>
<div class = "column2" style = "margin: 0px 0px 0px 20px">    i. First, open the "compression_txt_files.exe". <br>
<div class = "column3" style = "margin: 0px 0px 0px 20px"> 
        - Enter the name of the file to be compressed. E.g. "story1.txt". <br>
        - Include an extension while entering the filename. <br>
        - You write the path if the file is not in the same directory. <br>
        - Be careful while writing the file or path name, as tab completion is not working. <br>
        </div>
    ii. The compression program will output a compressed file with the .bin extension <br>
    <div class = "column3" style = "margin: 0px 0px 0px 20px"> 
        - Output filename format = "compressed_<input_filename>" <br>
        - E.g. For filename = "story1.txt"; Output filename = "compressed_story1.txt.bin" <br> 
        - Don't change the ".txt.bin" extension of the compressed file. <br> 
        </div>
    iii. Next, Use the "decompression_txt_file.cpp". <br>
    <div class = "column3" style = "margin: 0px 0px 0px 20px"> 
        - Enter the name of the file to be decompressed. E.g. "compressed_story1.txt.bin" <br>
        - Only use the decompression program with files compressed through the compression program of this particular project. Otherwise, bizarre things might happen. <br>
        </div>
    iv. The decompression program will output the decompressed file, similar to the original file. <br>
    <div class = "column3" style = "margin: 0px 0px 0px 20px"> 
        - The extension of the output file will be .txt. <br>
        - Output filename format = "decompressed_<inputfilename>". <br> 
        - E.g. filename = "compressed_story1.txt.bin"; Output filename = "decompressed_compressed_story1.txt". <br>
        </div>
<br>
3. Features & Limitations <br>
<div class = "column2" style = "margin: 0px 0px 0px 20px">
    i. The executable files are independent of any dependencies, i.e. they can be used without any other library or drivers. <br>
    ii. Fast & Lossless Data Compression. <br>
    iii. Can be used for many textfiles, just by entering the name or path. <br>
    iv. I have included sample file in the "_test_samples" directory. <br>
<br>
    v. Only available for .txt files <br>
    vi. Sometimes end data is lost for large files(Working on it) <br>
    </div>
<br>
7. Source Code <br>
<div class = "column2" style = "margin: 0px 0px 0px 20px">
    - I have put the source code in the "_code" directory. Code for both compression and decompression is available with proper comments. <br>
    - Feel free to modify and use the source as you see fit. <br>
    </div>
<br>
</div>
**Updated on 13/03/23 <br>
<br>
Please get in touch with me at shahsahils100@gmail.com for any queries. <br>
Creator - Sahil Shah <br>
