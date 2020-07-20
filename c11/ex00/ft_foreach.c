

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}