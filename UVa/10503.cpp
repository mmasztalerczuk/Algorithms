#include <iostream>
#include <cstring>
using namespace std;

int pieces[16][2], n, m;
long used = 0;
bool found = false;
int filled;

void solve(int last) {
    if (filled==n) {
        if (last == pieces[m+1][0]) {
            found = true;
        }
    }
    else {
        for(int i=1;i<m+1;i++) {
    
            if ((used & (1 << i)) == 0) {
                used |= (1 << i);
                filled++;
                if (last == pieces[i][0]) {
                    //cout<<pieces[i][0] << " " << pieces[i][1] << " " << i << endl;
                    solve(pieces[i][1]);
                }
                if (last == pieces[i][1]) {
                    //cout<<pieces[i][1] << " " << pieces[i][0] << " " << i << endl;
                    solve(pieces[i][0]);
                }
                filled--;
                used &= ~(1 << i);
            }
        }
    }
}




int main()
{
    while (cin >> n && n != 0) {
        cin >> m;
        cin >> pieces[0][0];
        cin >> pieces[0][1];
        cin >> pieces[m+1][0];
        cin >> pieces[m+1][1];

        for(int i=0;i<m;i++)
        {
            cin >> pieces[i+1][0];
            cin >> pieces[i+1][1];
        }
        used = 1 | (1 << (m + 1));
        filled = 0;
        found = false;
        solve(pieces[0][1]);
        if (found) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}