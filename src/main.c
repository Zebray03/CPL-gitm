#include "gitm.h"

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
        if (exists("./.gitm")) {
            //todo
            //可能不做任何事或remake
        }
        else {
            if (make_directory("./.gitm") == 0 &&
                make_directory("./.gitm/info") == 0 &&
                make_directory("./.gitm/objects") == 0 &&
                make_directory("./.gitm/refs") == 0 &&
                make_directory("./.gitm/refs/heads") == 0 &&
                make_directory("./.gitm/refs/tags") == 0
            ) {
                fopen("./description", "w");
                char description[100] = "Unnamed repository; edit this file 'description' to name the repository.\n";
                fprintf("./description", description);
                fclose("./description");
                fopen("./HEAD", "w");
                char head[100] = "ref: refs/heads/master\n";
                fprintf("./HEAD", head);
                fclose("./HEAD");
                printf("Haha\n");
            }
            else {
                printf("Failed to make directory.\n");
            }
        }
    }
    if (!strcmp(argv[1], "commit")) {
        char message[1024];
        strcpy(message, argv[2]);
    }

    return 0;
}
