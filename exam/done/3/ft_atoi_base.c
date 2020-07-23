int isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int		isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
		if (digits[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int		value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int result;
	int sign;

	result = 0;
	while (isblank(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? ++str : 0;
	while (isvalid(*str, str_base))
		result = result * str_base + value_of(*str++);
	return (result * sign);
}

/*
문자열 인수 str을 변환하는 함수 작성 (base N <= 16)
정수 (기수 10)로 반환합니다.

입력에서 인식되는 문자는 0123456789abcdef입니다.
물론 요청 된베이스에 따라 다듬어야합니다. 에 대한
예를 들어,베이스 4는 "0123"을 인식하고베이스 16은 "0123456789abcdef"를 인식합니다.

대문자도 인식해야합니다. "12fdb3"은 "12FDB3"과 동일합니다.

빼기 부호 ( '-')는 문자열의 첫 문자 인 경우에만 해석됩니다.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/