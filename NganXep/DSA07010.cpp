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
        stack<string> st;
        for(int i = s.size() - 1 ; i >= 0 ; i--)
        {
            if(isalpha(s[i]))
            {
                string tmp = "";
                tmp += s[i];
                st.push(tmp);
            }
            else
            {
                string t1 = st.top(); st.pop();
                string t2 = st.top(); st.pop();
                string tmp = t1 + t2 + s[i];
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}
