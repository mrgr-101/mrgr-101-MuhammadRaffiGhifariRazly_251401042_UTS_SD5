#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = new Node;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void Berurutan(Node* root) {
    if (root != NULL) {
        Berurutan(root->left);
        cout << root->data << " ";
        Berurutan(root->right);
    }
}

int yangTerbesar(Node* root) {
    while(root -> left != NULL) {
        root = root -> left;
    }
    return root->data;
}

int main() {
    system("cls");
    Node* root = NULL;
    int angka;

    cout << "Masukan: ";
    while (cin >> angka && angka != 0) {
        root = insert(root, angka);
    }

    cout << "In-Order: ";
    Berurutan(root);
    cout << "\n";

    cout << "Nilai terbesar: " << yangTerbesar(root) << "\n";
    cout << "Root: " << root->data << "\n";

    return 0;
}