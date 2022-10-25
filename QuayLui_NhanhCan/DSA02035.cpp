#include <bits/stdc++.h>

using namespace std;
int n , k , a[9];
vector<string> v;

int solve()
{
    int Max = INT_MIN , Min = INT_MAX;
    for(string x : v)
    {
        string s = "";
        for(int i = 0 ; i < k ; i++)
            s += x[a[i]];
        int so = stoi(s);
        Max = max(Max , so);
        Min = min(Min , so);
    }
    return Max - Min;
}

int main()
{
    cin >> n >> k;
    while(n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for(int i = 0 ; i < k ; i++)
        a[i] = i;
    int ans = 1e9;
    do{
        ans = min(ans , solve());
    }while(next_permutation(a , a + k));
    cout << ans;
}
