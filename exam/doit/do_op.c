#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if  (argc == 4)
	{
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		else if (*argv[2] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
/*
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

세 개의 문자열을 취하는 프로그램을 작성하십시오.
-첫 번째와 세 번째는 기본 10 부호있는 정수를 나타냅니다.
   int에 맞는.
-두 번째는 다음에서 선택한 산술 연산자입니다. +-* / %

프로그램은 요청 된 산술 연산의 결과를 표시해야합니다.
줄 바꿈이 뒤 따릅니다. 매개 변수 수가 3이 아닌 경우 프로그램
개행 만 표시합니다.

문자열에 실수 나 관계없는 문자가 없다고 가정 할 수 있습니다. 부정
입력 또는 출력의 숫자는 단 하나의 선행 '-'를 갖습니다. 그만큼
작업 결과는 int에 맞습니다.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$


*/