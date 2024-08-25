//
//  main.cpp
//  ABC075B
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  
  int i, j;
  char s[h][w];
  for (i=0; i<h; i++) {
    for (j=0; j<w; j++) {
      cin >> s[i][j];
    }
  }
  
  int t[h+1][w+1];
  for (i=0; i<h+1; i++) {
    for (j=0; j<w+1; j++) {
      t[i][j] = 0;
    }
  }

  for (i=0; i<h; i++) {
    for (j=0; j<w; j++) {
      if (s[i][j] == '#') {
        t[i-1][j-1]++; t[i][j-1]++; t[i+1][j-1]++;
        t[i-1][j]++;   t[i][j]=9;   t[i+1][j]++;
        t[i-1][j+1]++; t[i][j+1]++; t[i+1][j+1]++;
      }
    }
  }
  
  for (i=0; i<h; i++) {
    for (j=0; j<w; j++) {
      if (t[i][j] >= 9) cout << '#';
      else cout << t[i][j];
    }
    cout << endl;
  }
}
