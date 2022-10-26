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
        int a[n], b[n] , c[n];
        for(int &i : a) cin >> i;
        stack<int> st1 , st2;
        for(int i = 0 ; i < n ; i++)
        {
            if(st1.empty()) st1.push(i);
            else
            {
                while(!st1.empty() && a[i] > a[st1.top()])
                {
                    b[st1.top()] = i;
                    st1.pop();
                }
                st1.push(i);
            }
        }
        while(!st1.empty())
            b[st1.top()] = -1, st1.pop();

        for(int i = 0 ; i < n ; i++)
        {
            if(st2.empty()) st2.push(i);
            else
            {
                while(!st2.empty() && a[i] < a[st2.top()])
                    c[st2.top()] = a[i], st2.pop();
                st2.push(i);
            }
        }
        while(!st2.empty())
            c[st2.top()] = -1, st2.pop();
        for(int i = 0 ; i < n ; i++)
            if(b[i] == -1 || c[b[i]] == -1) cout << -1 << " ";
            else cout << c[b[i]] << " ";
        cout << endl;
    }
}// b[i] luu chi so phan tu lon hon ben phai a[i]
//c[i] luu phan tu nho hon ben phai cua a[i]
//=> c[b[i]] luu phan tu nho hon ben phai cua phan tu lon hon ben phai a[i]
