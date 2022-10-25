#include <bits/stdc++.h>

using namespace std;
const int maxn = 20 * 100;
int prime[maxn + 1];
int n , a[20];
vector<vector<int>> v;
vector <int> tmp;
void init()
{
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= maxn ; i++) prime[i] = 1;
    for(int i = 2 ; i <= sqrt(maxn) ; i++)
        if(prime[i])
        {
            for(int j = i * i ; j <= maxn ; j += i)
                prime[j] = 0;
        }
}

void Try(int i , int sum)
{
    if(prime[sum]) v.push_back(tmp);
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
    init();
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        sort(a + 1 , a + n + 1 , greater<int>());
        tmp.clear();
        v.clear();
        Try(1 , 0);
        sort(v.begin() , v.end());
        for(vector <int> i : v)
        {
            for(int j : i) cout << j << " ";
            cout << endl;
        }
    }
}
