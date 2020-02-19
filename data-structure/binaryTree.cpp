#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
const int number = 15;

// 하나의 노드 정보를 선언합니다
typedef struct node* treePointer;
typedef struct node {
	int data;
	treePointer leftChild;
	treePointer rightChild;
} node;

// 전위 순회를 구현합니다.
void preOrder(treePointer ptr) {
	if (ptr) {
		cout << ptr->data << ' ';
		preOrder(ptr->leftChild);
		preOrder(ptr->rightChild);
	}
}

// 전위 순회를 구현합니다.
void inOrder(treePointer ptr) {
	if (ptr) {
		inOrder(ptr->leftChild);
		cout << ptr->data << ' ';
		inOrder(ptr->rightChild);
	}
}

// 후위 순회를 구현합니다.
void postOrder(treePointer ptr) {
	if (ptr) {
		postOrder(ptr->leftChild);
		postOrder(ptr->rightChild);
		cout << ptr->data << ' ';
	}
}

int main(void) {
	node nodes[number + 1];
	for (int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild= NULL;
	}
	for (int i = 1; i <= number; i++) {
		if (i % 2 == 0) {
			nodes[i / 2].leftChild = &nodes[i];
		}
		else {
			nodes[i / 2].rightChild = &nodes[i];
		}
	}
	postOrder(&nodes[1]);
}
