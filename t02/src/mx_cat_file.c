#include "cat.h"

int mx_read_file(int src) {
    t_file cp;

    cp.src_fd = src;
    cp.dst_fd = 1;

    while ((cp.src_rslt = read(cp.src_fd, cp.buffer, BUFFER_SIZE)) > 0) {
        cp.dst_rslt = write(cp.dst_fd, cp.buffer, cp.src_rslt);
        if (cp.src_rslt != cp.dst_rslt) {
            mx_err_check(-1, cp.src_fd);
        }
    }
    mx_err_check(cp.src_rslt, cp.src_fd);

    mx_err_check(close(cp.src_fd), cp.src_fd);

    return 0;
}
