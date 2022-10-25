#include <bits/stdc++.h>

using namespace std;

struct daThuc
{
    int hs , mu;
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m , n;
        cin >> m >> n;
        daThuc a[m] , b[n];
        for(int i = 0 ; i < m ; i++)
        {
            cin >> a[i].hs;
            a[i].mu = i;
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin >> b[i].hs;
            b[i].mu = i;
        }
        vector<vector<daThuc>> v;
        for(int i = 0 ; i < m ; i++)
        {
            vector<daThuc> temp;
            for(int j = 0 ; j < n ; j++)
            {
                temp.push_back({a[i].hs * b[j].hs , a[i].mu + b[j].mu});
            }
            v.push_back(temp);
        }
        int p = 0;
        while(p < m + n - 1)
        {
            int coef = 0;
            for(int i = 0 ; i < v.size() ; i++)
                for(int j = 0 ; j < v[i].size() ; j++)
                {
                    if(v[i][j].mu == p) coef += v[i][j].hs;
                }
            cout << coef << " ";
            p++;
        }
        cout << endl;
    }
}
