#include<iostream>
#define POS "Possible"
#define IMPO "Impossible"

using namespace std;


class DoubleLetter
{
	public:
		string ableToSolve(string S);

};

string DoubleLetter::ableToSolve(string S)
{
	for(int i=1;i<S.length();i++)
	{
		if (S[i-1] == S[i])
		{
			S = S.substr(0,i-1) + S.substr(i+1,S.length());
			i = 0;
		}
		
	}

	return S == "" ? POS : IMPO;
}


int main()
{
	DoubleLetter x;
	cout << x.ableToSolve("aabccb");


	return 0;
}
