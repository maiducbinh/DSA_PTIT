#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    stack<char> st;
    for(char i : s)
    {
        if(i == ']')
        {
            string tmp = "";//dung string de luu tam
            while(st.top() != '[' && st.size())//phia truoc dau ']' se la cac chu cai
            {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();//xoa not '[' o phia truoc

            string num = "";//tim so lan lap
            while(st.size() && isdigit(st.top()))
            {
                num = st.top() + num;
                st.pop();
            }
            if(num == "")
                num = "1";
            int so = stoi(num);
            string t = "";
            for(int j = 0 ; j < so ; j++)
                t += tmp;
            for(char x : t)
                st.push(x);
        }
        else st.push(i);
    }
    string res = "";
    while(st.size())
    {
        res = st.top() + res;
        st.pop();
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}
