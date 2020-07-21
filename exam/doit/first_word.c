#include <unistd.h>


int	is_space(char c)
{
	if(c == ' ' || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

void	print_first_word(char *str)
{
	int		index;
	int		offset;
	char	*word;

	index = 0;
	word = str;
	while (is_space(str[index]) == 1)
		index++;
	offset = index;
	while (1)
	{
		if (str[index] == '\0')
			break ;
		if (is_space(str[index]))
			break ;
		index++;
	}
	if (word != 0)
		write(1, word + offset, index - offset);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_first_word(argv[1]);
	write(1, "\n", 1);
}