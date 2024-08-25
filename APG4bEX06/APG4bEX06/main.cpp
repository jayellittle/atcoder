//
//  main.cpp
//  APG4bEX06
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  if (op == "-") {
    cout << A - B << endl;
  }
  if (op == "*") {
    cout << A * B << endl;
  }
  if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    } else {
      cout << A / B << endl;
    }
  }
  if (op == "?" || op == "=" || op == "!") {
    cout << "error" << endl;
  }
}
