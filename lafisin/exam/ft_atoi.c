
int		is_space(char c)
{
	if(c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int sign = 1;
	int result;
	result = 0;
	if(is_space(*str) == 1)
		str++;
	if(*str == '-')
		sign *= -1;
	while(*str)
	{
		if(*str >= '0' && *str <= '9')
		{
			result = result * 10 + *str - '0'; 
		}
		str++;
	}
	return (sign * result);
}

#include <stdio.h>

int main(void)
{
	printf("%d", ft_atoi("-12345"));
}

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

문자열 인수 str을 정수로 변환하는 함수 작성 (int int)
그것을 반환합니다.

표준 atoi (const char * str) 함수와 매우 유사하게 작동합니다 (man 참조).

함수는 다음과 같이 선언해야합니다.

int	ft_atoi(const char *str);

*/

/*
int     is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else if (c == '+' || c == '-')
        return (-1);
    else if ((9 <= c && c <= 13) || c == ' ')
        return (2);
    return (0);
}

int     ft_atoi(char *str)
{
    int sign;
    int index;
    int result;

    index = 0;
    sign = 1;
    while (is_num(str[index]) == 2)
        index++;
    while (is_num(str[index]) < 0)
    {
        if (str[index] == '-')
            sign *= -1;
        index++;
    }
    if (str[index] < '0' || str[index] > '9')
        return (0);
    result = str[index++] - '0';
    while (is_num(str[index]) == 1)
    {
        result = result * 10 + str[index] - '0';
        index++;
    }
    result *= sign;
    return (result);
}
*/