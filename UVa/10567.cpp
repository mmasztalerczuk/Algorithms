#include<iostream>


using namespace std;


int main() {
    string n;
    string l;
    int tests;
    cin >> n;
    cin >> tests; 
    for(int i=0;i<tests;i++) {
        cin >> l;
        int e = 0;
        int s = n.length()+1;
        int tmp = 0;
        for(int j=0;j<n.length();j++) {
            if (n[j]==l[tmp]) {
                tmp++;
                s = min(s, j);
                if (tmp == l.length()) {
                    e = j;
                    break;
                }
            }
        }
        if (tmp == l.length()) {
            cout << "Matched " << s << " " << e << endl;
        } else {
            cout << "Not matched" << endl;
        }
    }
}