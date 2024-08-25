//
//  main.cpp
//  ABC079A
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  int rep = -1;
  int count = 1;
  while (N != 0 && count < 3) {
    if (rep != N%10) {
      rep = N%10;
      count = 1;
    } else count += 1;
    N /= 10;
  }
  
  if (count == 3) cout << "Yes" << endl;
  else cout << "No" << endl;
}
