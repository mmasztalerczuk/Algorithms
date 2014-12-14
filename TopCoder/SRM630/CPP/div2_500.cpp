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


class Egalitarianism3Easy
{
	public:
		int maxCities(int n, vector <int> a, vector <int> b, vector <int> len);
};
int dist[MAXN][MAXN];

int Egalitarianism3Easy::maxCities(int n, vector <int> a, vector <int> b, vector <int> len)
{
	if (n==1)
		return 1;

	FOR(i,n)
	{
	 	FOR(j,n)
	 		dist[i][j] = INF;	
	}

	FOR(i,a.size())
	{
		dist[a[i]-1][b[i]-1] = len[i];
		dist[b[i]-1][a[i]-1] = len[i];
		dist[a[i]-1][a[i]-1] = 0;
		dist[b[i]-1][b[i]-1] = 0;
	}	

	Floyd(dist, n);
	
	auto ans = AllSets(n);
	
	int max = 0;
	
	FOR(i, ans.size())
	{
		set<int> tmp;
		FOR(j, ans[i].size())
		   FOR_S(k, (j+1), ans[i].size())
		  	tmp.insert(dist[ans[i][j]][ans[i][k]]);
		   
		if (tmp.size() == 1)
		{
			if (max < ans[i].size())
				max = ans[i].size();			
		}
	}
	return max;
 
}


int main()
{
	Egalitarianism3Easy s;
	int n = 4;
	vector<int> a = {1,1,1};
	vector<int> b = {2,3,4};
	vector<int> c = {1,1,1};
	cout << s.maxCities(n,a,b,c);	
	return 0;
}
