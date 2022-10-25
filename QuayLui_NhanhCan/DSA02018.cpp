#include <bits/stdc++.h>

using namespace std;
int x[6] , a[6] , dd[6] , ok;
vector <int> tmp;
vector <vector<int>> v;
void thuDau()
{
    for(int j = 1 ; j <= 3 ; j++)
    {
        tmp.push_back(j);
        if(tmp.size() == 4) v.push_back(tmp);
        else thuDau();
        tmp.pop_back();
    }
}

bool check()
{
    for(int i = 0 ; i < v.size() ; i++)
    {
        long long ans = a[x[1]];
        for(int j = 0 ; j < 4 ; j++)
        {
            if(v[i][j] == 1) ans += a[x[j + 2]];
            else if(v[i][j] == 2) ans -= a[x[j + 2]];
            else ans *= a[x[j + 2]];
        }
        if(ans == 23) return true;
    }
    return false;
}

void Try(int i)
{
    for(int j = 1 ; j <= 5 ; j++)
        if(!dd[j])
        {
            dd[j] = 1;
            x[i] = j;
            if(i == 5) {
                if(check()) {
                    ok = 1;
                    return;
                }
            }
            else Try(i + 1);
            dd[j] = 0;
        }
}

int main()
{
    int t;
    cin >> t;
    thuDau();//sinh dau
    while(t--)
    {
        for(int i = 1 ; i <= 5 ; i++)
            cin >> a[i];
        memset(dd , 0 , sizeof(dd));
        ok = 0;
        Try(1);//sinh hoan vi tung so roi tinh voi dau
        cout << (ok ? "YES" : "NO") << endl;
    }
}
