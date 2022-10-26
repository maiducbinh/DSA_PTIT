#include <bits/stdc++.h>
#define fi first
#define se second

using namespace std;
string s , t;
int prime[10005];

void sang()
{
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= 10000 ; i++)
        prime[i] = 1;
    for(int i = 2 ; i * i <= 10000 ; i++)
        if(prime[i])
            for(int j = i * i ; j <= 10000 ; j+=i)
                prime[j] = 0;
}
int bfs()
{
    queue <pair<string,int>> q;
    q.push({s , 0});
    set<string> se; se.insert(s);

    while(!q.empty())
    {
        pair<string,int> top = q.front(); q.pop();

        string tmp = top.fi;
        if(tmp == t) return top.se;

        for(int i = 0 ; i < 4 ; i++)
        {
            tmp = top.fi;
            for(char j = '0' ; j <= '9' ; j++)
            {
                tmp[i] = j;
                if(prime[stoi(tmp)] && !se.count(tmp) && stoi(tmp) > 1000)//quen dieu kien co 4 chu so
                {
                    se.insert(tmp);
                    q.push({tmp , top.se + 1});
                }
            }
        }
    }
}
int main()
{
    sang();
    int T;
    cin >> T;
    while(T--)
    {
        cin >> s >> t;
        cout << bfs() << endl;
    }
}
