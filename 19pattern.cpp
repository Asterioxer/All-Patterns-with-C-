#include<bits/stdc++.h>
using namespace std;
void pattern19(int n) {
    int inis = 0;
    for(int i=0;i<n;i++) {
        for (int j=1;j<=n-i;j++) {
            cout << "*";
        }
        for (int j=0;j<inis;j++) {
            cout << " ";
        }
        for (int j=1;j<=n-i;j++) {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }
    inis = 2*n-2;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout << "*";
        }
        for (int j=0;j<inis;j++) {
            cout << " ";
        }
        for (int j=1;j<=i;j++) {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
      int n;
      cin >> n;
      pattern19(n);
    }
}