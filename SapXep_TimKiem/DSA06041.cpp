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
        map<int,int> m;
        for(int &i : a)
        {
            cin >> i;
            m[i]++;
        }
        int Max = 0 , val = 0;
        for(int i : a)
            if(Max < m[i])
            {
                Max = m[i];
                val = i;
            }
        if(Max > n / 2) cout << val;
        else cout << "NO";
        cout << endl;
    }
}
