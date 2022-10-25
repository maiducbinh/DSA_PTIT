#include <bits/stdc++.h>

using namespace std;

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
        int f[n];
        //memset(f , 1 , sizeof(f));//sai o day??
        int ans = 0;
        f[0] = 1;
        for(int i = 1 ; i < n ; i++)
        {
            f[i] = 1;
            for(int j = 0 ; j < i ; j++)
                if(a[i] >= a[j]) f[i] = max(f[i] , f[j] + 1);
            ans = max(f[i] , ans);
        }
        cout << n - ans << endl;//so buoc it nhat = n - so phan tu da duoc sap xep
    }
}
