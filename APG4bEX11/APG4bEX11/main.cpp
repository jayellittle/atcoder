//
//  main.cpp
//  APG4bEX11
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  string op;
  int i, B;
  for (i=1; i<=N; i++) {
    cin >> op >> B;
    if (op == "+") A += B;
    else if (op == "-") A -= B;
    else if (op == "*") A *= B;
    else if (op == "/") {
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      else A /= B;
    }
    cout << i << ":" << A << endl;
  }
}
