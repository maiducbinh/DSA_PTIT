#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a , pair<int,int> b)
{
    if(a.second != b.second)
        return a.second > b.second;
    else return a.first < b.first;
}

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
        vector<pair<int,int>> v;
        for(auto i : m)
        {
            for(int j = 1 ; j <= i.second ; j++)
                v.push_back(i);
        }
        sort(v.begin() , v.end() , cmp);
        for(auto x : v)
            cout << x.first << " ";
        cout << endl;
    }
}
