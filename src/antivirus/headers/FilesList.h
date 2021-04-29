#ifndef FILESLIST_H
#define FILESLIST_H

#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

class FilesList {
  std::string files;  // should be vector
  std::string path;
  std::string result;

 public:
  bool setPath(std::string);
  bool searchForFiles();
  std::string getFiles() { return result; };
};

#endif