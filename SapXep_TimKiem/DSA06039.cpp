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
        map<int , int> m;
        int ok = 0 , ans , a[n];
        for(int &i : a)
        {
            cin >> i;
            m[i]++;
        }
        for(int i : a)
            if(m[i] > 1 && !ok)
            {
                ans = i;
                ok = 1;
            }
        if(!ok) cout << "NO";
        else cout << ans;
        cout << endl;
    }
}
