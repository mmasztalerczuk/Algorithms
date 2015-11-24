#include<iostream>

int main()
{
    int tests;
    std::cin >> tests;
    for(int i=0;i<tests;i++)
    {
        long long n;
        std::cin>>n;
        long long sum = 0;
        sum = n*(n+1)/2;
        for (long long p = 1;p<=n;)
        {
            sum-=2*p;
            p = p << 1;
        }
        std::cout << sum << std::endl;
    }
}
