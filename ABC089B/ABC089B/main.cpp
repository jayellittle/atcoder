//
//  main.cpp
//  ABC089B
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  int i;
  string col;
  for (i=1; i<=N; i++) {
    cin >> col;
    if (col == "Y") {
      cout << "Four" << endl;
      return 0;
    }
  }
  cout << "Three" << endl;
}
