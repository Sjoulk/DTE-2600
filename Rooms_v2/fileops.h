#ifndef FILEOPS_H
#define FILEOPS_H

#include <map>
#include <string>
#include <vector>
#include <utility>

// Function declaration
std::map<std::string, std::vector<std::pair<int, int>>> readData(const std::string& inFile);

void writeData(const std::map<std::string, std::vector<std::pair<int, int>>>& dataMap);

std::vector<std::string> getbName(const std::map<std::string, std::vector<std::pair<int, int>>>& dataMap);

//std::vector<std::pair<int, int>> getRooms(const std::map<std::string, std::vector<std::pair<int, int>>>& dataMap);

#endif // FILEOPS_H
