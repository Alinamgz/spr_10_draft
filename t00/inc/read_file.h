#pragma once

// error mdgs
#define ERR_MSG "error\n"
#define USG_ERR_MSG "usage: ./read_file [file_path]\n"

// flag for open() allows reading only
#define O_RDONLY 0

// buffer size for read()
#define BUFFER_SIZE 64

// includes
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

// funcs
void mx_printchar(char c);
void mx_printint(int n);
void mx_printerr(const char *s);
void mx_printstr(const char *s);
void mx_read_file(int valid_f);

int mx_is_valid(int arg_c, const char **arg_v);

int mx_strlen(const char *s);

