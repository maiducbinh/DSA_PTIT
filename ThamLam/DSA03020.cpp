#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int ans = 0 , dis = 0;
        stack <char> st;
        for(char i : s)
        {
            if(st.empty()) {
                st.push(i);
                dis = 0;
            }
            else if(st.top() == '[' && i == ']')
            {
                dis += 2;
                st.pop();
            }
            else if(st.top() == ']' && i == '[')
            {
                ans += st.size() + dis;
                st.pop();
            }
            else if(i == ']' && st.top() == ']')
                st.push(i);
            else if(i == '[') st.push(i);
        }
        cout << ans << endl;
    }
}
