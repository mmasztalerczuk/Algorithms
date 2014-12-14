#include<iostream>
#include<map>
using namespace std;

map<long long, long long> arr;


class TaroCoins {  
public:  
    long long dfs(long long n)  
    {  
        if(arr.count(n)) 
		return arr[n];  
        long long tmp=0;  
        if(n%2LL) 
		tmp=dfs(n/2LL);  
        else 
		tmp=dfs(n/2LL)+dfs(n/2LL-1LL);  
        arr[n]=tmp;  
        return tmp;  
    }  
    long long getNumber(long long N)  
    {  
        arr[0]=1;  
        return dfs(N);  
    }  
};  

int main()
{
	TaroCoins s;
	cout << s.getNumber(6) << endl;
}


