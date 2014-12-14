#include<iostream>
#include<vector>
#include<set>
#include<limits>
#include<cstring>
#include<algorithm>
 
int DEBUG = 1;
 
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
 
#define FOREACH(y,x) for(auto y=x.begin(); y!=x.end(); y++)
 
#define PRINT(a) if(DEBUG) cout<<a<<endl;
#define PRINT_2(a,b) if(DEBUG) cout<<a<<" "<<b<<endl;
#define PRINT_ALL(a) if(DEBUG) { for(auto printAll=a.begin(); printAll!=a.end(); printAll++) cout<<*printAll<<" "; cout<<endl; }
 
#define MAX(v) std::max_element(std::begin(v), std::end(v));
#define MIN(v) std::min_element(std::begin(v), std::end(v));
 
#define V_INT vector<int>
#define V_LL vector<long long>
#define MAT_INT vector<vector<int> >
 
using namespace std;
 
class BuyingTshirts
{
public:
    int meet(int T, vector <int> Q, vector <int> P)
    {
        int m = 0;
        int p = 0;
        bool f = false;
        bool k = false;
        int ans = 0;
        FOR(i, SZ(Q))
        {
            m+=Q[i];
            p+=P[i];
            f = false;
            k = false;
 
            if (m>=T)
            {
                m = m % T;
                f = true;
            }
            if (p>=T)
            {
                p = p % T;
                k = true;
            }
            cout << endl;
            if (f and k)
            {
                ans++;
            }
        }
 
 
 
        return ans;
    }
};
