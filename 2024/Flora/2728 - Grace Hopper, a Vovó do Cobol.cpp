#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

int main() {
  string frase;

  while(getline(cin,frase)) {
    string f1 = "", f2 = "";
    for(auto f : frase) {
      if (f != '-') {
        f1 += tolower(f);
      } else {
        // cout << f1 << endl;
        if ((f1[0] == 'c' || f1[f1.size()-1] == 'c') && f2.empty()) {
          // cout << 'c' << endl;
          f2 += 'c'; 
          f1 = "";
        } else if ((f1[0] == 'o' || f1[f1.size()-1] == 'o') && f2 == "c") {
          // cout << 'o' << endl;
          f2 += 'o';
          f1 = "";
        } else if ((f1[0] == 'b' || f1[f1.size()-1] == 'b') && f2 == "co") {
          // cout << 'b' << endl;
          f2 += 'b';
          f1 = "";
        } else if ((f1[0] == 'o' || f1[f1.size()-1] == 'o') && f2 == "cob") {
          // cout << 'o' << endl;
          f2 += 'o';
          f1 = "";
        } else if ((f1[0] == 'l' || f1[f1.size()-1] == 'l') && f2 == "cobo") {
          // cout << 'l' << endl;
          f2 += 'l';
          f1 = "";
        }
      }
    }

    if ((f1[0] == 'l' || f1[f1.size()-1] == 'l') && f2 == "cobo") {
      // cout << 'l' << endl;
      f2 += 'l';
      f1 = "";
    }

    if (f2 != "cobol") {
      cout << "BUG" << endl;
    } else {
      cout << "GRACE HOPPER" << endl;
    }
  }
}