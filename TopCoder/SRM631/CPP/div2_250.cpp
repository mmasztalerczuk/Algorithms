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


class TaroGrid
{
public:
	int getNumber(vector<string> grid);
};

int TaroGrid::getNumber(vector<string> grid)
{
	int ans = 0;
        
	FOR(i,grid.size())
	{
	 int tmp_W = 0;
	 int tmp_B = 0;
         int tmp = 0;	
	 FOR(j,grid.size())
	 {
	     if (grid[j][i] == 'W')
	     {
		    tmp_B = 0;
                    tmp_W++;
		    tmp = std::max(tmp_W, tmp_B);
                    ans = std::max(ans, tmp); 
             }
	     if (grid[j][i] == 'B')
	     {
		    tmp_W = 0;
                    tmp_B++;
		    tmp = std::max(tmp_W, tmp_B);
                    ans = std::max(ans, tmp); 
             }
	 }
        }
        return ans;
}
