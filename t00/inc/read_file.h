#pragma once

// error mdgs
#define ERR_MSG "error\n"
#define USG_ERR_MSG "usage: ./read_file [file_path]\n"

// flag for open() allows reading only
#define O_RDONLY 0

// buffer size for read()
#define BUFFER_SIZE 64

// includes
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

// structs
typedef struct s_ffread {
    int fd;
    int cl_err;
    char buffer[BUFFER_SIZE + 1];
    ssize_t rslt;
}              t_ffread;

// funcs
int mx_read_file(const char **arg_v);
int mx_strlen(const char *s);

void mx_printerr(const char *s);
void mx_printstr(const char *s);

