//
//  main.cpp
//  APG4bEX08
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int pat, price, N;
  string text;
  
  cin >> pat;
  if (pat == 1) {
    cin >> price >> N;
    cout << price * N << endl;
  }
  if (pat == 2) {
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}
