// C++ program to print all  
// permutations with duplicates allowed  
#include <bits/stdc++.h> 
using namespace std; 
  

// Function to print permutations of string  
// This function takes three parameters:  
// 1. String  
// 2. Starting index of the string  
// 3. Ending index of the string.  
vector<string> permute(string a, int l, int r)  
{  
    // Base case  
    vector<string> ans;
    vector<string> tmp;
    if (l == r) {
        tmp.push_back(a);
        return tmp;
    }
    else
    {  
        for (int i = l; i <= r; i++)  
        {  
            // Swapping done  
            swap(a[l], a[i]);  
            // Recursion called  
            bool flag = true;
            for (auto&& i : ans) {
                if (a == i) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                vector<string> rr = permute(a, l+1, r);            
                ans.insert(ans.end(), rr.begin(), rr.end());
            }
            swap(a[l], a[i]);  
        } 
        return ans;
    }  
}  
  
bool compareInterval(string a, string b) 
{ 
    return a < b;
} 

char decode(int c) {
    if (c%2==0) {
        return c/2+65;
    }
    else {
        return ((c-1)/2)+97;
    }
}

int code(char c) {
    int ans = 0;
    if (c >= 97) {
        ans += 1;
        c -= 97;
        return c*2 + 1;
    }
    else {
        c -= 65;
        return c*2;
    }
}
// Driver Code  
int main()  
{  
    int n=0;
    scanf("%d", &n);

    for (int tests=0;tests<n;tests++) {
        string text;
        cin>>text;
        int n = text.size();  
        vector<int> c;
        for(int i=0;i<n;i++) {
            int cq = code(text[i]);
            c.push_back(cq);
        }
        sort(c.begin(), c.end());
        do {
            for (auto&& i : c) std::cout << decode(i);
            cout << endl;
        } while (std::next_permutation(c.begin(),c.end()));

    }

    return 0;  
}  