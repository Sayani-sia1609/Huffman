#include "dashboard.h"
#include <iostream>
#include <iomanip>

using namespace std;

void printLine(int width = 60) {
    cout << string(width, '=') << endl;
}

void showDashboard(
    const string& original,
    const string& encoded,
    const string& decoded,
    const map<char, int>& freqMap,
    const map<char, string>& codeMap
) {
    printLine();
    cout << setw(40) << "HUFFMAN COMPRESSION DASHBOARD" << endl;
    printLine();

    
    cout << "\nINPUT SUMMARY\n";
    cout << string(60, '-') << endl;
    cout << "Original Text        : \"" << original << "\"\n";
    cout << "Total Characters     : " << original.length() << endl;
    cout << "Unique Characters    : " << freqMap.size() << endl;

    
    cout << "\nCHARACTER FREQUENCY TABLE\n";
    cout << string(60, '-') << endl;
    cout << left << setw(20) << "Character" << setw(15) << "Frequency" << endl;
    cout << string(60, '-') << endl;

    for (auto& pair : freqMap) {
        string ch;
        if (pair.first == ' ')
            ch = "(space)";
        else
            ch = string(1, pair.first);

        cout << left << setw(20) << ch
             << setw(15) << pair.second << endl;
    }

    
    cout << "\nHUFFMAN CODE TABLE\n";
    cout << string(60, '-') << endl;
    cout << left << setw(20) << "Character" << setw(25) << "Huffman Code" << endl;
    cout << string(60, '-') << endl;

    for (auto& pair : codeMap) {
        string ch;
        if (pair.first == ' ')
            ch = "(space)";
        else
            ch = string(1, pair.first);

        cout << left << setw(20) << ch
             << setw(25) << pair.second << endl;
    }

    
    cout << "\nENCODED OUTPUT\n";
    cout << string(60, '-') << endl;
    cout << encoded << endl;

    
    int originalBits = original.length() * 8;
    int compressedBits = encoded.length();
    double compressionRatio =
        100.0 * (originalBits - compressedBits) / originalBits;

    cout << "\nCOMPRESSION ANALYSIS\n";
    cout << string(60, '-') << endl;
    cout << "Original Size        : " << originalBits << " bits\n";
    cout << "Compressed Size      : " << compressedBits << " bits\n";
    cout << "Compression Ratio    : " << fixed << setprecision(2)
         << compressionRatio << " %\n";
    cout << "Space Saved          : "
         << (originalBits - compressedBits) << " bits\n";

    cout << "\nVERIFICATION\n";
    cout << string(60, '-') << endl;
    cout << "Decoded Output       : \"" << decoded << "\"\n";

    if (original == decoded)
        cout << "Status               : MATCH ✔\n";
    else
        cout << "Status               : ERROR ❌\n";

    printLine();
    cout << setw(35) << "END OF DASHBOARD" << endl;
    printLine();
}
