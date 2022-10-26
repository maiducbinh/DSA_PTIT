#include <bits/stdc++.h>

using namespace std;
vector<string> v;
int boi[1001];

bool check(string s , int n)
{
    long long tmp = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        tmp = tmp * 10 + (s[i] - '0');
        tmp %= n;
    }
    return tmp == 0;
}

string findMul(int n)
{
    queue<string> q;
    q.push("1");

    while(1)
    {
        string s = q.front(); q.pop();
        if(check(s , n)) return s;
        q.push(s + "0");
        q.push(s + "1");
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << findMul(n) << endl;
    }
}
