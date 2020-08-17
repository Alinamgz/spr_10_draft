#include "read_file.h"

int mx_is_valid(int arg_c, const char **arg_v) {
    int result;
    const char *path;

    if (arg_c != 2) {
        mx_printerr(USG_ERR_MSG);
        return -1;
    }
    else {
        path = arg_v[1];
        result = open(path, O_RDONLY);

        if( result < 0) {
            mx_printerr(ERR_MSG);
            return -1;
        }
    }
    return result;
}
