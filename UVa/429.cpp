#include<iostream>
#include<cstring>
#include<vector>
#include<map>
using namespace std;

#define PA pair<int, int>

int count(string a, string b)
{
    int ans = 0;
    if (a.length() != b.length())
        return -1;
    for(int i=0;i<a.length();i++)
        if (a[i]!=b[i])
            ans++;
    return ans;
}

int main()
{
    int tests;
    string line;
    cin >> tests;

    for(int test=0;test<tests;test++)
    {
        int arr[202][202];
        vector<string> v;
        int number = 0;
        while(1)
        {
            cin >> line;
            if (line == "")
                continue;
            else if(line == "*")
                break;
            else{
                v.push_back(line);
//                pair<int, int> w(number, number);
                arr[number][number] = 0;
                number++;
            }
        }
           
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                auto r = count(v[i], v[j]);
                if (r > 1)
                {
                    r = 1000;
                }
                arr[i][j] = r;
                arr[j][i] = arr[i][j];

            }
        }

        for(int k=0;k<v.size();k++)
        {
            for(int i=0;i<v.size();i++)
            {
                for(int j=0;j<v.size();j++)
                {
                    if ((v[i].length() != v[k].length()) and v[k].length() != v[j].length())
                        continue;
                    if (arr[i][j] > arr[i][k] + arr[k][j])
                        arr[i][j] = arr[i][k] + arr[k][j];
                }   
            }   
        }
        string tmp;
        std::getline(std::cin, tmp);
        while(1)
        {
            string a,b,line;
            int aa, bb;
            std::getline(std::cin, line);
            if (line.empty())
            {
                break;
            }

            int space;           
            for(int i=0;i<line.length();i++)
            {
                if (line[i]==' ')
                {
                    space = i;
                }
           
            }

            a = line.substr(0, space);
            b = line.substr(space+1, line.length());

            for(int i=0;i<v.size();i++)
            {
                if (v[i] == a)
                    aa = i;
                if (v[i] == b)
                    bb = i;
            }
            cout << a << " " << b << " " << arr[aa][bb] << endl;
        }
        if (test+1 < tests)
            cout << endl;
   
    }

    return 0;
}


