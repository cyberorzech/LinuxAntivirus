#include "../headers/FilesList.h"

#include <filesystem>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::recursive_directory_iterator;

bool FilesList::setPath(string input) {
  path = input;
  if (path != input) {
    throw "Unable to set path.";
    return 1;
  }
  return 0;
}

bool FilesList::searchForFiles() {
  string result = "";
  for (const auto& file : recursive_directory_iterator(path)) {
    result.append(file.path());
    result.append("\n");
  }
  if (result == "") {
    throw "There is no files in given location.";
  }
  files = result.c_str();
  return 0;
}