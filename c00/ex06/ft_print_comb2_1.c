
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_write(int n1, int n2)
{
    ft_putchar(n1 / 10 + 48);
    ft_putchar(n1 % 10 + 48);
    ft_putchar(' ');
    ft_putchar(n2 / 10 + 48);
    ft_putchar(n2 % 10 + 48);
    if(n1 + n2 != 98 + 99)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb2(void)
{
    int     a;
    int     b;

    a = 0;
    while(a <= 99)
    {
        b = a + 1;
        while(b <= 99)
        {
            ft_write(a, b);
            b++;
        }
        a++;
    }
}

int		main(void)
{
	ft_print_comb2();
}
