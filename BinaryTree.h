#include <iostream>

using namespace std;


struct node{
	string value;
	node *left;
	node *right;
};

class BinaryTree{
public:
	BinaryTree();
	~BinaryTree();

	void insert(string key);
	node *search(string key);
	void destroy_tree();
	void inorder_print();
	void postorder_print();
	void preorder_print();
    void deleteNode(node*& root, string key);
    void searchKey(node* &curr, string key, node* &parent);
    node& remove(string val, node* parentNode);
    node *root;

private:
	void destroy_tree(node *leaf);
	void insert(string key, node *leaf);
	node *search(string key, node *leaf);
	void inorder_print(node *leaf);
    void postorder_print(node *leaf);
	void preorder_print(node *leaf);
};


