//
//  main.cpp
//  APG4bEX09
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int x, a, b;
  int x2, x3;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  x2 = x * (a + b);
  cout << x2 << endl;
  
  x3 = x2 * x2;
  cout << x2 * x2 << endl;
  
  x3--;
  cout << x3 << endl;
}
