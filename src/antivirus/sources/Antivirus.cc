#include "../headers/Antivirus.h"

#include "../headers/Mode.h"

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
}