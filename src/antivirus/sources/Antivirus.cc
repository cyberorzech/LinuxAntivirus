#include "../headers/Antivirus.h"

using namespace std;

Antivirus::Antivirus(int new_value) { x = new_value; }

int Antivirus::xGetter() { return x; }

void Antivirus::xSetter(int new_value) { x = new_value; }
