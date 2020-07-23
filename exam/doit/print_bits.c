#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(void)
{
	int n = 64;
	print_bits(n);
	write(1, "\n", 1);
	print_bits2(n);
}
/*
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

바이트를 가져와 \n없이 바이너리로 인쇄하는 함수 작성
끝에.

함수는 다음과 같이 선언해야합니다.


void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"


*/