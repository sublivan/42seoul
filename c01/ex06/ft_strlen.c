#include <stdio.h>

int    ft_strlen(char *str)
{
    int index;

    index = 0;

    while(*(str + index) != '\0')
    {
        index++;
    }

    return (index);

}

int     main(void)
{
	int result;

    result = ft_strlen("abcd");
	printf("%d",result);
}
