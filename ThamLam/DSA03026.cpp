#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , s;
    cin >> n >> s;
    if(n * 9 < s || (n > 1 && s == 0)) cout << "-1 -1";
    else{
        int a[n] , b[n];
        int s1 = s - 1 , s2 = s;
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            if(s1 >= 9)
            {
                a[i] = 9;
                s1 -= 9;
            }
            else{
                a[i] = s1;
                s1 = 0;
            }
        }
        a[0]++;
        for(int i : a) cout << i;
        cout << " ";
        for(int i = 0 ; i < n ; i++)
        {
            if(s2 >= 9)
            {
                b[i] = 9;
                s2 -= 9;
            }
            else
            {
                b[i] = s2;
                s2 = 0;
            }
        }
        for(int i : b) cout << i;
    }
}
