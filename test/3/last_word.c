#include <unistd.h>


int	is_space(char c)
{
	if(c == ' ' || c == '\t')
		return 1;
	return 0;
}

void	last_word(char *str)
{
	int index;
	char c;
	
	index = 0;
	while (*str)
	{
		*(str++);	
	}	
	*(str--);
	while (is_space(*str))
		*(str--);
	while(*str && !is_space(*str))
		*(str--);
	*(str++);
	while(*str && !is_space(*str))
	{
		c = *str;
		write(1, &c, 1);
		*(str++);
	}
	
	write(1, "\n", 1);
}

int	main(void)
{
	char src1[] = {"FOR PONIES"};
	last_word(src1);
	char src2[] = {"this        ...       is sparta, then again, maybe    not"};
	last_word(src2);
	char src3[] = {"   "};
	last_word(src3);
	char src4[] = {"a" "b"};
	last_word(src4);
	char src5[] = {"  lorem,ipsum  "};
	last_word(src5);
	
}
