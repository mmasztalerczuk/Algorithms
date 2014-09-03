#include<iostream>
#include<vector>
#include<set>
#include<limits>
#include<algorithm>

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

vector<int> AllSets(int e, vector<int> A)
{
	vector<int> ans;
	FOR(i, (1 << e))
	{
		vector<int> a;
		int tmp = 0;		
		FOR(j,(e+1))
		{
			if ((1 << j) & i)
			{
				tmp+=A[j];
				//cout << "     " << j << endl;
			}
		}
		
		ans.push_back(tmp);
	}
	return ans;
}

class NumbersChallenge 
{
public:
 
	int MinNumber(vector<int> S) 
	{
	vector<int> ans = AllSets(S.size(), S);
		
	
	SORT(ans);

	FOR(i,2000001)
	{
		if(!SEARCH(ans,i))
		{
			return i;
		}
	}
	return -1;
	}
};

int main()
{
	vector<int> A{5,1,2};
	NumbersChallenge s;
	cout << s.MinNumber(A) << endl;
}
