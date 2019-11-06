

#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;
    Node(){
        value = 0;
        left = NULL;
        right = NULL;
    }
    Node(int val){
        value = val;
        left = NULL;
        right = NULL;
    }

};

class BinarySearchTree{
    Node * root;
    public:
    BinarySearchTree(){
        root = NULL;
    }
    BinarySearchTree(int val){
            root = new Node(val);
        }
           
    
    Node * getRoot(){
        return root;
    }

    Node * insert(Node * root, int val){
    
        if(root == NULL){
            return new Node(val);  
        }
       
        else if(root->value > val){
            
            root->left = insert(root->left, val);
        }
        else{
           
            root->right = insert(root->right, val);
        }
        return root;
    }   


    void insertBST(int val){
        if(getRoot() == NULL)
        {
            root = new Node(val);
            return;
        }
        insert(getRoot(), val); 

    }

    void printInorder(Node * currentNode){
            
        if(currentNode!=NULL)
        {
            printInorder(currentNode->left);
            cout<<currentNode->value<<" ";
            printInorder(currentNode->right);
        }

    }
 


};




int main(){
    BinarySearchTree BST(10);
  
    BST.insertBST( 2);
    
    BST.insertBST(4);
     
    BST.insertBST(8);
      
    BST.insertBST(21);
     
    BST.insertBST(12);
      
    BST.insertBST(18);
    
    BST.printInorder(BST.getRoot());
    return 0;
}