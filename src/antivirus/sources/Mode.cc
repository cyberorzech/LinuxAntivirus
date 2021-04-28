#include "../headers/Mode.h"

using namespace std;

Mode::Mode() {
  cout << "Enter check mode: " << endl;
  cout << "Type 'file' for single file check" << endl;
  cout << "Type 'dir' for recursive check of all files in specific directory"
       << endl;
}

bool Mode::setMode(std::string choice) {
  const char* input = choice.c_str();
  try {
    Mode::checkMode(input);
    return true;
  } catch (const char* msg) {
    cerr << msg << endl;
    return false;
  }
}

int Mode::checkMode(const char* input) {
  if (!strcmp(input, "file"))
    return 1;
  else if (!strcmp(input, "dir"))
    return 2;
  else
    throw "Invalid mode";
}