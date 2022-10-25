#include <bits/stdc++.h>

using namespace std;
int n , k , c[101][101] , x[101] , cot[101] , sum = 0;
vector <string> v;
void nhap()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++) cin >> c[i][j];
}

void xuli()
{
    string s = "";
    for(int i = 1 ; i <= n ; i++)
        s += char(x[i] + '0') + " ";
    v.push_back(s);
}
void Try(int i)
{
    for(int j = 1 ; j <= n ; j++)
        if(cot[j] == 0)
        {
            cot[j] = 1;
            x[i] = j;
            sum += c[i][j];
            if(i == n)
            {
                if(sum == k) xuli();
            }
            else Try(i + 1);
            cot[j] = 0;
            sum -= c[i][j];
        }
}
int main()
{
    nhap();
    Try(1);
    cout << v.size() << endl;
    for(string x : v)
        cout << x << endl;
}
