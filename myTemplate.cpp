#include<iostream>
#include<vector>
#include<set>
#include<limits>

#define POS "Possible"
#define IMPO "Impossible"
#define MAXN 11
#define INF std::numeric_limits<int>::max()/2
#define FOR(x,y) for(int x=0;x<y;x++)
#define FOR_S(x,a,y) for(int x=a;x<y;x++)
#define SORT(a) sort(a.begin(), a.end());
#define SEARCH(a, b) binary_search(a.begin(), a.end(), b)

using namespace std;

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

vector<vector<int> > AllSets(int e)
{
	vector<vector<int> > ans;
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
