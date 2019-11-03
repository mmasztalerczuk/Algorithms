#include <cstdio>
#include <algorithm>

int lose(char a, char b) {
    if (a == 'S' && b == 'R')
        return 1;
    if (a == 'R' && b == 'P')
        return 1;
    if (a == 'P' && b == 'S')
        return 1;
    return 0;
}


int main() {
    int n = 0;
    scanf("%d", &n);

    for(int test=0;test<n;test++) {
        int x, y, days;
        scanf("%d %d %d", &x, &y, &days);
        char map[100][100];
        char tmp[100][100];
        char s[100];

        for(int j=0;j<x;j++) {
            scanf("%s", map[j]);
        }

        if (test > 0 && test + 1 <= n) {
            printf("\n");
        }

        int d = 0;
        while (d < days) {
            for(int row=0;row<x;row++) {
                for(int column=0;column<y;column++) {
                    char c = map[row][column];

                    if (row+1 < x && lose(map[row][column], map[row+1][column]))
                        c = map[row+1][column];
                    if (row-1 >= 0 && lose(map[row][column], map[row-1][column]))
                        c = map[row-1][column];
                    if (column+1 < y && lose(map[row][column], map[row][column+1]))
                        c = map[row][column+1];
                    if (column-1 >= 0 && lose(map[row][column], map[row][column-1]))
                        c = map[row][column-1];
                    tmp[row][column] = c;
                }
                // printf("TMP:\n");
                // for(int column=0;column<y;column++) {
                //     printf("%c", tmp[row][column]);
                // }
                // printf("\n");
            }
            std::swap(map, tmp);
            d++;
        }
        //printf("FIN\n\n\n\n");
        for(int row=0;row<x;row++) {
            for(int column=0;column<y;column++) {
                printf("%c", map[row][column]);
            }
            printf("\n");
        }
    }
}