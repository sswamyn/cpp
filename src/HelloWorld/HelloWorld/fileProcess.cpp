#include <fstream>
using namespace  std;

void fileProcess() {
	// Create and open a text file
	ofstream MyFile("filename.txt");

	// Write to the file
	MyFile << "Files can be tricky, but it is fun enough!";

	// Close the file
	MyFile.close();

}