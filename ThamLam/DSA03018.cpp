#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s = "";
        int ok = 0;
        for(int i = n / 7 ; i >= 0 ; i--)
        {
            int tmp = n - 7 * i;
            if(tmp % 4 == 0)
            {
                ok = 1;
                for(int j = 0 ; j < tmp / 4 ; j++)
                    cout << 4;
                for(int j = 0 ; j < i ; j++)
                    cout << 7;
                break;//quen khong break
            }
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}
