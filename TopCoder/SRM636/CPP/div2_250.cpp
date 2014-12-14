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

class GameOfStones
{
public:
	bool if_eq(vector<int> stones)
	{
		int tmp = stones[0];
		for(int i=0;i<stones.size();i++)
		{
			if(tmp!=stones[i])
				return 0;
		}
		return 1;
	}

	int count(vector<int> stones)
	{
		if(if_eq(stones))
			return 0;
		int sum = 0;
		int ans = 0;
		for(int i=0;i<stones.size();i++)
		{	
			sum += stones[i];
		}
		if (sum%stones.size()!=0)
		{
			return -1;
		}

		int t = sum/stones.size();
		for(int i=0;i<stones.size();i++)
                {
			if(stones[i]<t)
			{
				int tmp = t - stones[i];
				if(tmp%2!=0)
					return -1;
				else
					ans+=tmp/2;
			}
                        else
			{
				int tmp = stones[i] - t;
				if(tmp%2!=0)
					return -1;
			}
                }

		return ans;
	}

};

int main()
{
	GameOfStones x;
	return 0;
}
