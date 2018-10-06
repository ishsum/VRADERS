
#include<iostream>
using namespace std;


struct node 
{


int data;
struct node *left,*right;
};


node* create(int data)
{
node *temp=new node;
temp->data=data;
temp->left=NULL;
temp->right=NULL;

return temp;


}

node* insert(node* rootptr,int data)
{

if(rootptr==NULL)
{
rootptr=create(data);

}
else if(data<(rootptr->data))
{

rootptr->left=insert(rootptr->left,data);
}

else
{
rootptr->right=insert(rootptr->right,data);
}
return rootptr;

}
int main()
{


struct node *root=NULL;
root=insert(root,2);
root=insert(root,1);


}
