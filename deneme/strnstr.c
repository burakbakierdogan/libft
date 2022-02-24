#include <stdio.h>

char *searchingFor = "stackdummy";
char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";

char *strnstr(char *s1, char *s2, int length) {
    if(s1 == NULL || s2 == NULL) return NULL;
    printf("searching \n\n\"%s\"\n for %.*s\n", s1, length, s2);
    char *ss1 = malloc(strlen(s1) + 1);
    strcpy(ss1, s1);
    char *ss2 = malloc(length + 1);
    strncpy(ss2, s2, length);
    char *result = strstr(ss1, ss2);
    free(ss1);
    free(ss2);
    return result;
}

int main(void) {
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", strnstr(in, searchingFor, 5) ? "yes" : "no");
    return 0;
}
