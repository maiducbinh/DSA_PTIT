// Created by Mai Duc Binh

//         ██████╗ ██████╗ ██╗ █████╗ ███╗   ██╗        
//         ██╔══██╗██╔══██╗██║██╔══██╗████╗  ██║        
//         ██████╔╝██████╔╝██║███████║██╔██╗ ██║        
//         ██╔══██╗██╔══██╗██║██╔══██║██║╚██╗██║        
// ███████╗██████╔╝██║  ██║██║██║  ██║██║ ╚████║███████╗
// ╚══════╝╚═════╝ ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚══════╝

#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;

//Defines
#define tc()               \
    int T;                 \
    cin>>T;                \
    while(T--)
#define Sz size()
#define pii pair<int,int>
#define p pair
#define fi first
#define se second
#define __int128 lll
#define ll long long
#define ld long double
#define vt(C) vector<C>
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define reset(C) memset(C,0,sizeof(C))
#define rev(C) reverse(begin(C), end(C))
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

// Some useful std functions
template<typename T> T pmax(T &a) {return max_element(a.begin(), a.end()) - a.begin();}
template<typename T> T pmin(T &a) {return min_element(a.begin(), a.end()) - a.begin();}
template<typename T> istream& operator>>(istream& in, vector<T>& a) {for(auto &x : a) in >> x; return in;};// cin >> whole vector
template<typename T> ostream& operator<<(ostream& out, vector<T>& a) {for(auto &x : a) out << x << ' '; return out;}; // cout << whole vector
template<typename T1, typename T2> ostream& operator<<(ostream& out, const pair<T1, T2>& x) {return out << x.fi << ' ' << x.se;}
template<typename T1, typename T2> istream& operator>>(istream& in, pair<T1, T2>& x) {return in >> x.fi >> x.se;}
template<typename T> void lower(T &a) {for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++) a[i] = tolower(a[i]);}
template<typename T> void upper(T &a) {for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++) a[i] = toupper(a[i]);}
template<typename T> using matrix = vector<vector<T> >;
template<typename T> using rubik = vector<vector<vector<T> > >;// rubik<int> a: instead of vector<vector<vector<int> > > a;

// Functions
struct node
{
    int val;
    node *left, *right;
    node(int x)
    {
        val = x;
        left = right = NULL;
    }
};
void makeRoot(node *root, int u, int v, char c)
{
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}
void built(node *root, int u, int v, char c)
{
    if(root == NULL) return;
    if(root->val == u) makeRoot(root, u, v, c);
    else
    {
        built(root->left, u, v, c);
        built(root->right, u, v, c);
    }
}
bool check(node *root)
{
    return (root->left == NULL && root->right == NULL);
}
ll sum;
void duyet(node *root)
{
    if(root)
    {
        if(root->right && check(root->right)) sum += root->right->val;
        if(root->right && !check(root->right)) duyet(root->right);
        if(root->left && !check(root->left)) duyet(root->left);
    }
}
int main()
{
    faster();
    tc()
    {
        int n;
        cin >> n;
        node *root = NULL;
        while(n--)
        {
            int u, v; char c;
            cin >> u >> v >> c;
            if(root == NULL) 
            {
                root = new node(u);
                makeRoot(root, u, v, c);
            }
            else built(root, u, v, c);
        }
        sum = 0;
        duyet(root);
        cout << sum << endl;
    }
}