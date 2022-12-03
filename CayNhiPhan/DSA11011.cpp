#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *left, *right;

    node(int x)
    {
        data = x;
        left = right = NULL;
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
        makeRoot(root , u , v , c);
    else
    {
        insertNode(root->left , u , v , c);
        insertNode(root->right , u , v , c);
    }
}

bool check(node *root)
{
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left != NULL && root->right != NULL)
    {
        return check(root->left) && check(root->right);
    }
    else return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        node* root = NULL;
        for(int i = 0 ; i < n ; i++)
        {
            int u , v; char c;
            cin >> u >> v >> c;
            if(root == NULL)
            {
                root = new node(u);
                makeRoot(root , u , v , c);
            }
            else insertNode(root , u , v , c);
        }
        cout << check(root) << endl;
    }
}
