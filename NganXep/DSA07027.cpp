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
        stack<int> st;
        int b[n];
        for(int i = 0 ; i < n ; i++)
        {
            if(st.empty()) st.push(i);
            else{
                while(!st.empty() && a[i] > a[st.top()])
                {
                    b[st.top()] = a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty())
        {
            b[st.top()] = -1;
            st.pop();
        }
        for(int i : b) cout << i << " ";
        cout << endl;
    }
}
