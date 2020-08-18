#include "copy_file.h"

int mx_copy_file(const char **arg_v) {
    t_file cp;

    cp.src_fd = open(arg_v[1], O_RDONLY);
    mx_err_check(cp.src_fd, cp.src_fd, cp.dst_fd);

    cp.dst_fd = open(arg_v[2], O_RDWR | O_CREAT, 0644);
    mx_err_check(cp.dst_fd, cp.src_fd, cp.dst_fd);

    while ((cp.src_rslt = read(cp.src_fd, cp.buffer, BUFFER_SIZE)) > 0) {
        cp.dst_rslt = write(cp.dst_fd, cp.buffer, cp.src_rslt);
        if (cp.src_rslt != cp.dst_rslt) {
            mx_err_check(-1, cp.src_fd, cp.dst_fd);
        }
    }
    mx_err_check(cp.src_rslt, cp.src_fd, cp.dst_fd);

    mx_err_check(close(cp.src_fd), cp.src_fd, cp.dst_fd);
    mx_err_check(close(cp.dst_fd), cp.src_fd, cp.dst_fd);

    return 0;
}
