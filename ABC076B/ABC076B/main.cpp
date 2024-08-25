//
//  main.cpp
//  ABC076B
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  
  int val = 1;
  int i;
  for (i=0; i<N; i++) {
    if (val < K) val *= 2;
    else val += K;
  }
  
  cout << val << endl;
}
