#include<iostream>
#include<algorithm>

int main()
{
    std :: string str;

    std::cin >> str;

    int n;
    std::cin >> n;

    for(int i = 0; i<n ;i++)
    {
        int a,b,c;
        std::cin >> a >> b >> c;
        int tmp = c%(b+1-a);

        std::rotate(str.rend()-b, str.rend()-b+tmp, str.rend()-a+1);
    }
    std::cout << str << std::endl;
}
