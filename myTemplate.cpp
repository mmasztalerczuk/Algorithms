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

void Floyd(int tab[][MAXN], int size)
{
    FOR(i,size)
        FOR(j,size)
            FOR(k,size)
            {
                if(tab[j][k] > tab[j][i] + tab[i][k])
                {
                    tab[j][k] = tab[j][i] + tab[i][k];
                }
            }
}


int palindrome(string a, int i, int j)
{
    //cout << "Checking " << a << " dla " << i << " " << j << endl;
    int mid = (j-i+1)/2;
    int p = mid + i;
    for(;i<=j;i++,j--)
    {
            if (a[i]!=a[j])
            {
                //cout << a[i] << " " << a[j] << endl;
                return 0;}

    }
    //cout << "FINE" << endl;
    return 1;
}

vector<vector<int> > AllSets(int e)
{
    MAT_INT ans;
    FOR(i, (1 << e))
    {
        vector<int> a;
        FOR(j,(e+1))
        {
            if ((1 << j) & i)
            {
                a.push_back(j);
                cout << "     " << j << endl;
            }
        }
        if (a.size() > 0)
            ans.push_back(a);
    }
    return ans;
}
