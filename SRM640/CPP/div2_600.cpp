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


// MAX(K) E 2^K <= number
int pot(long long number)
{
    long long i = 1;
    int ans = 0;
    while (true)
    {
        if (i>=number)
            break;
        i*=2;
        ans++;
    }
    return ans;
}

int isChild(long long number, V_LL table)
{
    number/=2;
    while(number!=0)
    {
        if(SEARCH(table, number))
        {
            return 1;
        }
        number/=2;
    }
    return 0;
}

class NumberGameAgain
{
public:
    long long solve(int k, vector<long long> table)
    {
        long long ans = 0;
        SORT(table);
        long long MAX = (1LL << k);
        long long rev = 0;
        FOR(i, SZ(table))
        {
            if(!isChild(table[i], table))
            {
                int tmp = 0;
                long long tmp_2 = table[i];
                while(tmp_2*2<MAX)
                {
                    tmp_2*=2;
                    tmp++;
                }
                cout<< (1LL << (tmp+1)) -1<< endl;
                rev += (1LL << (tmp+1)) -1;
            }
        }

        return MAX-rev-2;
    }
};

int main()
{

    NumberGameAgain x;

    cout << x.solve(3, {2,3}) << endl;
    return 0;
}
