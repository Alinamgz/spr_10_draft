#pragma once

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
typedef struct s_file_to_str {
    int src_fd;
    char* dst;
    char* result;
    char buff[BUFFER_SIZE + 1];
    ssize_t src_rslt;
    ssize_t dst_rslt;
}              t_file_to_str;

// funcs
int mx_strlen(const char *s);

char *mx_file_to_str(int arg_c, const char *filename);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);

