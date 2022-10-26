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
        stack<char> st;
        string res = "";
        for(int i : s)
        {
            if(isalpha(i)) res += i;
            else if(i == '+' || i == '-')
            {
                if(st.empty()) {
                    res += i;
                    st.push(i);
                }
                else
                {
                    if((i == '+' && st.top() == '-') || (i == '-' && st.top() == '+')) {
                        res += '-';
                        st.push('-');
                    }
                    else if(i == st.top())
                    {
                        if(i == '+')
                        {
                            st.push('+');
                            res += '+';
                        }
                        else
                        {
                            st.push()
                        }
                    }
                }
            }
        }
    }
}
