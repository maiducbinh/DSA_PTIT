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
        vector<int> ke[1005];
        int vao[1005] = {0};//quen dat = 0
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
            vao[y]++;
        }
        int ok = 1;
        for(int i = 1 ; i <= n ; i++)
            if(ke[i].size() != vao[i])
            {
                ok = 0;
                break;
            }
        cout << ok << endl;
    }
}
