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
#define FOR_S(x,a,y) for(int x=a;x<=y;x++)
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
#define MAT_INT vector<vector<int> >

int n;

using namespace std;

V_INT allDiviser(int n)
{
    V_INT v;
    for(int i=1; i<=sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(n / i);
            if((n/i)!=i)
                v.push_back(i);
        }
    }

    return v;
}

long long numberOfDiv(int n)
{
    int arr[100];
    FOR(i,100)
        arr[i]=0;

    long long ans;
    int p = 2;
    while(n>1)
    {
        if(n%p==0)
        {
            n/=p;
            arr[p]++;
        }
        else
        {
            p++;
        }
    }

    ans = 1;
    FOR(i, 100)
    {
        if(arr[i]!=0)
            ans*=(arr[i]+1);
    }
    return ans;
}

int main()
{
         //cout << numberOfDiv(6006);
        //allDiviser(120);
        int a, b;
        cin >> a >> b;
        if(a<b)
        {
            cout << 0 << endl;
        }

        if (a==b)
        {
            cout << "infinity\n";
        }

        if(a>b)
        {
            int ans = 0;
            V_INT v= allDiviser(a-b);
            FOR(i,SZ(v)) {
                //cout << v[i] << endl;
                if (v[i] > b) {
                    ans++;
                }
            }
            cout << ans << endl;
        }

    return 0;
}
