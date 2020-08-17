#include "read_file.h"

int main(int argc, const char *argv[]) {

    int valid_f = mx_is_valid(argc, argv);

    if (valid_f < 0) {
        return 1;
    }

    mx_read_file(valid_f);
    return 0;
}
