//
//  main.cpp
//  ABC062B
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  
  int w, h;
  for (w=0; w<W+2; w++) cout << '#';
  cout << endl;
  
  char a;
  for (h=0; h<H; h++) {
    cout << '#';
    for (w=0; w<W; w++) {
      cin >> a;
      cout << a;
    }
    cout << '#' << endl;
  }
  
  for (w=0; w<W+2; w++) cout << '#';
  cout << endl;
}
