#include <bits/stdc++.h>

using namespace std;
struct Object
{
    int weight , val;
    double frac;
};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , w;
        cin >> n >> w;
        Object a[n];
        for(Object &i : a)
        {
            cin >> i.val >> i.weight;
            i.frac = (double)i.val / i.weight;
        }
        sort(a , a + n , [](Object x , Object y) -> bool{
             return x.frac > y.frac;
        });
        int sumV = 0 , sumW = 0 , idx = 0;
        for(int i = 0 ; i < n ; i++)
            if(sumW <= w)
            {
                sumW += a[i].weight;
                sumV += a[i].val;
                idx = i;
            }
        double ans = sumV;
        if(sumW > w)
        {
            ans -= (double)(sumW - w) * a[idx].frac;
        }
        cout << setprecision(2) << fixed << ans << endl;
    }
}
