#include<iostream>

int main() {
    int map[1030][1030];

    int tests;

    scanf("%d", &tests);
    int ans_x, ans_y, max;
    for (int ii=0;ii<tests;ii++)
    {
        for (int i =0;i<1030;i++)
            for(int j=0;j<1030;j++)
            {
                map[i][j]=0;
            }
        int d;  
        scanf("%d", &d);
        int rats;
        scanf("%d",&rats);
        ans_x =0;
        ans_y =0;
        max=0;
        for (int i=0;i<rats;i++) {
            int x,y,s;
            scanf("%d %d %d", &x, &y, &s);
            //map[x][y] = s;
            for(int tmp_i=x-d;tmp_i<=x+d;tmp_i++)
            {   
                if (tmp_i<0)
                    continue;
                if (tmp_i>1024)
                    continue;
                for(int tmp_j=y-d;tmp_j<=y+d;tmp_j++){
                    if (tmp_j<0)
                        continue;
                    if (tmp_j>1024)
                        continue;
                    map[tmp_i][tmp_j]+=s;
                }
            }

        }
        int ans;
        for (int i=0;i<1030;i++)
            for(int j=0;j<1030;j++)
            {
                ans = map[i][j];
                if (ans>max) {
                    ans_x = i;
                    ans_y = j;
                    max = ans;
                }
            }
        printf("%d %d %d\n", ans_x, ans_y, max);

    }
}