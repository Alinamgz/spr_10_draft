#include "read_file.h"

int mx_read_file(const char **arg_v) {
    t_ffread r_fl;

    r_fl.fd = open(arg_v[1], O_RDONLY);
    if (r_fl.fd < 0)
        return 1;

    while ((r_fl.rslt = read(r_fl.fd, r_fl.buffer, BUFFER_SIZE)) > 0) {
        r_fl.buffer[r_fl.rslt] = 0;
        mx_printstr(r_fl.buffer);
    }
    if (r_fl.rslt < 0) {
        close(r_fl.fd);
        return 1;
    }

    r_fl.cl_err = close(r_fl.fd);
    if (r_fl.cl_err < 0)
        return 1;

    return 0;
}
