#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
//! insert Binary Search Tree
Node *insertBST(Node *root, int value)
{

    if (root == nullptr)
    {
        return new Node(value);
    }

    if (value < root->data)
    {
        root->left = insertBST(root->left, value);
    }
    else
    {
        root->right = insertBST(root->right, value);
    }
    return root;
};

//! print InOrder Traversal

void printInorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

//! print PostOrder Traversal

void printPostorder(Node *root)
{
    if (root == nullptr)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

//! print preOrder traversal
void printPreorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    printPostorder(root->left);
    printPostorder(root->right);
}

//! print levelOrder Traversal

void printlevelOrder(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left != nullptr)
        {
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
    }
}

//! searching of specifc in BST

Node *searchInBst(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return searchInBst(root->left, key);
    }
    return searchInBst(root->right, key);
}

int main()
{
    //! for insert and traversal
    //  Node* root= nullptr;
    //  root=insertBST(root,5);
    //  insertBST(root,1);
    //  insertBST(root,3);
    //  insertBST(root,4);
    //  insertBST(root,2);
    //  insertBST(root,7);

    // printInorder(root);
    //  printlevelOrder(root);

    //! for searching
    // Node *root = new Node(4);
    // root->left = new Node(2);
    // root->right = new Node(5);
    // root->left->left = new Node(1);
    // root->left->right = new Node(3);
    // root->right->right = new Node(6);

    // if (searchInBst(root, 10) == NULL)
    // {
    //     cout << "key not exist";
    // }

    // else
    // {
    //     cout << "key exists";
    // }

    
    return 0;
}