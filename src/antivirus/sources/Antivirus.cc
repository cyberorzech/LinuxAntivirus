#include "../headers/Antivirus.h"

#include "../headers/Mode.h"

using namespace std;

Antivirus::Antivirus() {
  cout << "Initializing components..." << endl;
  cout << "Choosing operational mode." << endl;
  Mode mode;
  string input;
  cin >> input;
  mode.setMode(input);
}