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
        vector<int> ke[n + 1];
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
            //ke[y].push_back(x);
        }
        for(int i = 1 ; i <= n ; i++)
            sort(ke[i].begin() , ke[i].end());
        for(int i = 1 ; i <= n ; i++)
        {
            cout << i << ": ";
            for(int j : ke[i]) cout << j << " ";
            cout << endl;
        }
    }
}

