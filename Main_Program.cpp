#include <iostream>
#include "Assignment.h"
#include "Category.h"
#include "ConsoleUI.h"


int main() {

    // Test reading from a file
    std::string inputFilePath = "test.txt";
    std::vector<std::string> lines = FileHandler::readFromFile(inputFilePath);

    std::cout << "Read lines from " << inputFilePath << ":\n";
    for (size_t i = 0; i < lines.size(); ++i) {
        std::cout << lines[i] << "\n";
    }
	ConsoleUI ui;

	ui.runProgram();
};