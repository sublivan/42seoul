void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char src[] = {"Coucou\ntu vas bien ?"};

	ft_putstr_non_printable(src);
}
