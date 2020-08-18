#include "cat.h"

void mx_err_check(int target, int src) {

    if (target < 0) {
        mx_printerr(strerror(errno));
        mx_printerr("\n");
        close(src);

        exit(1);
    }
    return;
}
