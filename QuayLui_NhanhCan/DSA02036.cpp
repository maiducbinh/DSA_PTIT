#include <bits/stdc++.h>

using namespace std;
int n , a[20];
string s;
vector <vector<int>> v;
vector <int> tmp;

void Try(int i , int sum)
{
    if(sum % 2 == 1) v.push_back(tmp);
    if(i > n) return;
    for(int j = i ; j <= n ; j++)
    {
        tmp.push_back(a[j]);
        Try(j + 1 , sum + a[j]);
        tmp.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++)
            cin >> a[i];
        sort(a + 1 , a + n + 1 , greater<int>());
        s = "";
        v.clear();
        tmp.clear();
        Try(1 , 0);
        sort(v.begin() , v.end());
        for(vector <int> x : v)
        {
            for(int j : x) cout << j << " ";
            cout << endl;
        }
    }
}
