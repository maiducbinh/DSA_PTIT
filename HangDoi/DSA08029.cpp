#include <bits/stdc++.h>

using namespace std;

vector<int> qtrai(vector<int> v)
{
    vector<int> u(6);
    u[0] = v[3];
    u[1] = v[0];
    u[2] = v[2];
    u[5] = v[5];
    u[3] = v[4];
    u[4] = v[1];
    return u;
}

vector<int> qphai(vector<int> v)
{
    vector<int> u(6);
    u[0] = v[0];
    u[3] = v[3];
    u[1] = v[4];
    u[2] = v[1];
    u[4] = v[5];
    u[5] = v[2];
    return u;
}

bool cmp(vector<int> x , vector<int> y)
{
    for(int i = 0 ; i < 6 ; i++)
        if(x[i] != y[i]) return 0;
    return 1;
}

void xuli()
{
    vector<int> a(6) , b(6);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    queue<pair<vector<int> , int>> q;
    q.push({a , 0});
    while(1)
    {
        pair<vector<int> , int> tmp = q.front(); q.pop();
        if(cmp(tmp.first , b))
        {
            cout << tmp.second << endl;
            return;
        }
        q.push({qtrai(tmp.first) , tmp.second + 1});
        q.push({qphai(tmp.first) , tmp.second + 1});
    }
}

int main()
{
    int t = 1;
    //cin >> t;
    while(t--)
    {
        xuli();
    }
}
