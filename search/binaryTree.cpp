#include <iostream>

using namespace std;

const int number = 15;

typedef struct Node* pTree;
typedef struct Node {
    int data;
    Node* leftChild;
    Node* rightChild;
} Node;

void preOrder(Node* pTree) {
    if (pTree) {
        cout << pTree->data << ' ';
        preOrder(pTree->leftChild);
        preOrder(pTree->rightChild);
    }
}

void inOrder(Node* pTree) {
    if (pTree) {
        inOrder(pTree->leftChild);
        cout << pTree->data << ' ';
        inOrder(pTree->rightChild);
    }
}

void postOrder(Node* pTree) {
    if (pTree) {
        postOrder(pTree->leftChild);
        postOrder(pTree->rightChild);
        cout << pTree->data << ' ';
    }
}

int main(void) {
    Node nodes[number + 1];
    for (int i = 1; i <= number; i++) {
        nodes[i].data = i;
        nodes[i].leftChild = nullptr;
        nodes[i].rightChild = nullptr;
    }
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            nodes[i / 2].leftChild = &nodes[i];
        } else {
            nodes[i / 2].rightChild = &nodes[i];
        }
    }

    preOrder(&nodes[1]);
    cout << endl;
    inOrder(&nodes[1]);
    cout << endl;
    postOrder(&nodes[1]);
    cout << endl;

    return 0;
}