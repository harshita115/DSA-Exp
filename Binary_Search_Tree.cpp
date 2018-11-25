#include <iostream>
#include<cstdlib>
#include <math.h>
#include<conio.h>
using namespace std;
//creating structure of a node
struct node {
    int key;
    struct node* left, *right;
};
 
/* function to create a new node of tree and r
   eturns pointer */
struct node* newnode(int key)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};
 
/* Inorder traversal of a binary tree*/
void inorder(struct node* root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
/* postorder traversal of a binary tree*/
void postorder(struct node* root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}
void preorder(struct node* root)
{
    if (root!=NULL)
    {
        cout <<root->key << " ";
        preorder(root->left);  
        preorder(root->right);
     }
}  
 
//root is the address of node
struct node* insert(struct node* node,int key)
{
    if (node==NULL)
    {
        return newnode(key);
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if(key > node->key)
    {
        node->right = insert(node->right, key);
    }
    return node;
}
int main()
{
    int size,x,y;
    //struct node* originalroot;
    struct node *root=NULL;
    cout<<"Entre root value of tree";
    cin>>y;
    root = insert(root,y);
    cout<<"enter tree size:"<<endl;
    cin>>size;
    cout<<"enter elements:"<<endl;
    for(int i=1;i<size;i++)
    {
        cout<<"element "<<i+1<<"\n";
        cin>>x;
        insert(root, x);
        
    }
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
   return 0;
}
