#include <stdio.h>
#include <string.h>

int main() {
  char* pch;
  char str[] = "Example string";
  pch = (char*)ft_memchr(str, 'p', strlen(str));

  if (pch != NULL)
    printf("'p' found at position %ld.\n", pch - str + 1);
  else
    printf("'p' not found.\n");

  return 0;
}
