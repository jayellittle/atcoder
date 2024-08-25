//
//  main.cpp
//  APG4bEX13
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  
  int i, A;
  int avg = 0;
  vector<int> score;
  for (i=0; i<N; i++) {
    cin >> A;
    score.push_back(A);
    avg += A;
  }
  avg /= N;
  
  for (i=0; i<N; i++) {
    cout << abs(score.at(i) - avg) << endl;
  }
}
