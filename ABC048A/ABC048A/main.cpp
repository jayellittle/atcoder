//
//  main.cpp
//  ABC048A
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  char full[100];
  cin.getline(full, 100);
  
  char front[] = "AtCoder";
  
  int sh;
  sh = sizeof(front);
  
  cout << 'A' << full[sh] << "C" << endl;
}
