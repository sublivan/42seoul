#include <unistd.h>

void	rot_13(char str[])
{
	int index;
	char c;
	
	index = 0;
	if (*str == '\0')
	{
		write(1, "\n", 1);	
		return;
	}
	while (str[index] != '\0')
	{
		c = str[index];
		if(c >= 'A' && c <= 'Z')
		{
			if(c + 13 > 90)
				str[index] -= 13;
			else
				str[index] += 13;
		}
		else if(c >= 'a' && c <'z')
		{
			if(c + 13 > 122)
				str[index] -= 13;
			else
				str[index] += 13;
		}
		index++;
	}
	write(1, str, index);
	write(1, "\n", 1);
}

int		main(void)
{
	char src1[] = {"abc"};
	char src2[] = {"My horse is Amazing. "};
	char src3[] = {"AkjhZ zLKIJz , 23y "};
	char src4[] = {""};
	rot_13(src1);
	rot_13(src2);
	rot_13(src3);
	rot_13(src4);
	return 0;
}

/*
 *int main(int argc, char **argv)
 {
 	if(argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
}
 */
