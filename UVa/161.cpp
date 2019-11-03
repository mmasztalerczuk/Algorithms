 #include <bits/stdc++.h> 
using namespace std; 
  

int main()  
{  
    int sig[101];
    const int mt=5*60*60+1; // max time
    int green[mt]; // how many signals are green
    int count, i;

    for (;;)
    {
        for(int k=0;k<mt;k++) {
            green[k] = 1;
        }
        for (count=0;; count++)	{
            scanf("%d", &sig[count]);
            if (sig[count] == 0) break;
        }
        if (sig[0] == 0) break; // exit condition
        for(int i=0;i<count;i++) {
            for(int j=sig[i]-5;j<mt;j=j+sig[i]*2) {
                for(int k=0;k<sig[i]+5;k++) {
                    if (j+k < mt)
                        green[j+k] = 0;
                }
            }
        }
        bool flag = true;
        int ans = mt+10;
        for(int k=0;k<mt;k++) {
            if (green[k]==0) {
                if (flag) {
                    flag = false;
                }
            }
            if (green[k]==1) {
                if (flag == false) {
                    ans = k;
                    break;
                }
            }
        } 
        if (ans >= mt) {
            cout << "Signals fail to synchronise in 5 hours" << endl;
        } else {
            printf("%02d:%02d:%02d\n", ans/3600, (ans/60)%60, ans%60);
        }
    }
}  