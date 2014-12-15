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
#define LEN(a) (int)a.length()

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




int main()
{
    string tmp;
    cin >> tmp;


    while(true)
    {

            std::size_t found2 = tmp.find(')');
            std::size_t found = tmp.rfind('(', found2);
            if (found==std::string::npos or found2==std::string::npos or found > found2)
            {
                break;
            }
            else
            {
                tmp.replace(found,  1, "");
                std::size_t found2 = tmp.find(')');
                tmp.replace(found2, 1, "");
            }

    }
    int h = 0;
    std::size_t found2 = tmp.find(')');
    if(found2!=std::string::npos)
        cout << -1 << endl;
    else {
        std::size_t found2 = tmp.rfind('#');
        std::size_t found  = tmp.rfind('(');

        if(found2<found)
        {
            cout << -1 << endl;
            return 0;
        }
        int o = 0;
        V_INT v;

        FOR(i, LEN(tmp))
        {
            if(tmp[i]=='(')
                o++;
            else{
                if(o<=0){
                    cout << -1 <<endl;
                    return 0;
                }
                v.push_back(1);
                o--;
            }
        }


        FOR(i, SZ(v)-1)
        {
            cout << v[i] << endl;
        }
        cout << o+1 << endl;
    }


    return 0;
}
