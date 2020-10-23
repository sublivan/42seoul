#include <stdlib.h>
int		ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (1);
}

int		white_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return 1;
	return 0;
}

int		word_count(char *str)
{
	int cnt = 0;
	int i = 0;
	char c;
	while(str[i] && white_space(str[i]) == 0)
	{
		i++;
		cnt++;
	}
	while(str[i])
	{
		c = str[i];
		if(white_space(c) == 1 && str[i + 1])
			cnt++;
		i++;
	}
	return (cnt);

}

char *ft_strcpy(char *src,  int size)
{
	int i =0;
	int len = ft_strlen(src);
	char *temp;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	temp[size] = '\0';
	while(i < size)
	{
		temp[i] = src[i];
		i++;
	}
	return (temp);
}

char	**ft_split(char *str)
{
	char **result;
	int i = 0; //문자열 인덱스
	int start = 0;//담을 문자열 시작위치
	int index =0;//결과 배열 인덱스
	int cnt; // 총 담을 단어수

	cnt = word_count(str);
	result = (char **)malloc(sizeof(char **) * (cnt + 1));
	if(!result) //값이 비었으면 널
		return (0);
	result[cnt] = 0;
	if(white_space(str[i]) == 0 && str[i])
		start = i++;
	while(str[i])
	{
		if(white_space(str[i]) == 1)
		{
			if(start < i)
				result[index++] = ft_strcpy(str + start, i - start);
			start = i + 1;
		}
		i++;
	}
	if(start < i)
		result[index++] = ft_strcpy(str + start, i - start);
	return (result);
}



#include <stdio.h>

int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	split = ft_split(argv[1]);
	index = 0;
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

문자열을 받아서 단어로 나누고 다음과 같이 반환하는 함수를 작성하십시오.
NULL로 끝나는 문자열 배열

"단어"는 공백 / 탭 / 신규로 구분 된 문자열의 일부로 정의됩니다.
줄 또는 문자열의 시작 / 끝

Your function must be declared as follows:

char    **ft_split(char *str);
*/