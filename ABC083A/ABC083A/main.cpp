//
//  main.cpp
//  ABC083A
//
//  Created by Woo Sung Jahng on 2024/04/28.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if (A+B > C+D) cout << "Left" << endl;
  else if (A+B == C+D) cout << "Balanced" << endl;
  else cout << "Right" << endl;
}
