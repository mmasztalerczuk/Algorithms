#include<iostream>
int c[55];
int l;
int w[55][55];
int cut(int a, int b, int q, int level) {
    int cost = 1000000;
    //printf("%d %d %d\n", c[a], c[b], q);
    if (a+1==b) {
        return 0;
    }
    else {
        for(int i=a+1; i<b;i++) {
            int tmp_a, tmp_b;

            if (w[a][i]==-1) {
                tmp_a = cut(a, i, c[i], level+1);
                w[a][i] = tmp_a;
            } else {
                tmp_a = w[a][i];
            }

            if (w[i][b]==-1) {
                tmp_b = cut(i, b, l-c[i], level+1);
                w[i][b] = tmp_b;
            } else {
                tmp_b = w[i][b];
            }

            int tmp = tmp_a + tmp_b + c[b]-c[a];
            
            if (cost > tmp)
                cost = tmp;
        }
    }
    return cost;
}

int main() {
    while (1) {
        scanf("%d", &l);
        for (int i=0;i<55;i++)
            for(int j=0;j<55;j++)
                w[i][j] = -1;
        if (l==0) {
            break;
        }
        int k;
        scanf("%d",&k);
        c[0] = 0;
        for(int i=1;i<k+1;i++) {
            int tmp;
            scanf("%d", &tmp);
            c[i] = tmp;
        }
        c[k+1] = l;
        printf("The minimum cutting is %d.\n", cut(0,k+1, l, 0));
    }
}