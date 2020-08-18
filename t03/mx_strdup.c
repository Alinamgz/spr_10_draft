#include "file_to_str.h"

char *mx_strdup(const char *str) {
    int src_size = mx_strlen(str);
    char *result = mx_strnew(src_size);
    mx_strcpy(result, str);

    return result;
}
