//
//  main.cpp
//  ABC081A
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int s;
  int i;
  int count;
  
  cin >> s;
  
  count = 0;
  for (i=1; i<=3; i++) {
    count += s % 10;
    s /= 10;
  }
  
  cout << count << endl;
}
