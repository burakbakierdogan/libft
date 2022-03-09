#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "GeeksForGeeks2222";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);

    printf("%s", target);
    return 0;
}
