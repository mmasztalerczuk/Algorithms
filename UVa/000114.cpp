#include<iostream>
#include<vector>
#include<set>
#include<limits>
#include<cstring>
#include<algorithm>
#include<map>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
int DEBUG = 1;
using namespace std;
#define POS "Possible"
#define IMPO "Impossible"

#define MAXN 11
#define INF std::numeric_limits<int>::max()/2

#define FOR(x,y) for(int x=0;x<y;x++)
#define FOR_S(x,a,y) for(int x=a;x<y;x++)
#define FORB(x,a,b) for(int x=a; i>b; i--)

#define SORT(a) sort(a.begin(), a.end());
#define SEARCH(a, b) binary_search(a.begin(), a.end(), b)
#define SZ(a) (int)a.size()
#define LEN(a) (int)a.length()

#define FOREACH(y,x) for(auto y=x.begin(); y!=x.end(); y++)

#define PRINT(a) if(DEBUG) cout<<a<<endl;
#define PRINT_2(a,b) if(DEBUG) cout<<a<<" "<<b<<endl;
#define PRINT_ALL(a) if(DEBUG) { for(auto printAll=a.begin(); printAll!=a.end(); printAll++) cout<<*printAll<<" "; cout<<endl; }

#define MAX(v) std::max_element(std::begin(v), std::end(v));
#define MIN(v) std::min_element(std::begin(v), std::end(v));

#define V_INT vector<int>
#define MAT_INT vector<vector<int> >

vector<string> split(string str, char delimiter) {
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;

    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }

    return internal;
}

int n;



int main()
{
    int grid[51][51];
    int gridA[51][51];
    int gridB[51][51];
    FOR(i, 51)
        FOR(j, 51)
        {
            grid[i][j] = 0;
        }

    int x, y, wall_cost, bumpers;
    cin >> x >> y;
    cin >> wall_cost;
    cin >> bumpers;

    FOR(i, bumpers)
    {
        //cout << bumpers << endl;
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        grid[a][b] = 1;
        gridA[a][b] = c;
        gridB[a][b] = d;
    }

    string tmp;
    long long ansFin = 0;
    getline(cin, tmp);
    int a,b,c,d;
    while(cin >> a >> b >> c >> d)
    {

        long long ans = 0;

        for(int i=d;i>0;)
        {
            //cout << a << " " << b << " c:" << c << " d:" << i << " " << ans << endl;
            if (i<=1)
            {
                break;
            }
            i--;


            if (c==1)
            {
                if (b+1 >= y)
                {
                    c = 0;
                    i -= wall_cost;

                }
                else if (grid[a][b+1]==1) {
                    ans += gridA[a][b + 1];
                    i -= gridB[a][b + 1];
                    c = 0;
                }
                else
                {
                    b += 1;
                }
                continue;
            }


            if (c==0)
            {
                if (a+1 >= x)
                {
                    c = 3;
                    i -= wall_cost;
                }
                else if (grid[a+1][b]==1) {
                    ans += gridA[a + 1][b];
                    i -= gridB[a + 1][b];
                    c = 3;
                }
                else
                {
                    a += 1;
                }
                continue;
            }

            if (c==3)
            {
                if (b-1 <= 1)
                {
                    c = 2;
                    i -= wall_cost;
                }
                else if (grid[a][b-1]==1)
                {
                    ans+=gridA[a][b-1];
                    i-=gridB[a][b-1];
                    c=2;
                }
                else
                {
                    b -= 1;
                }
                continue;
            }

            if (c==2)
            {
                //cout << "Hit? " << x << endl;
                if (a-1 <= 1)
                {
                    //cout << "Hit" << endl;
                    c = 1;
                    i -= wall_cost;
                }
                else if (grid[a-1][b]==1)
                {
                    ans+=gridA[a-1][b];
                    i-=gridB[a-1][b];
                    c=1;
                }
                else
                {
                    a -= 1;
                }
                continue;
            }
        }
        cout << ans << endl;
        ansFin += ans;
    }
    cout << ansFin << endl;
}
