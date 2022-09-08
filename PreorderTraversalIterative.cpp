#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void iterativePreorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    stack<node*>st;
    st.push(root);
    while(!st.empty())
    {
        root = st.top();
        st.pop();
        cout<<root->data<<" ";
        if(root->right != NULL)
        {
            st.push(root->right);
        }
        if(root->left != NULL)
        {
            st.push(root->left);
        }
    }
}


int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->left->right->left = new node(5);
    root->left->right->right = new node(6);

    iterativePreorder(root);
    return 0;

}