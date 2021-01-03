
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "hello";
  char str2[] = "myllo";

  printf("%d", strncmp(str, str2, 5));

  return 0;
}
