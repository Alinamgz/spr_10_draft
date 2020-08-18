#include "file_to_str.h"

char *mx_file_to_str(int arg_c, const char *filename) {
    if (arg_c != 2)
        return NULL;

    t_file_to_str fts;
    fts.dst = NULL;

    fts.src_fd = open(filename, O_RDONLY);
    if (fts.src_fd < 0)
        return NULL;

    while ((fts.src_rslt = read(fts.src_fd, fts.buff, BUFFER_SIZE)) > 0) {
        fts.buff[fts.src_rslt] = 0;
        fts.dst = mx_strjoin(fts.dst, fts.buff);
    }
    if (fts.src_rslt < 0)
        return NULL;
    fts.result = fts.dst;
    free(fts.dst);
    return fts.result;
}

