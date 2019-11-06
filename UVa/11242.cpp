#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int main() {
    int f, r;
    while (true) {
        cin >> f;
        if (f == 0) {
            break;
        }
        cin >> r;
        std::vector<int> tab;
        std::vector<float> tab2;
        for(int i=0;i<f;i++) {
            int tmp;
            scanf("%d", &tmp);
            tab.push_back(tmp);
        }
        for(int i=0;i<r;i++) {
            int tmp;
            scanf("%d", &tmp);
            for(int j=0;j<f;j++) {
                //cout << tmp << " " << tab[j] << " " << (float)tab[j]/(float)tmp << endl;
                tab2.push_back((float)tab[j]/(float)tmp);
            }
        }
        sort(tab2.begin(), tab2.end());
        float ans = tab2[1]/tab2[0];
        for(int i=1;i<tab2.size();i++) {
            //cout << tab2[i] << " ";
            if (ans<tab2[i]/tab2[i-1]) {
                ans = tab2[i]/tab2[i-1];
            }
        }
        //cout << std::setprecision(3);
        //cout << ans << endl;
        printf("%.2f\n", ans);
    }
}
