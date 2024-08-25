//
//  main.cpp
//  ABC080A
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  if (N*A < B) cout << N*A << endl;
  else cout << B << endl;
}
