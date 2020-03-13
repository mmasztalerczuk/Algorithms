#include <iostream>
int max_val;
int n, k;
    
int map[101][101];
int visited[101];
int color[101];
int sol[101];
using namespace std;
void solve(int visi) {
    //cout << visi << endl;
    if (visi==n+1)
    {
        int ans = 0;
        for(int i=0;i<=n;i++) {
            //cout << color[i] << " ";
            if (color[i]) {
                ans++;
            }
        }
        //cout << endl;
        if (ans>max_val) {
            max_val = ans;
            for(int i=0;i<=n;i++) {
            sol[i]=color[i];
           }
        }
    }
    else 
    {
        solve(visi+1);
        bool f = true;
              for(int j=0;j<=n;j++) {
                  if (map[j][visi] && color[j]) {
                      f = false;
                      break;
                  }
              }
              if (f) {
                  color[visi] = 1;
                  solve(visi+1);
                  color[visi] = 0;
              }

    }
    
}

int main()
{
    int tests;
    cin >> tests;


    for(int a=0;a<tests;a++) {

        cin >> n >> k;
        int x, y;
        max_val=0;
        for (int i=0;i<=n;i++){
            color[i]=0;
            visited[i]=0;
            sol[i]=0;
            for(int j=0;j<=n;j++) {
                map[i][j] = 0;
            }
        }

        for (int i=0;i<k;i++) {
            cin >> x >> y;
            map[x][y] = 1;
            map[y][x] = 1;
        }

        solve(1);
        char c = 'x';
        cout << max_val << endl;
                    for(int i=0;i<=n;i++) {
            if(sol[i]) {
                if (c != 'x')
                  cout << ' ' << i;
                else
                  cout << i;
                c = ' ';
            }

           }
           cout << endl;
    }


}