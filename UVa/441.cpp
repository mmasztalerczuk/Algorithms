#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main() {
    int tab[14];
    int q = 0;
    while(true) {
        int n ;
        cin >> n;
        if (n == 0) {
            break;
        }
        if (q > 0) {
            cout << endl;
        }
        q++;
        for(int i =0;i<n;i++) {
            int tmp;
            scanf("%d", &tmp);
            tab[i] = tmp;
           // cout << tab[i] << " ";
        }

        std::string bitmask(6, 1); // K leading 1's
        bitmask.resize(n, 0); // N-K trailing 0's
        //cout << "SIZE"<<bitmask.size() << endl;
        // print integers and permute bitmask
        //cout << n << endl;
        do {
//            cout << "Test" << endl;
            int qw = 0;
            for (int i = 0; i < n; ++i) // [0..N-1] integers
            {
                if (bitmask[i]) {
                    std::cout << tab[i];
                    qw++;
                    if (qw<6) {
                        cout << " ";
                    }
                }
            }
            std::cout << std::endl;
        } while (std::prev_permutation(bitmask.begin(), bitmask.end()));
    }
}
