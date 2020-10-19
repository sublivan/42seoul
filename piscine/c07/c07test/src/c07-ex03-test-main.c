
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

int		get_length(char *str);
char	*ft_strcat(char *dest, char *src);
void	*mk_void_size(void);
char	*mk_strjoin(char *result, char **strs, int size, char *sep);
char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
		char *a[3];
	a[0] = strdup("abc");
	a[1] = strdup("def ho");
	a[2] = strdup("hi yeah~");
	printf("%s$\n", ft_strjoin(3, (char**)a, ", "));
	printf("It should be blank >> %s\n", ft_strjoin(0, (char**)a, ", "));
	a[0] = strdup("");
	a[1] = strdup("");
	a[2] = strdup("");
	char *p;
	printf("%s$\n", p = ft_strjoin(3, (char**)a, ", "));
	printf("%lu\n", strlen(p));
	char *strs[7] = {
		"abc",
		"123",
		"def",
		"456",
		"ghi",
		"789",
		"nawaneoyaabc"
	};
	char sep[] = "+";
	char *result = ft_strjoin(7, strs, sep);	
	printf("result: %s\n", result);
}
