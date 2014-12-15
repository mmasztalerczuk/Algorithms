V_INT allDiviser(int n)
{
    V_INT v;
    for(int i=1; i<=sqrt(n); i++) {
        if (n % i == 0) {
            v.push_back(n / i);
            if((n/i)!=i)
                v.push_back(i);
        }
    }

    return v;
}

long long numberOfDiv(int n)
{
    int arr[100];
    FOR(i,100)
        arr[i]=0;

    long long ans;
    int p = 2;
    while(n>1)
    {
        if(n%p==0)
        {
            n/=p;
            arr[p]++;
        }
        else
        {
            p++;
        }
    }

    ans = 1;
    FOR(i, 100)
    {
        if(arr[i]!=0)
            ans*=(arr[i]+1);
    }
    return ans;
}
