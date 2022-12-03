#include <bits/stdc++.h>

using namespace std;

string sum(int k , string x , string y)
{
    while(x.size() < y.size()) x = '0' + x;
    while(y.size() < x.size()) y = '0' + y;
    int l = x.size();
    int nho = 0;
    string ans = "";
    for(int i = l - 1 ; i >= 0 ; i--)
    {
        int num = (x[i] - '0') + (y[i] - '0') + nho;
        ans = char(num % k + '0') + ans;
        nho = num / k;
    }
    if(nho > 0) ans = char(nho % k + '0') + ans;
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        string a , b;
        cin >> a >> b;
        cout << sum(k , a , b) << endl;
    }
}
