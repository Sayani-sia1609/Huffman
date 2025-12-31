# 🔐 Huffman Compression Tool (C++)

A modular, end-to-end implementation of **Huffman Coding** in C++, featuring encoding, decoding, and a detailed **CLI dashboard** for compression analysis.

This project demonstrates strong fundamentals in **data structures, algorithms, and clean software design**.

## 📌 Features

* ✅ Huffman Tree construction using priority queue
* ✅ Frequency analysis using maps
* ✅ Encoding of input text into compressed binary form
* ✅ Decoding back to original text (lossless)
* ✅ Verification of correctness
* ✅ Professional CLI dashboard with:

  * Frequency table
  * Huffman codes table
  * Compression ratio & space saved

---

## 🧠 Why Huffman Coding?

Huffman Coding is a **greedy compression algorithm** that assigns shorter binary codes to frequently occurring characters, reducing overall storage size while remaining lossless.

This project showcases:

* Tree traversal
* Priority queues
* Recursive algorithms
* Bit-level reasoning
* Modular C++ design

---

## 🗂️ Project Structure

```
HuffmanCompression/
│── main.cpp
│── huffmannode.h
│── huffmantree.h
│── huffmantree.cpp
│── utils.h
│── utils.cpp
│── encoder.h
│── encoder.cpp
│── decoder.h
│── decoder.cpp
│── dashboard.h
│── dashboard.cpp
│── README.md
```

---

## ⚙️ How It Works

1. **Input Text**
	User provides a string (supports spaces).

2. **Frequency Calculation**
	Each character’s frequency is calculated using a map.

3. **Huffman Tree Construction**
	A min-heap (priority queue) builds the optimal prefix tree.

4. **Encoding**
	Characters are replaced with variable-length binary codes.

5. **Decoding**
	The encoded string is decoded using the same Huffman tree.

6. **Dashboard Output**
	Results are displayed in a structured CLI dashboard.

---

## 🖥️ Sample Dashboard Output

```
========================================================
				  HUFFMAN COMPRESSION DASHBOARD
========================================================

INPUT SUMMARY
Original Text        : "hello world"
Total Characters     : 11
Unique Characters    : 8

CHARACTER FREQUENCY TABLE
Character            Frequency
h                    1
e                    1
l                    3
...

COMPRESSION ANALYSIS
Original Size        : 88 bits
Compressed Size      : 27 bits
Compression Ratio    : 69.32 %

VERIFICATION
Decoded Output       : "hello world"
Status               : MATCH ✔
```


---

## 🚀 How to Run

### Compile

```bash
g++ main.cpp utils.cpp huffmantree.cpp encoder.cpp decoder.cpp dashboard.cpp -o huffman
```

### Run

```bash
./huffman
```

---

## 🧪 Verification

The program ensures correctness by verifying:

```
decoded_string == original_string
```

Only lossless compression passes.

---

## 📈 Skills Demonstrated

* C++ (STL, pointers, recursion, modular design)
* Data Structures (Trees, Maps, Priority Queues)
* Algorithms (Greedy, DFS)
* Software Engineering Practices
* CLI UX & output formatting

---

## 🌱 Future Enhancements

* File-based compression (`.txt → .bin`)
* Tree visualization
* Binary file storage
* Compression comparison with other algorithms
* GUI or Web dashboard

---

## 👩‍💻 Author

**Sayani Das**

