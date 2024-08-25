//
//  main.cpp
//  ABC081B
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(void) {
  int N;
  cin >> N;
  
  int i;
  int bb[N];
  for (i=0; i<N; i++) {
    cin >> bb[i];
  }
  
  int count = 0;
  while (true) {
    for (i=0; i<N; i++) {
      if (bb[i] % 2 == 0) {
        bb[i] /= 2;
      } else {
        cout << count << endl;
        return 0;
      }
    }
    count++;
  }
}
