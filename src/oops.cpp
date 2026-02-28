#include <iostream>
#include <ostream>
#include <string>
using namespace std;

std::string oops() {
   return "You can delete this function and put your code in this file!";
}


int validation(const int lower, const int upper, const string &prompt, const string &errormessage) {
   string inputStr;
   int input;
   cout << "valid values between: " << lower << " and " << upper << endl;
   while (true) {
      cout << prompt << endl;
      getline(cin, inputStr);
      input = stoi(inputStr);
      if (input >= lower && input <= upper) {
         return input;
      } else {
      cout << errormessage << endl;
      }
   }
}