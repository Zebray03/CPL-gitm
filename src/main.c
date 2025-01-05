#include "gitm.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        ERROR("Usage: gitm <command>\n");
        return 1;
    }
    if (!strcmp(argv[1], "version")) {
        printf("%s",
#include "../icon.txt"
        );
    }
    if (!strcmp(argv[1], "init")) {
        if (make_directory("./.gitm") == 0 &&
            make_directory("./.gitm/info") == 0 &&
            make_directory("./.gitm/logs") == 0 &&
            make_directory("./.gitm/objects") == 0 &&
            make_directory("./.gitm/refs") == 0) {
            printf("Haha\n");
        } else {
            printf("Failed to make directory.\n");
        }
    }

    return 0;
}
