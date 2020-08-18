#include "cat.h"

int main(int argc, const char *argv[]) {
    int src = -1;

    if (argc == 1) {
        src = STDIN_FILENO;
        mx_read_file(src);
    } else {
        for (int i = 1; i < argc; i++) {
            src = open(argv[i], O_RDONLY);
            mx_err_check(src, src);
            mx_read_file(src);
        }
    }

    return 0;
}
