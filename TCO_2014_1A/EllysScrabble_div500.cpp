#include<iostream>
#include<vector>
#include<set>
#include<limits>
#include<cstring>
#include<algorithm>

int DEBUG = 0;

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
#define FOREACH(y,x) for(set<int>::iterator y=x.begin(); y!=x.end(); y++)
#define PRINT(a) if(DEBUG) cout<<a<<endl;
#define PRINT_ALL(a) if(DEBUG) { for(auto printAll=a.begin(); printAll!=a.end(); printAll++) cout<<*printAll<<" "; cout<<endl; }

int n;

using namespace std;
class EllysScrabble
{
public:

	string getMin(string text, int k)
	{
	    vector<int> value;
	    FOR(i, text.length())
		value.push_back(i);

	    vector<char> ans;

	    FOR(i, text.length())
	    {  
		if (value[0] + k == i)
		        {
		            ans.push_back(text[value[0]]);
		                value.erase(value.begin());
		        }
		else
		{
		    char c = 'Z';
		    FOR(j, min(k+1, SZ(value)))
		    {
		        c = min(c, text[value[j]]);
		    }
		    ans.push_back(c);

		    FOR(j, min(k+1, SZ(value)))
		    {
		        if (text[value[j]] == c){
		            value.erase(value.begin() + j);       
		            break;
		        }
		    }
		}
		PRINT_ALL(ans)
		        PRINT_ALL(value);       
	    }

	    string tmp;
	    FOR(i, SZ(ans))
	    {
		tmp = tmp + ans[i];
	    }

	    return tmp;

	}
};

