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
        int a[n] , b[n];
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        stack<int> st;
        for(int i = 1 ; i <= n ; i++)
        {
            while(!st.empty() && a[i] >= a[st.top()]) st.pop();
            if(st.empty()) b[i] = i;
            else b[i] = i - st.top();
            st.push(i);
        }
        for(int i = 1 ; i <= n ; i++) cout << b[i] << " ";
        cout << endl;
    }//stack luu cac gia tri giam dan den phan tu thu i
}
