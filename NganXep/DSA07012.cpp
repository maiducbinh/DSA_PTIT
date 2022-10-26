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
        for(char i : s)
        {
            if(isalpha(i))
                st.push(string(1 , i));
            else{
                string t1 = st.top(); st.pop();
                string t2 = st.top(); st.pop();
                st.push('(' + t2 + i + t1 + ')');
            }
        }
        cout << st.top() << endl;
    }
}
