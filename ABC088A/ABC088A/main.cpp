//
//  main.cpp
//  ABC088A
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  
  if (N % 500 <= A) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
