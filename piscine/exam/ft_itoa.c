#include "libft.h"

static void     itoa_isnegative(int *n, int *negative)
{
    if (*n < 0)
    {
        *n *= -1;
        *negative = 1;
    }
}

char            *ft_itoa(int n)
{
    int     tmpn;
    int     len;
    int     negative;
    char    *str;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    tmpn = n;
    len = 2;
    negative = 0;
    itoa_isnegative(&n, &negative);
    while (tmpn /= 10)
        len++;
    len = len + negative;
    if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
        return (NULL);
    str[--len] = '\0';
    while (len--)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    if (negative)
        str[0] = '-';
    return (str);
}

/*
4
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

int를 가져 와서 널로 끝나는 문자열로 변환하는 함수를 작성하십시오.
이 함수는 할당해야하는 char 배열로 결과를 반환합니다.

함수는 다음과 같이 선언해야합니다.

char	*ft_itoa(int nbr);

*/