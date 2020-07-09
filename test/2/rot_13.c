#include <unistd.h>

void	rot_13(char *str)
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
		if(c >= 'a' && c <= 'z')
		{
			c = c + 13;
			if(c > 'z')
				c = c - 26;
			str[index] = c;
		}
		if(c >= 'A' && c <= 'z')
		{	
			c = c + 13;
			if(c > 'Z')
				c = c -26;
			str[index] = c;
		}
		index++;
	}
	write(1, str, index);
}
int		main(void)
{
	rot_13("abc");
	rot_13("My horse is Amazing.");
	rot_13("AkjhZ zLKIJz , 23y ");
	rot_13("");
	return 0;
}
/*
 *int main(int argc, char **argv)
 {
 	if(argc == 2)
		rot_13(argv[1];
	write(1, "\n", 1);
}
 */
