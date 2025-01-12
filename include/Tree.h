#ifndef TREE_H
#define TREE_H
#include <stdlib.h>

#include "Blob.h"

struct Tree {
    char id[64];
    int blobCount = 0;
    int blobListSize = 10;
    Blob* blobList = malloc(sizeof(Blob) * 10);
    int treeCount = 0;
    int treeListSize = 10;
    struct Tree* treeList = malloc(sizeof(struct Tree) * 10);
};

typedef struct Tree Tree;

#endif //TREE_H
