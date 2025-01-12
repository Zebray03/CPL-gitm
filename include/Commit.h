#ifndef COMMIT_H
#define COMMIT_H
#include "Tree.h"

struct Commit {
    char id[64];
    char parent1[64];
    char parent2[64];
    Tree* tree;
    char user[128];
    char email[128];
    char timestamp[128];
    char msg[512];
};
typedef struct Commit Commit;

#endif //COMMIT_H
