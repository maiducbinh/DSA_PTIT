#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        for(int i = 0 ; i < s.size() && i < k ; i++)
        {
            //tim thang lon nhat cuoi cung
            //vd k = 1 , s = 15151 -> smax = 55111
            int m = i;
            for(int j = i + 1 ; j < s.size() ; j++)
                if(s[j] >= s[m])
                {
                    m = j;
                }
            if(s[m] > s[i]) {
                swap(s[m] , s[i]);
            }
            else k++;
        }
        cout << s << endl;
    }
}
