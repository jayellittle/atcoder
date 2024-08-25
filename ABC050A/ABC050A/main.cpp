//
//  main.cpp
//  ABC050A
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string A, op, B;
  cin >> A >> op >> B;
  
  if (op == "+") cout << stoi(A) + stoi(B) << endl;
  else if (op == "-") cout << stoi(A) - stoi(B) << endl;
}
