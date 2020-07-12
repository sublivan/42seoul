#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	negative(int *nb, int *nums, int *index)
{
	ft_putchar('-');
	nums[(*index)++] = (*nb % 10) * -1;
	*nb /= -10;
}

void	print_nums(int *nums, int *index)
{
	char c;
	while(*index >= 0)
	{
		c = nums[(*index)--] + 48;
		ft_putchar(c);

	}	
}

void	ft_putnbr(int nb)
{
	int nums[10];
	int index;
	
	index = 0;
	if (nb == 0)
	{
		putchar('0');
		return ;
	}
	if (nb < 0)
	{
		negative(&nb, nums, &index);
	}
	while (nb / 10 > 0)
	{
		nums[index++] = nb % 10;
		nb /= 10;
	}
	if (nb != 0)
		nums[index] = nb;
	else
		index--;
	print_nums(nums, &index);
}
