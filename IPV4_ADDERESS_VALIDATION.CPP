/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#include<vector>

using namespace std;
bool
isvalid(string s) {
  int count_zeroes = 0, size = 0;
  string curr = "";

  for (auto i: s) {

    if (isalpha(i))
      return false;
    if (i != '.') {
      curr += i;
    } else {
      size++;
      count_zeroes++;
      if (curr.length() == 0 || size > 3 || count_zeroes > 3)
        return false;

      int num = stoi(curr);
      if (num < 0 || num > 255)
        return false;
      curr = "";

    }

  }
  if (stoi(curr) < 0 || stoi(curr) > 255)
    return false;
  return true;
}

int
main() {
  string s;
  cin >> s;
  cout << isvalid(s);
  return 0;
}