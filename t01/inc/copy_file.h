#pragma once

// error mdgs
#define USG_ERR_MSG "usage: ./mx_cp [source_file] [destination_file]\n"

// permission for new file:
// 644 for files means -rw-r--r-- (owner:read+write, group: read, other: read)
#define PERMISSIONS 644

// buffer size for read()
#define BUFFER_SIZE 64

// includes
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// structs
typedef struct s_file {
    int src_fd;
    int dst_fd;
    char buffer[BUFFER_SIZE];
    ssize_t src_rslt;
    ssize_t dst_rslt;
}              t_file;

// funcs
int mx_copy_file(const char **arg_v);
int mx_strlen(const char *s);

void mx_printerr(const char *s);
void mx_err_check(int target, int src, int dst);

