# Huffman Compression and Decompression

This project implements Huffman coding in C, allowing you to compress and decompress files using command-line arguments. Huffman coding is a lossless data compression algorithm that is used to reduce the size of data without losing any information.

## Features

- **Compress files**: Reduce file size using Huffman coding.
- **Decompress files**: Restore compressed files to their original state.

## Usage

### Command-Line Arguments

The program expects the following command-line arguments:
huffman -c|-d filename

- `-c`: Compress the specified file.
- `-d`: Decompress the specified file.
- `filename`: The name of the file to be compressed or decompressed.

### Example Commands

- To compress a file named `example.txt`:

./huffman -c example.txt

- To decompress a file named `example.txt.huff`:
./huffman -d example.txt.huff

## How It Works

### Compression

1. **Frequency Analysis**: The program reads the input file and calculates the frequency of each character.
2. **Build Huffman Tree**: Using the character frequencies, the program builds a Huffman tree, which is used to determine the binary codes for each character.
3. **Generate Codes**: Each character is assigned a unique binary code based on the Huffman tree.
4. **Output Compressed File**: The program writes the compressed data to a new file with a `.huff` extension.

### Decompression

1. **Read Huffman Tree**: The program reads the Huffman tree from the compressed file.
2. **Decode Data**: Using the tree, the program decodes the binary data back into the original characters.
3. **Output Decompressed File**: The program writes the decompressed data to a file with the original name.

## Building the Program

To compile the program, use the following command:

```bash
gcc -o huffman huffman.c
```
This will create an executable named huffman.

### Dependencies
This program requires a C compiler like gcc.

### License
This project is open-source and available under the MIT License.

### Contributing
Contributions are welcome! Please submit a pull request or open an issue for any bugs or feature requests.

Acknowledgments
Huffman coding algorithm is a well-known technique in data compression.
This project was inspired by the need to efficiently store and transmit data.
