#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void Find(string s , ll k)
{
    ll n = s.size();
    while(n < k) n *= 2; //khi do dai xau ban dau khong chua du k ki tu
    while(n > s.size()) //khi ki tu can tim nam o xau dao
    {
        if(k > n / 2)
        {
            //ki tu nam o vi tri nao trong xau sau
            k -= n / 2;
            if(k > 1) k --;//neu k > 1 thi ki tu nam o vi tri k - 1 cua xau truoc
            else k = n / 2;//neu khong thi la ki tu cuoi cung cua xau truoc
        }
        n /= 2;
    }
    cout << s[k - 1] << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll k;
        cin >> k;
        Find(s , k);
    }
}
