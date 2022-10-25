#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> ke[1001];
        int n , m;
        cin >> n >> m;
        while(m--)
        {
            int x , y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++)
            if(ke[i].size() % 2) cnt++;
        if(cnt == 0) cout << 2 << endl;
        else if(cnt == 2) cout << 1 << endl;
        else cout << 0 << endl;
    }
}//tat ca cac dinh co bac chan => chu trinh euler
//co 2 dinh co bac le => duong di euler
