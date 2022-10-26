#include <bits/stdc++.h>
#define fi first
#define sec second

using namespace std;
int n;
string s , t;
multiset<string> v;

int bfs()
{
    queue<pair<string , int>> q;
    q.push({s , 1});
    set<string> se;
    se.insert(s);

    while(!q.empty())
    {
        pair<string,int> top = q.front(); q.pop();

        for(int i = 0 ; i < s.size() ; i++)
        {
            string tmp = top.fi;
            for(int j = 'A' ; j <= 'Z' ; j++)
            {
                tmp[i] = j;
                if(tmp == t)
                {
                    return top.sec + 1;
                }
                if(!se.count(tmp) && v.count(tmp))
                {
                    q.push({tmp , top.sec + 1});
                    se.insert(tmp);
                }
            }
        }
    }
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        v.clear();
        cin >> n >> s >> t;
        for(int i = 0 ; i < n ; i++)
        {
            string tmp;
            cin >> tmp;
            v.insert(tmp);
        }
        cout << bfs() << endl;
    }
}
