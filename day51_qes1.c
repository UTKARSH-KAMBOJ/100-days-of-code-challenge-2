#include <stdio.h>
#include <stdlib.h>

// Define structure for BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert into BST
struct Node* insert(struct Node* root, int val) {
    if (root == NULL)
        return createNode(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

// Find LCA in BST
struct Node* findLCA(struct Node* root, int p, int q) {
    while (root != NULL) {
        if (p < root->data && q < root->data)
            root = root->left;
        else if (p > root->data && q > root->data)
            root = root->right;
        else
            return root; // This is the LCA
    }
    return NULL;
}

int main() {
    int n, i, val, p, q;
    struct Node* root = NULL;

    // Input
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    scanf("%d %d", &p, &q);

    struct Node* lca = findLCA(root, p, q);

    if (lca != NULL)
        printf("%d\n", lca->data);

    return 0;
}
