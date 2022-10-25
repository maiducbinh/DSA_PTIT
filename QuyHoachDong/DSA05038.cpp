#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int,int> a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i].first >> a[i].second;
    vector<pair<int,int>> v;
    for(int i = 0 ; i < n ; i++)
    {
        auto j = lower_bound(v.begin() , v.end() , {a[i].first,a[i].second});
        if(j != v.end())
        {
            if((*j).second > a[i].second)
                *j = a[i];
        }
        else v.push_back({a[i].first , a[i].second});
    }
    cout << v.size();
}
