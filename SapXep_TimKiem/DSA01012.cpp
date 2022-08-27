#include <bits/stdc++.h>

using namespace std;
int n , ok , x[11];

void sinh()
{
    int i = n;
    while(i > 0 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else x[i] = 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ok = 1;
        memset(x , 0 , sizeof(x));
        vector <string> v;
        while(ok)
        {
            cout << x[1];
            for(int i = 2 ; i <= n ; i++)
            {
                if(x[i - 1] == 1) cout << 1 - x[i];
                else cout << x[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
