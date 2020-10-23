#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "memmove can be very useful......";

  ft_memmove(str + 15, str + 20, 11);
//   memmove(str + 15, str + 20, 11);
  puts(str);
  return 0;
}
