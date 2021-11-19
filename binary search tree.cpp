#include <iostream>
/*
 rohith k a
 S4 ct
 roll no :40
 DS exp:10*/
using namespace std;
template <class T>
class BST;
template <class T>
class treenode
{
	friend class BST<T>;

  public:
	treenode *left;
	T data;
	treenode *right;
};
template <class T>
class BST
{
  public:
	treenode<T> *root;

  public:
	BST()
	{
		root = NULL;
	}
	void inOrder(treenode<T> *node);
	void preOrder(treenode<T> *node);
	void postOrder(treenode<T> *node);
	treenode<T> *find(treenode<T> *tree, T item);
	int treeHeight(treenode<int> *tree);
	treenode<T> *insert(treenode<T> *node, T item);
	int isEmpty();
};
template <class T>
int BST<T>::isEmpty()
{
	if (root == NULL)
		return 1;
	else
		return 0;
}
template <class T>
void BST<T>::inOrder(treenode<T> *currentnode)
{
	if (currentnode != NULL)
	{
		inOrder(currentnode->left);
		cout << currentnode->data << " ";
		;
		inOrder(currentnode->right);
	}
}
template <class T>
void BST<T>::preOrder(treenode<T> *currentnode)
{
	if (currentnode != NULL)
	{
		cout << currentnode->data << " ";
		;
		preOrder(currentnode->left);
		preOrder(currentnode->right);
	}
}
template <class T>
void BST<T>::postOrder(treenode<T> *currentnode)
{
	if (currentnode != NULL)
	{
		postOrder(currentnode->left);
		postOrder(currentnode->right);
		cout << currentnode->data << " ";
	}
}
template <class T>
treenode<T> *BST<T>::find(treenode<T> *tree, T item)
{
	if (!tree)
		return NULL;
	if (tree->data == item)
		return tree;
	else if (item < tree->data)
		return find(tree->left, item);
	else
		return find(tree->right, item);
}
template <class T>
int BST<T>::treeHeight(treenode<int> *tree)
{
	int leftheight, rightheight, height;
	if (tree == NULL)
		return -1;
	else
	{
		leftheight = treeHeight(tree->left);
		rightheight = treeHeight(tree->right);
		height = leftheight > rightheight ? leftheight : rightheight;
		return height + 1;
	}
}
template <class T>
treenode<T> *BST<T>::insert(treenode<T> *node, T item)
{
	if (node == NULL)
	{
		treenode<T> *newnode = new treenode<T>();
		newnode->data = item;
		newnode->left = newnode->right = NULL;
		return newnode;
	}
	if (item < node->data)
		node->left = insert(node->left, item);
	else if (item > node->data)
		node->right = insert(node->right, item);
	return node;
}
int main()
{
	BST<int> tree;
	int dataitem;
	char c = 'y';
	do
	{
		cout << " Enter  Tree  Element  data  :  ";
		cin >> dataitem;
		tree.root = tree.insert(tree.root, dataitem);
		cout << "Do you want  to add other  item  (y/n)?";
		cin >> c;
		cout << "root" << tree.root->data << endl;
	} while (c == 'y' || c == 'Y');
	cout << "Insertion  over" << endl;
	cout << "inOrder  Traversal  ";
	tree.inOrder(tree.root);
	cout << endl;
	cout << "postOrder  Traversal  ";
	tree.postOrder(tree.root);
	cout << endl;
	cout << "preOrder  Traversal  ";
	tree.preOrder(tree.root);
	cout << endl;
	cout << "\nEnter item  to be  searched  :";
	cin >> dataitem;
	if (tree.find(tree.root, dataitem))
	{
		cout << "Searched item  found" << endl;
	}
	else
	{
		cout << "Searched item  not  found" << endl;
	}
	cout << "\nEnter item  to be  searched  :";
	cin >> dataitem;
	if (tree.find(tree.root, dataitem))
	{
		cout << "Searched item  found" << endl;
	}
	else
	{
	}
	cout << "Searched item  not  found" << endl;
	cout << "height  " << tree.treeHeight(tree.root) << endl;
}
