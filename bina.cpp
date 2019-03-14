#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
Node*right;
Node*left;
Node(int value)
{
data=value;
left=NULL;
right=NULL;
}
};

class BiST{
public:
Node*root;
//Node*leaf;
BiST()
{root=NULL:
}


void insert(int value)
{
insertHelper(root,value);
}
void insertHelper(Node*curr,int value){
if(curr==NULL)
	{
	if(root==NULL)
	root=new Node(value);
	return;
}	
	else if(value<current->data)
{	if(curr->left==NULL)curr->left=new Node(value);			
	else insertHelper(curr,value);

	else{
{	if(curr->right==NULL)curr->right=new Node(value);
	else insertHelsper(curr,value);
}
}				//IF CURRENT==NULL INSERT THERE
				//else compare the currr data with value;
				//if current->data<value->more right and call insert
				//elsemove right and call insert
}
	void display()
{		if(curr==NULL)return ;
		display2(current->left);
		cout<<current->data<<",";
		display2(current->right);

}
		Node displayFancy(){
	//increase number of spaces
	//display right
	//display req spaces
	//display curr
	//display left

		bool search(int value)
{		if(curr->data=value)
		return true;
		else
{	
		if(value<curr->data)
{		search(curr->left)}
		else
{		search(curr->right);
		if(curr==NULL)
		return false;}


int main()
{
BiST s1;
insert(
