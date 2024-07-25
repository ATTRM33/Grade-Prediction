#include "FileHandler.h"
#include <fstream>
#include <iostream>


std::vector<std::string> FileHandler::readFromFile(const std::string& filePath) {
    std::vector<std::string> lines;
    std::ifstream file(filePath);


    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return lines;
    }

    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}


