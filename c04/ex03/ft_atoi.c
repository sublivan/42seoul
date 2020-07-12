
int 	is_num(char c)
{
	if(c >= '0' && c<= '9')
		return 1;
	else if('+' || '-')
		return -1;
	else if((9<= c && c <= 13) || c == ' ')
		return 2;
	return (0);
}

int		ft_atoi(char *str)
{
	char c;
	int sign;
	int index;
	int result;
	
	index = 0;
	sign = 1;
	
	while (is_num(str[index]) == 2)
		index++;
	while (is_num(str[index]) < 0)
	{
		c = str[index];
		if(c == '+')
			sign = -1;
		else
			sign = 1;
		index++;
	}
	if(str[index] < '0' || str[index] > '9')
		return (0);
	result = str[index++] - '0';
	while(is_num(str[index]) == 1){
		result = result * 10 + str[index] - '0';
		index++;
	}
	
	result *= sign;
	return (result);
}

