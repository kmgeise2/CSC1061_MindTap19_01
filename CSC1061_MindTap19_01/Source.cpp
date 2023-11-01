// CSC1061_MindTap19_01
// Write the definition of the function nodeCount that returns 
// the number of nodes in the binary tree. Add this function 
// to the class binaryTreeType and create a program to test this function.
//
//Data: 65 55 22 44 61 19 90 10 78 52 -999

#include <iostream>
#include "binarySearchTree.h"

using namespace std;
void CreateTree(bSearchTreeType<int> tree);

int main()
{
	bSearchTreeType<int> treeRoot;
	int numList[] = {65, 55, 22, 44, 61, 19, 90, 10, 78, 52};
	int size = 10;
	int num;

	for (int i = 0; i < size; i++) {

		treeRoot.insert(numList[i]);
		cout << numList[i] << " ";
	}

	// This routine accepts user input
	//CreateTree(treeRoot);

	cout << endl << "Tree nodes in inorder: ";
	treeRoot.inorderTraversal();

	cout << endl << "Tree nodes in preorder: ";
	treeRoot.preorderTraversal();

	cout << endl << "Tree nodes in postorder: ";
	treeRoot.postorderTraversal();
	cout << endl;

	cout << "Tree Height: " << treeRoot.treeHeight()
		<< endl;
	cout << "Number of Nodes: "
		<< treeRoot.treeNodeCount() << endl;
	
	return 0;
}
void CreateTree(bSearchTreeType<int> tree)
{
	int num;

	cout << "Enter integers ending with -999" << endl;
	cin >> num;

	while (num != -999)
	{
		tree.insert(num);
		cin >> num;
	}
}
