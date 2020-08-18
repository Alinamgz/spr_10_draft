#include "copy_file.h"

int main(int argc, const char *argv[]) {
    int usg_err = (argc != 3) ? 1 : 0;
    int dst_file;

    if( usg_err) {
        mx_printerr(USG_ERR_MSG);
        exit(1);
    }

    dst_file = open(argv[2], O_RDONLY);
    if (dst_file > 0) {
        close(dst_file);
        exit(1);
    }
    
    mx_copy_file(argv);

    return 0;
}
