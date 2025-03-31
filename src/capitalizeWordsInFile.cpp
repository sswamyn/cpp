#include <iostream>
  using namespace std;
#include <fstream>
#include <string>

// Function to display a welcome message    
static void displayWelcomeMessage() {
    cout << "Welcome to the Capitalization Program!" << endl;
    cout << "This program will capitalize the first letter of each word in a file." << endl;
    cout << "You can specify the input and output file names." << endl;
    cout << "If you want to use the default files, just press Enter." << endl;
    cout << "Default input file: input.txt" << endl;
    cout << "Default output file: output.txt" << endl;
}

// Function to capitalize the first letter of each word in a file
static void capitalizeWordsInFileV1(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return;
    }

    string word;
    while (inputFile >> word) {
        if (isalpha(word[0])) {
            word[0] = toupper(word[0]);
        }
        outputFile << word << " ";
    }

    inputFile.close();
    outputFile.close();
}

// Function to capitalize the first letter of each word in a file
static void capitalizeWordsInFileV2(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        for (int i=0; i<line.length(); i++) {
            if (i == 0 || line[i-1] == ' ') {
                if (isalpha(line[i])) {
                    line[i] = toupper(line[i]);
                }
            }
        }
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();
}


// This program capitalizes the first letter of each word in a file
int main() {
  
    string inputFileName, outputFileName;
    // Prompt user for input and output file names
    // with default values for input and output files
    displayWelcomeMessage();

    cout << "Enter the name of the input file (default: input.txt): ";
    getline(cin, inputFileName);
    if (inputFileName.empty()) {
        inputFileName = "input.txt";
    }
    cout << "Enter the name of the output file (default: output.txt): ";
    getline(cin, outputFileName);
    if (outputFileName.empty()) {
        outputFileName = "output.txt";
    }
    cout << "You have chosen to use the following files:" << endl;
    cout << "Input file: " << inputFileName << endl;
    cout << "Output file: " << outputFileName << endl;
    cout << "If these are correct, press Enter to continue." << endl;
    cout << "If you want to change them, press Ctrl+C to exit the program." << endl;
    cout << "Press Enter to continue..." << endl;
    cin.ignore();

    // Call the function to capitalize words in the file
    //  This version loops through each word in the input file
    //  and capitalizes the first letter of each word
    //  and writes the result to the output file.
    // Note: Newline characters are not handled in this version.
    capitalizeWordsInFileV1(inputFileName, outputFileName);

    // Version 2 of the function
    //  This version reads through each line of the input file
    //  and capitalizes the first letter of each word
    //  and writes the result to the output file.
    // Note: Newline characters are handled in this version.
    //capitalizeWordsInFileV2(inputFileName, outputFileName);
    
    cout << "Capitalization complete. Check the output file." << endl;

    return 0;
}


