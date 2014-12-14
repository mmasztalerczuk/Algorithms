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
 
 
class fPoint
{
public:
    int x;
    int y;
 
};
 
float sign (fPoint p1, fPoint p2, fPoint p3)
{
    return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
}
 
bool PointInTriangle (fPoint pt, fPoint v1, fPoint v2, fPoint v3)
{
    bool b1, b2, b3;
 
    b1 = sign(pt, v1, v2) < 0.0f;
    b2 = sign(pt, v2, v3) < 0.0f;
    b3 = sign(pt, v3, v1) < 0.0f;
 
    return ((b1 == b2) && (b2 == b3));
}
 
 
class TrianglesContainOriginEasy
{
public:
    int count(vector <int> x, vector <int> y)
    {
        int ans = 0;
        fPoint z;
        z.x = 0;
        z.y = 0;
        FOR(i, SZ(x)){
            FOR_S(j, i+1, SZ(y)) {
                FOR_S(k, j+1, SZ(x)) {
                    fPoint a;
                    a.x = x[i];
                    a.y = y[i];
                    fPoint b;
                    b.x = x[j];
                    b.y = y[j];
                    fPoint c;
                    c.x = x[k];
                    c.y = y[k];
 
                    if(PointInTriangle(z,a,b,c))
                        ans++;
                }
            }
 
        }
 
        return ans;
    }
};
