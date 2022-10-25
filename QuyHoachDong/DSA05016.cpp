#include <bits/stdc++.h>

using namespace std;
vector<int> ugly;

void init()
{
    priority_queue<int, vector<int> , greater<int>> q;
    q.push(1);
    unordered_set<int> se;
    se.insert(1);

    while(1)
    {
        int tmp = q.top(); q.pop();
        ugly.push_back(tmp);
        if(ugly.size() > 1e4) break;
        if(!se.count(tmp * 2))
        {
            se.insert(tmp * 2);
            q.push(tmp * 2);
        }
        if(!se.count(tmp * 3))
        {
            se.insert(tmp * 3);
            q.push(tmp * 3);
        }
        if(!se.count(tmp * 5))
        {
            se.insert(tmp * 5);
            q.push(tmp * 5);
        }
    }
}
int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << ugly[n - 1] << endl;
    }
}
