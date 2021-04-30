#include "../headers/Antivirus.h"

#include "../headers/Mode.h"
#include "../headers/NecessaryFilesList.h"

using namespace std;

Antivirus::Antivirus() {
  cout << "Initializing components..." << endl;
  cout << "Choosing operational mode." << endl;
  Mode mode;
  do {
    string input;
    cin >> input;
    if (mode.setMode(input)) modeSet = true;
  } while (modeSet == false);
  cout << "Looking for necessary files." << endl;
  NecessaryFilesList necessaryFiles;
  // try {
  //   necessaryFiles.setPath("../.");
  //   necessaryFiles.searchForFiles();
  //   necessaryFiles.checkNecessaryFiles();
  //   hasNecessaryFiles = true;
  // } catch (const char* msg) {
  //   cerr << msg << endl;
  //   exit(1);
  // }

  // initialization routine, prepare stats
  reportComponentsState();
  string x(mode.getMode());
  cout << "ASDASDASDASD " << x << endl;
  if (x == "file") {
    // run file scan
  }
}

void Antivirus::reportComponentsState() {
  if (modeSet)
    cout << "Mode has been set correctly." << endl;
  else
    cout << "Mode is not set." << endl;
  if (hasNecessaryFiles)
    cout << "Found all necessary files." << endl;
  else
    cout << "Some files are missing." << endl;
}