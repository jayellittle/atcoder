//
//  main.cpp
//  ABC065B
//
//  Created by Woo Sung Jahng on 2024/05/04.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> button(N);
  int i;
  for (i=0; i<N; i++) cin >> button[i];

  int light = 1;
  for (i=0; i<N; i++) {
    light = button[light-1];
    if (light == 2) break;
  }
  
  if (light == 2) cout << i+1 << endl;
  else cout << -1 << endl;
}
