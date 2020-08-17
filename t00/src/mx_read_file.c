#include "read_file.h"

void mx_read_file(int valid_f){

    ssize_t read_f;
    char buffer [BUFFER_SIZE + 1];

    // read_f = read(valid_f, buffer, BUFFER_SIZE);
    while ( (read_f = read(valid_f, buffer, BUFFER_SIZE)) > 0) {
        buffer[read_f] = 0;
        mx_printstr(buffer);
    }

    if (read_f < 0) {
        mx_printerr("nee chital");
    }

    close(valid_f);
}
