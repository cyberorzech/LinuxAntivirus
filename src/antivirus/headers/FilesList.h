#ifndef FILESLIST_H
#define FILESLIST_H

#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FilesList {
  string files;  // should be vector
  string path;
  string result;

 public:
  bool setPath(string);
  bool searchForFiles();
  string getFiles() { return result; };
};

#endif