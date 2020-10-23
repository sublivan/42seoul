
#include <stdio.h>
#include <string.h>

int main() {

  char str[80];
  strcpy(str, "these ");
  printf("%zu\n", ft_strlcat(str, "strings ",8));
  puts(str);

  return 0;
}
