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



int main() {
    string n;
    int q = 1;
    while(getline(cin, n))
    {
        if (q)
            q=0;
        else
            cout << endl;
        int p = stoi(n);
        map<std::string, int> m;
        string tmp;
        getline(cin, tmp);
        auto friends = split(tmp, ' ');
        FOR(i, SZ(friends))
            m[friends[i]] = 0;
        FOR(i, p)
        {
            getline(cin, tmp);
            auto v = split(tmp, ' ');

            int money = stoi(v[1]);
            int k = stoi(v[2]);
            int net = money;
            if (k!=0)
               net = money - k*(money/k);
            m[v[0]] += -money + net;
            FOR(j,k)
            {
                m[v[3+j]] += money/k;
            }
        }

        FOR(i, SZ(friends))
            cout << friends[i] << " " << m[friends[i]] << endl;

    }
}
