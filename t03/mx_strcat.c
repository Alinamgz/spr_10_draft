#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) {
   int s1_leng = mx_strlen(s1);
   

   for (int i = 0; s2[i] !='\0' ; i++) {
        s1[i + s1_leng]  = s2[i];
   }
   return(char *) s1;
}
