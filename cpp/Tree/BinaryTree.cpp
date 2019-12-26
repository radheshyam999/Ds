#include<iostream>
class node{
      public:
          int data;
          node *right;
          node *left;
        node(int data){
              this->data =data;
              this->left=NULL;
              this->right=NULL;
        }
};



class BinaryTree
{
public:
      BinaryTree();
     ~BinaryTree();
     node *root;

     node* insert(node *temp,int data){
            if (temp==NULL)
                 {
                  temp =new node(data);
                  std::cout << "i am  creating new node" << std::endl;
                 }
                 else
                 {
                     if (temp->data > data)
                     {
                        temp = insert(temp->left,data);
                        std::cout << "i am going left" << std::endl;
                     }
                     else
                     {
                         temp = insert(temp->right,data);
                        std::cout <<"i am going right" << std::endl; 
                     }
                     
                     
                 }
                 
             return temp;   
     }


};

BinaryTree::BinaryTree()
{
    std::cout << "i am BinaryTree" << std::endl;
}

BinaryTree::~BinaryTree()
{
}
 int main(int argc, const char** argv) {
     BinaryTree tree;
     node *root,*f;
     root = tree.insert(root,9);
      f =root; 
     root = tree.insert(root, 3);
     root = tree.insert(root, 10);
     root = tree.insert(root, 11);
     root = tree.insert(root, 2);
     root = tree.insert(root, 100);

     return 0;
}