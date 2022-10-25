#include <bits/stdc++.h>

using namespace std;
int prime[201] = {0};
vector <int> Prime , tmp;
int n , s , p;
vector <string> v;
void sangnt()
{
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= 200 ; i++)
        prime[i] = 1;
    for(int i = 2 ; i * i <= 200 ; i++)
        if(prime[i])
        {
            for(int j = i * i ; j <= 200 ; j += i)
                prime[j] = 0;
        }
    for(int i = 2 ; i <= 200 ; i++)
        if(prime[i]) Prime.push_back(i);
}

void Try(int i , int sum)
{
    if(sum > s) return;
    if(sum == s && tmp.size() == n)
    {
        string ans = "";
        for(int k = 0 ; k < tmp.size() ; k++)
            ans += to_string(tmp[k]) + " ";
        v.push_back(ans);
        return;
    }
    for(int j = i ; j < Prime.size() ; j++)
    {
        if(sum + Prime[j] <= s)
        {
            tmp.push_back(Prime[j]);
            Try(j + 1 , sum + Prime[j]);
            tmp.pop_back();
        }
    }
}
int main()
{
    sangnt();
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        tmp.clear();
        cin >> n >> p >> s;
        auto i = upper_bound(Prime.begin() , Prime.end() , p);
        Try(i - Prime.begin() , 0);
        cout << v.size() << endl;
        for(string x : v) cout << x << endl;
    }
}
