#include "FileHandler.h"
#include <fstream>
#include <sstream>

std::vector<std::string> FileHandler::readFromFile(const std::string& filePath) {
    std::vector<std::string> lines;
    std::ifstream file(filePath);
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    return lines;
}

void FileHandler::writeToFile(const std::string& filePath, const std::vector<std::string>& data) {
    std::ofstream file(filePath);
    std::ofstream file(filePath);

    for (int i = 0; i < data.size(); ++i) {
        file << data[i] << std::endl;
    }

    file.close();
}

