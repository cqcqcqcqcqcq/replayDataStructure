#ifndef __BINARY_SEARCH_TREE_H_
#define __BINARY_SEARCH_TREE_H_

#define ELEMENTTYPE int 

typedef struct BSTreeNode
{
    ELEMENTTYPE data;
    struct BSTreeNode *left;   /*左子树*/
    struct BSTreeNode *right;   /*右子树*/
    #if 1
    struct BSTreeNode *parent;  /*父结点*/
    #endif
}BSTreeNode;

typedef struct BinarySearchTree
{
    /*根结点*/
    BSTreeNode *root;
    /*树的结点个数*/
    int size;

    /*钩子函数比较器 放到结构体内部*/
    int (*compareFunc)(ELEMENTTYPE val1, ELEMENTTYPE val2)
}BinarySearchTree;

/*二叉搜索树的初始化*/
int BinarySearchTreeInit(BinarySearchTree **pBstree, int (*compareFunc)(ELEMENTTYPE val1, ELEMENTTYPE val2));

/*二叉搜索树的插入*/
int BinarySearchTreeInsert(BinarySearchTree **pBstree, ELEMENTTYPE val);

/*二叉搜索树是否包含指定的元素*/
int BinarySearchTreeIscontainAppointVal(BinarySearchTree **pBstree, ELEMENTTYPE val);

/* 二叉搜索树的前序遍历 */
int binarySearchTreePreOrderTravel(BinarySearchTree *pBstree);

/* 二叉搜索树的中序遍历 */
int binarySearchTreeInOrderTravel(BinarySearchTree *pBstree);

/* 二叉搜索树的后序遍历 */
int binarySearchTreePostOrderTravel(BinarySearchTree *pBstree);

/* 二叉搜索树的层序遍历 */
int binarySearchTreeLevelOrderTravel(BinarySearchTree *pBstree);
#endif //__BINARY_SEARCH_TREE_H_