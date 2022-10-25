#include <bits/stdc++.h>

using namespace std;
int n , m , a[501][501];
bool visited[501][501];

struct vitri
{
    int x , y , cphi;
};

void nhap()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];
    memset(visited , false , sizeof(visited));
}

struct cmp{

bool operator() (vitri a,vitri b) {return a.cphi > b.cphi;}

};//mac dinh dung cho priority queue

int dx[] = {0 , 0 , -1 , 1};
int dy[] = {-1 , 1 , 0 , 0};

void BFS()
{
    priority_queue<vitri , vector<vitri> , cmp> q;
    q.push({1 , 1 , a[1][1]});
    visited[1][1] = true;
    while(!q.empty())
    {
        vitri v = q.top(); q.pop();

        for(int k = 0 ; k < 4 ; k++)
        {
            int i = v.x + dx[k];
            int j = v.y + dy[k];
            if(i == n && j == m)
            {
                cout << v.cphi + a[i][j] << endl;
                return;
            }
            if(i <= n && i >= 1 && j >= 1 && j <= m && !visited[i][j])
            {
                visited[i][j] = true;
                q.push({i , j , v.cphi + a[i][j]});
            }
        }
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        BFS();
    }
}
