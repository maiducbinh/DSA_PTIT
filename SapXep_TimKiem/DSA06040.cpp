#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n1 , n2 , n3;
        cin >> n1 >> n2 >> n3;
        int a[n1] , b[n2] , c[n3];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int &i : c) cin >> i;
        int i = 0 , j = 0 , k = 0;
        bool ok = false;
        while(i < n1 && j < n2 && k < n3)
        {
            if(a[i] == b[j] && b[j] == c[k])
            {
                cout << a[i] << " ";
                ok = true;
                i++;j++;k++;
            }
            else
                if(a[i] < b[j]) i++;
                else
                    if(b[j] < c[k]) j++;
                    else k++;
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}
