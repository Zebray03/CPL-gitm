#include <gitm.h>

#include "command.h"

int main(int argc, char* argv[]) {
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
        init();
    }
    if (!strcmp(argv[1], "add")) {
        add(argv[2]);
    }
    if (!strcmp(argv[1], "commit")) {
        commit(argv[2]);
    }

    return 0;
}
