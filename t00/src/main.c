#include "read_file.h"

int main(int argc, const char *argv[]) {
    int usg_err = (argc != 2) ? 1 : 0;
    int other_err;

    if (usg_err) {
        mx_printerr(USG_ERR_MSG);
        return 1;
    }

    other_err = mx_read_file(argv);
    
    if (other_err) {
        mx_printerr(ERR_MSG);
        return 1;
    }

    return 0;
}
