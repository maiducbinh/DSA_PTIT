#include <bits/stdc++.h>

using namespace std;

struct job
{
    int id , dl , profit;
};

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        job a[n];
        for(job &i : a)
            cin >> i.id >> i.dl >> i.profit;
        sort(a , a + n , [](job x , job y)->bool{
             return x.profit > y.profit;
        });
        bool start[1001] = {0};
        int ans = 0 , cnt = 0;
        for(int i = 0 ; i < n ; i++)
            for(int j = a[i].dl - 1 ; j >= 0 ; j--)
                if(!start[j])
                {
                    cnt++;
                    start[j] = true;
                    ans += a[i].profit;
                    break;
                }
        cout << cnt << " " << ans << endl;
    }
}
