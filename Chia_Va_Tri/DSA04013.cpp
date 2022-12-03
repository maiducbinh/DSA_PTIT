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
        int a[n];
        for(int &i : a) cin >> i;
        sort(a , a + n);
        int cnt = n;
        int i = n / 2 - 1 , j = n - 1;
        while(i >= 0 && j >= n / 2)
        {
            if(2 * a[i] <= a[j])
            {
                cnt--;//ghep duoc thi 1 con ko dc nhin thay
                i--;
                j--;
            }
            else i--;
        }
        cout << cnt << endl;
    }
}
