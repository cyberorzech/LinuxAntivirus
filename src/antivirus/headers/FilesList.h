#ifndef FILESLIST_H
#define FILESLIST_H

#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

class FilesList {
 protected:
  const char* files;  // should be vector
  std::string path;
  std::string result;

 public:
  bool setPath(std::string);
  bool searchForFiles();
  std::string getFiles() { return result; };
  virtual int checkNecessaryFiles() = 0;
};

#endif