#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include <string>

class FileHandler {
public:
    static std::vector<std::string> readFromFile(const std::string& filePath);
    static void writeToFile(const std::string& filePath, const std::vector<std::string>& data);
};

#endif // FILEHANDLER_H