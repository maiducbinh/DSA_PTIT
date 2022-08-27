#include <bits/stdc++.h>

using namespace std;

int distance(int a[] , int n)
{
    int lm[n];
    lm[0] = a[0];
    for(int i = 1 ; i < n ; i++)
        lm[i] = min(lm[i - 1] , a[i]);
    int i = n - 1 , j = n - 1;
    int m = -1;
    while(i >= 0 && j >= 0)
    {
        if(a[j] > lm[i])
        {
            m = max(m , j - i);
            i--;
        }
        else j--;
    }
    return m;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        cout << distance(a , n) << endl;
    }
}
