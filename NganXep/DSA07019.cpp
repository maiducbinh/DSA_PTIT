#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll h[n];
        for(ll &i : h) cin >> i;
        stack<int> st;
        ll sqr = 0;
        int i = 0;
        while(i < n)
        {
            if(st.empty() || h[i] > h[st.top()])//st luu gia tri tang dan cua cac canh
                st.push(i), i++;
            else{
                int top = st.top(); st.pop();
                if(st.empty())//truoc top ko co canh nao ngan hon no thi chieu rong tinh tu 0 -> i
                    sqr = max(sqr, h[top] * i);
                else//truoc top co thang nho hon no thi chieu rong bi gioi han den thang st.top()
                {
                    sqr = max(sqr, h[top] * (i - st.top() - 1));
                }
            }
        }
        while(!st.empty())
        {
            int top = st.top(); st.pop();
            if(st.empty()) sqr = max(sqr, h[top] * i);
            else sqr = max(sqr, h[top] * (i - st.top() - 1));
        }
        cout << sqr << endl;
    }
}
