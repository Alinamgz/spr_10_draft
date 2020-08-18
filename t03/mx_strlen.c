int mx_strlen(const char *s) {
    int result = 0;

    while (s[result] != '\0') {
        result++;
    }
    return result;
}
