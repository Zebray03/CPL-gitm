#include "Repository.h"

#include <gitm.h>

#include "Tree.h"

Tree* CurrentTree = NULL;

int init() {
    if (exists("./.gitm")) {
        // Do nothing
    }
    else {
        if (make_directory("./.gitm") == 0 &&
            make_directory("./.gitm/info") == 0 &&
            make_directory("./.gitm/objects") == 0 &&
            make_directory("./.gitm/refs") == 0 &&
            make_directory("./.gitm/refs/heads") == 0 &&
            make_directory("./.gitm/refs/tags") == 0
        ) {

            FILE* description = fopen("./.gitm/description", "w");
            const char description_info[100] =
                "Unnamed repository; edit this file 'description' to name the repository.\n";
            fprintf(description, "%s", description_info);
            fclose(description);
            FILE* head = fopen("./.gitm/HEAD", "w");
            const char head_info[100] = "ref: refs/heads/master\n";
            fprintf(head, "%s", head_info);
            fclose(head);
            printf("Initialize successfully.\n");
        }
        else {
            printf("Failed to make directory.\n");
            return -1;
        }
    }
    return 0;
}

int add(const char* path) {
    //todo
}

int commit(const char* msg) {
    //todo

    FILE* editmsg = fopen("./.gitm/COMMIT_EDITMSG", "w");
    fprintf(editmsg, "%s", msg);
    fclose(editmsg);


}