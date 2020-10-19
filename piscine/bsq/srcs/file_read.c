#include "ft.h"
//#include "map_read.h"
//#include "function.h"

#include <stdio.h>

char		*cpy_str(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] != '\n')
	{
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}

char		*get_info(char *file_name)
{
	char buff[10];
	ssize_t rd_size;
	int i;
	char *c;
	int file;

	if (0 > (file = open(file_name, O_RDONLY)))
		return (0);
	i = 0;
	while (0 < ( rd_size = read(file, buff, sizeof(buff))))
	{
		while (buff[i])
		{
			if (buff[i] == '\n')
				break;
			i++;
		}
		if (i > 0)
			break;
	}
	c = malloc(sizeof(char) * i);
	c = cpy_str(buff, c);
	close(file);
	return (c);
}

int			get_line_num(char *file_name)
{
	int size;
	char buff[5];
	int i;
	int count;
	int flag;
	int file;

	if ( 0 > (file = open(file_name, O_RDONLY)))
		return (0);
	flag = 0;
	count = 0;
	while (0 < (size = read(file, buff, sizeof(buff))))
	{
		i = 0;
		while (i < 5)
		{
			if (buff[i] == '\n')
				flag++;
			if (flag == 1)
				count++;
			if (flag == 2)
				break ;
			i++;
		}
		if (flag == 2)
			break;
	}
	close(file);
	return (count - 1);
}

t_map_info	set_info(char *str)
{
	t_map_info map_info;
	map_info.y = 0;
	while (*str >= '0' && *str <= '9')
	{
		map_info.y = map_info.y * 10 + *str - '0';
		str++;
	}
	map_info.empty = *str++;
	map_info.obst = *str++;
	map_info.full = *str;
	return (map_info);
}


t_map_info file_to_struct()
{
	char *c;
	int len;
	int file;
	char *buff;
	int i;
	int j;
	t_map_info map_info;

	j = 0;
	i = 0;
	c = get_info("map");
	len = ft_strlen(c);
	map_info = set_info(c);
	map_info.line_n = get_line_num("map");
	if (0 > (file = open("map", O_RDONLY)))
		return (map_info);
	c = malloc(sizeof(char) * (len + 1));
	read(file, c, len + 1);
	buff = malloc(sizeof(char) * (map_info.line_n + 1));
	map_info.map = malloc(sizeof(int*) * map_info.y);
	while (0 < read(file, buff, map_info.line_n + 1))
	{
		map_info.map[i] = malloc(sizeof(int) * map_info.line_n);
		while (buff[j] != '\n')
		{
			if (buff[j] == map_info.empty)
				map_info.map[i][j] = 1;
			else if (buff[j] == map_info.obst)
				map_info.map[i][j] = 0;
			printf("%d ", map_info.map[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	return (map_info);
}


int Min(int a, int b, int c) {
	a = a < b ? a : b;
	return a < c ? a : c;
}

int     main(void)
{
    t_map_info map_info;
	map_info = file_to_struct();
	printf("%d %d", map_info.y, map_info.line_n);
	return (0);
}