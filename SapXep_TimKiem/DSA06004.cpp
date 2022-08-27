#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , m;
        cin >> n >> m;
        int a[n] , b[m];
        map <int , int> mp;
        set <int> s;
        for(int &i : a)
        {
            cin >> i;
            mp[i] = 1;
            s.insert(i);
        }
        for(int &i : b)
        {
            cin >> i;
            mp[i] = 2;
            s.insert(i);
        }
        for(int x : s)
            cout << x << " ";
        cout << endl;
        for(auto x : mp)
            if(x.second == 2)
                cout << x.first << " ";
        cout << endl;
    }
}
