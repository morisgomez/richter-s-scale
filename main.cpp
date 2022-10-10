#include <iostream>
#include <string>
using namespace std;

int main() {
   cout << "what is the magnitude of the earthquake? ";
   string repeatedString = "According to Richter's Scale, ";
   double magnitude;
   cin >> magnitude;
   if (magnitude >= 8) {
       cout << repeatedString << "most structures have fallen.";
   } else if (magnitude >= 7) {
        cout << repeatedString << "many buildings have been destroyed.";
   } else if (magnitude >= 6) {
        cout << repeatedString << "many buildings have considerable damage, some collapsed.";
   } else if (magnitude >= 4.5) {
        cout << repeatedString << "damage is mostly in poorly constructed buildings.";
   } else {
        cout << repeatedString << "there is no destruction of buildings.";
   }
}
