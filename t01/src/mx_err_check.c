#include <copy_file.h>

void mx_err_check(int target, int src, int dst) {

    if (target < 0) {
        mx_printerr(strerror(errno));
        mx_printerr("\n");
        close(src);
        close(dst);

        exit(1);
    }
    return;
}
