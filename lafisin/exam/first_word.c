#include <unistd.h>

int is_space(char c)
{
	if((c >= 9 && c <=13) || c == ' ')
		return (1);
	return (0);
}

void	first_word(char *str)
{
	int i;
	while(is_space(*str) == 1)
	{
		++str;
	}
	while(is_space(*str) != 1 && *str)
	{
		write(1, str, 1);
		str++;
	}

}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		first_word(av[1]);
	}
	else
		write(1, "\n", 1);
	

}

// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// 문자열을 가져 와서 첫 단어를 표시하는 프로그램을 작성하십시오.
// 개행.

// 단어는 공백 / 탭 또는 시작 / 끝으로 구분 된 문자열 섹션입니다.
// 문자열

// 매개 변수 수가 1이 아니거나 단어가없는 경우 간단히 표시하십시오.
// 개행.
// a newline.

// Examples:

// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>