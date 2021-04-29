#include "../headers/FilesList.h"

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
  result = "";
  for (const auto& file : recursive_directory_iterator(path)) {
    result.append(file.path());
    result.append("\n");
  }
  return 0;
}