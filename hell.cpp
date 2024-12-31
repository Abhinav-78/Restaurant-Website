#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int tst;
    cin >> tst;
    while (tst--) {
        int kn, km, kl; 
        cin >> kn >> km >> kl;
        int Dmin = 1e9; 
        for (int t = 1; t <= kn; t++) {
            for (int w = 1; w <= km; w++) {
                int pmt = 2 * (t + w); 
                int Dff = abs(pmt - kl); 
                Dmin = min(Dmin, Dff); 
            }
        }
        cout << Dmin << endl;
    }
    return 0;
}
