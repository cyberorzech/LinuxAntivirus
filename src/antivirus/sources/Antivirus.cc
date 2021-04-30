#include "../headers/Antivirus.h"

#include "../headers/Directories.h"
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
  Directories dirs;
  try {
    necessaryFiles.setPath("../.");
    necessaryFiles.searchForFiles();
    necessaryFiles.checkNecessaryFiles();
    hasNecessaryFiles = true;
    if (!dirs.createDir("quarantine")) {
      cout << "Quarantine directory has been created successfully." << endl;
    }
  } catch (const char* msg) {
    cerr << msg << endl;
    exit(1);
  }

  // cout << "Looking for necessary files." << endl;
  // FilesList fileslist;
  // try {
  //   fileslist.setPath("../emptydir");
  //   hasNecessaryFiles = true;
  //   fileslist.searchForFiles();
  //   cout << fileslist.getFiles() << endl;
  // } catch (const char* msg) {
  //   cerr << msg << endl;
  //   exit(1);
  // }

  // initializing routine
  reportComponentsState();
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