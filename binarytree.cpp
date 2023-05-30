#include <iostream>
using namespace std;
//node
struct Node{
    char label;
    Node *left, *right, *parent;
};

//variabel pointer global 
Node *root, *newNode;


void createNewTree(char label)
{
    if(root != NULL)
    {
        cout <<"Tree sudah dibuat" <<endl;
    }else{
        root = new Node();
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\n" << "berhasil dibuat menjadi root." << endl;
    }
}

int main() {
  createNewTree('A');
}

