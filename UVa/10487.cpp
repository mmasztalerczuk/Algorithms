// # from sys import stdin
// # p = 1
// # for line in stdin:
// #     n = int(line)
// #     if n == 0:
// #         break
// #     l = []
// #     for i in range(n):
// #         a = int(input())
// #         l.append(a)

// #     n = int(input())
// #     print("Case %d:" % p)
// #     p += 1
// #     for q in range(n):
// #         v = int(input())
// #         ans = abs(v-l[0]-l[1])
// #         out = l[0]+l[1]
// #         for i in range(len(l)-1):
// #             for j in range(i+1,len(l)):
// #                 if ans > abs(v-l[i]-l[j]):
// #                     out = l[i] + l[j]
// #                     ans = abs(v-l[i]-l[j])
// #         print("Closest sum to %d is %d." % (v, out))
#include<cmath>
#include<cstdio>
#include<iostream>

using namespace std;

int main() {
    int p = 1;
    int n;
    int tab[1001];
    int sums[1000001];
    while(scanf("%d", &n)) {
        if (n == 0) {
            break;
        }
        int tmp;
        for(int i=0;i<n;i++) {
            scanf("%d", &tmp);
            tab[i] = tmp;
        }
        int nn;
        scanf("%d", &nn);
        printf("Case %d:\n", p);
        p++;
        int m = 0;
        int v, ans, out;
        for(int j=0;j<n-1;j++) {
            for(int k=j+1;k<n;k++) {
                sums[m] = tab[j] + tab[k];
                m++;
               // cout << sums[m-1] << " ";
            }
        }
       // cout << endl;
      
        for(int i =0;i<nn;i++){
            scanf("%d", &v);

            //sort(sums);
            ans = abs(sums[0]-v);
            out = sums[0];
            for(int j=0;j<m;j++) {
                //cout << sums[j] << " " << out << " " << abs(sums[j]-v) << endl;
                if (ans > abs(sums[j]-v)) {
                    out = sums[j];
                    ans = abs(sums[j]-v);
                }
            }
            printf("Closest sum to %d is %d.\n",v, out);
        }
    }
}
