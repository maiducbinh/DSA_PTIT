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
        int a[n] , ans[n];
        map<int,int> m;
        for(int &i : a)
        {
            cin >> i;
            m[i]++;
        }
        stack<int> st;
        for(int i = 0 ; i < n ; i++)
        {
            if(st.empty()) st.push(i);
            else
            {
                while(!st.empty() && m[a[i]] > m[a[st.top()]])
                {
                    ans[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty())
            ans[st.top()] = -1, st.pop();
        for(int i : ans) cout << i << " ";
        cout << endl;
    }
}
