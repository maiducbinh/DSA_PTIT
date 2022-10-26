#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    stack<char> st;
    for(char i : s)
    {
        if(isalpha(i) || i == ' ') continue;
        else if(i == ')')
        {
            int ok = 0;
            while(st.top() != '(')
            {
                ok = 1;
                st.pop();
            }
            st.pop();
            if(!ok) return true;
        }
        else st.push(i);
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        getline(cin >> ws , s);
        cout << (check(s) ? "Yes" : "No") << endl;
    }
}
