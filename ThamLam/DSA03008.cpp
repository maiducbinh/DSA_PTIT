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
        pair<int,int> a[n];
        for(pair<int,int> &i : a)
            cin >> i.first;
        for(pair<int,int> &i : a)
            cin >> i.second;
        sort(a , a + n , [](pair<int,int> x, pair<int,int> y)->bool{
             return x.second < y.second;
        });
        int cur = a[0].second , cnt = 1;
        for(int i = 1 ; i < n ; i++)
        {
            if(cur <= a[i].first)
            {
                cur = a[i].second;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
