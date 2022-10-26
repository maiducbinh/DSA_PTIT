#include <bits/stdc++.h>

using namespace std;

string check(string s)
{
    stack<char> st;
    for(char i : s)
    {
        if(i == '(' || i == '{' || i == '[') st.push(i);
        else
        {
            if(i == ')')
            {
                if(!st.empty())
                {
                    if(st.top() == '(') st.pop();
                    else return "NO";
                }
                else return "NO";
            }
            else if(i == '}')
            {
                if(!st.empty())
                {
                    if(st.top() == '{') st.pop();
                    else return "NO";
                }
                else return "NO";
            }
            else if(i == ']')
            {
                if(!st.empty())
                {
                    if(st.top() == '[') st.pop();
                    else return "NO";
                }
                else return "NO";
            }
        }
    }
    return (st.empty() ? "YES" : "NO");
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}
