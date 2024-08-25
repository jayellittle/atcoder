//
//  main.cpp
//  APG4bEX12
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  string S;
  cin >> S;

  int i;
  int sum = 1;
  int isplus = 0;
  int isminus = 0;
  for (i=1; i<int(S.size()); i++) {
    if (S.at(i) == '+') {
      isplus = 1;
      continue;
    } else if (S.at(i) == '-') {
      isminus = 1;
      continue;
    } else {
      if (isplus == 1) {
        sum++;
        isplus = 0;
      } else {
        sum--;
        isminus = 0;
      }
    }
  }
  
  cout << sum << endl;
}
