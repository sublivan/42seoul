
#include <stdio.h>
#include <string.h>

int main() {
  char szInput[256];
  printf("Enter a sentence: ");
  scanf("%s", szInput);
  printf("The sentence entered is %lu characters long.\n", ft_strlen(szInput));
  return 0;
}
