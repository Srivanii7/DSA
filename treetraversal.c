//in-order traversal
// A binary tree node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function for in-order traversal
void inOrderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }inOrderTraversal

    // Traverse the left subtree
    inOrderTraversal(node->left);

    // Visit the root node (current node)
    printf("%d ", node->data);

    // Traverse the right subtree
    inOrderTraversal(node->right);
}

//       4
//      / \
//     2   5
//    / \
//   1   3

//1 2 3 4 5






//pre-order traversal
// A binary tree node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function for pre-order traversal
void preOrderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }

    // Visit the root node (current node)
    printf("%d ", node->data);

    // Traverse the left subtree
    preOrderTraversal(node->left);

    // Traverse the right subtree
    preOrderTraversal(node->right);
}

//       4
//      / \
//     2   5
//    / \
//   1   3

//4 2 1 3 5







//post-order traversal
// A binary tree node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function for post-order traversal
void postOrderTraversal(struct Node* node) {
    if (node == NULL) {
        return;
    }

    // Traverse the left subtree
    postOrderTraversal(node->left);

    // Traverse the right subtree
    postOrderTraversal(node->right);

    // Visit the root node (current node)
    printf("%d ", node->data);
}

//       4
//      / \
//     2   5
//    / \
//   1   3

//1 3 2 5 4
