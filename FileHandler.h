#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include <string>

class FileHandler {
public:
    static std::vector<std::string> readFromFile(const std::string& filePath);

};

#endif // FILEHANDLER_H