//
//  main.cpp
//  ABC049A
//
//  Created by Woo Sung Jahng on 2024/04/26.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  char c;
  cin >> c;
  
  char vowel[] = {'a', 'i', 'u', 'e', 'o'};
  
  int isVowel = 0;
  for (auto x : vowel) {
    if (x == c) {
      cout << "vowel" << endl;
      isVowel = 1;
      break;
    }
  }
  
  if (isVowel == 0) cout << "consonant" << endl;
}
