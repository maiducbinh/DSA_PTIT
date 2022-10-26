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
        stack<int> st;
        for(int i = s.size() - 1 ; i >= 0 ; i--)
        {
            if(isdigit(s[i])) st.push(s[i] - '0');
            else
            {
                int t1 = st.top(); st.pop();
                int t2 = st.top(); st.pop();
                if(s[i] == '+') st.push(t1 + t2);
                else if(s[i] == '-') st.push(t1 - t2);
                else if(s[i] == '*') st.push(t1 * t2);
                else st.push(t1 / t2);
            }
        }
        cout << st.top() << endl;
    }
}
