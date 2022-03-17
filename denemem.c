#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int main()
{
  int n = 0;
  printf("%d \n", (++n + ++n + ++n));
}
