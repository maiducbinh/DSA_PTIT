#include <bits/stdc++.h>

using namespace std;
int n , m , a[501][501] , b[501][501];

int sum(int a[] , int n)
{
    int res = 0;
    stack<int>st;
    int i = 0;
    while(i < n)
    {
        if(st.empty()|| a[i] >= a[st.top()])
        {
            st.push(i);
            ++i;
        }
        else
        {
            int tmp = st.top();
            st.pop();
            if(st.empty())
            {
                res = max(res , a[tmp] * i);
            }
            else
            {
                res = max(res , a[tmp] * (i - st.top() - 1));
            }
        }
    }
    while(!st.empty())
    {
        int tmp = st.top();
        st.pop();
        if(st.empty())
        {
            res = max(res , a[tmp] * i);
        }
        else
        {
            res = max(res , a[tmp] * (i - st.top() - 1));
        }
    }
    return res;
}

void nhap()
{
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j];
        }
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
        {
            if(i == 0) b[i][j] = a[i][j];
            else
            {
                if(a[i][j]) b[i][j] = b[i - 1][j] + a[i][j];
                else b[i][j] = 0;
            }
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        int res = 0;
        for(int i = 0 ; i < n ;i++)
        {
            res = max(res , sum(b[i] , m));
        }
        cout << res << endl;
    }
}
