//
//  main.cpp
//  ABC073B
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N, l, r;
  cin >> N;
  
  int i;
  int count = 0;
  for (i=0; i<N; i++) {
    cin >> l >> r;
    count += r-l+1;
  }
  
  cout << count << endl;
}
