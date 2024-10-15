#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    int count = 0;
    for (int i=0; i<N-2; i++) {
        if (S[i] == '#' && S[i+2] == '#' && S[i+1] == '.') count++;
    }

    cout << count << endl;
}
