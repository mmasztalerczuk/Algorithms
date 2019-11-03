 #include <bits/stdc++.h> 
using namespace std; 
  

int main()  
{  
    int n;

    while (true) {
        scanf("%d", &n);
        if (n==0) {
            break;
        }
        printf("Printing order for %d pages:\n", n);
        int missing = 0;
        if (n%4 !=0) { // 13
            missing ++;
            if ((n+1)%4 !=0) { // 14
                missing ++;
                if ((n+2)%4 !=0) { // 15
                    missing ++;
                }
            }
        }
        int ii = 1;
        int jj = n;
        for (int i = 0; i<n;i+=4) {
            
            printf("Sheet %d, front:", (i/4)+1);
            if (missing) {
                printf(" Blank"); 
                missing--;
            } else {
                printf(" %d", jj);
                jj --;
            }
            printf(", %d\n", ii);
            if (n>1) {
                printf("Sheet %d, back :", (i/4)+1);
                printf(" %d", ii+1);
                if (missing) {
                    printf(", Blank\n"); 
                    missing--;
                } else {
                    printf(", %d\n",jj);
                    jj--;
                }
                ii += 2;
            }
        }

    }
}  