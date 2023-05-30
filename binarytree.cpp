#include <iostream>
using namespace std;

// Node structure
struct Node {
    char label;
    Node* left;
    Node* right;
    Node* parent;
};

// Global pointer variables
Node* root;
Node* newNode;


void createNewTree(char label) {
    if (root != NULL) {
        cout << "Tree sudah dibuat" << endl;
    }
    else {
        root = new Node();
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "Berhasil dibuat menjadi root." << endl;
    }
}

Node* insertLeft(char label, Node* node) {
    if (root == NULL) {
        cout << "Buat tree terlebih dahulu" << endl;
        return NULL;
    }
    else {
        newNode = new Node();
        newNode->label = label;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->parent = node;
        node->left = newNode;
        cout << label << " berhasil ditambahkan ke anak kiri. Label parent: " << newNode->parent->label << endl;
        return newNode;
    }
}

int main() {
    createNewTree('A');
    Node* nodeB, * nodeC, * nodeD, * nodeE, * nodeF, * nodeG, * nodeH, * nodeI, * nodeJ;
    nodeB = insertLeft('B', root);
    cout << root->left->label <<endl;

    return 0;
}
