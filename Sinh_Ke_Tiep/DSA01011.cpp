#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int k = 1 ; k <= t ; k++)
    {
        int stt;
        cin >> stt;
        string s;
        cin >> s;
        cout << k << ' ';
        int i = s.size() - 2;
        while(s[i] >= s[i + 1] && i >= 0) i--;
        if(i == -1) cout << "BIGGEST";
        else
        {
            int j = s.size() - 1;
            while(s[j] < s[i]) j--;
            swap(s[i] , s[j]);
            int l = i + 1 , r = s.size() - 1;
            while(l <= r)
            {
                swap(s[l] , s[r]);
                l++;r--;
            }
            cout << s;
        }
        cout << endl;
    }
}
