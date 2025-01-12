#ifndef COMMAND_H
#define COMMAND_H

int init();

int add(const char* path);

int commit(const char* msg);

int log();

int checkout(const char* commit_id);

int merge(const char* commit_id);

#endif //COMMAND_H
