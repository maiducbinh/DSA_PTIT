#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        right = left = NULL;
    }
};

void makeRoot(node *root , int u , int v , char c)
{
    if(c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root , int u , int v , char c)
{
    if(root == NULL) return;
    if(root->data == u)
        makeRoot(root , u , v, c);
    else
    {
        insertNode(root->left , u , v , c);
        insertNode(root->right , u , v , c);
    }
}


void levelOrder(node *root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *top = q.front(); q.pop();
        cout << top->data << " ";
        if(top->left != NULL) q.push(top->left);
        if(top->right != NULL) q.push(top->right);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        node *root = NULL;
        int u , v; char c;
        cin >> u >> v >> c;
        root = new node(u);
        makeRoot(root , u , v , c);
        for(int i = 0 ; i < n - 1 ; i++)
        {
            int u , v; cin >> u >> v;
            char c; cin >> c;
            insertNode(root , u , v , c);
        }
        levelOrder(root);
        cout << endl;
    }
}
