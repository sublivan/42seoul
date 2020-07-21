#ifndef MAP_READ
# define MAP_READ

// #include "file_read.c"

char		*cpy_str(char *a, char *b);
char		*get_info(char *file_name);
int			get_line_num(char *file_name);
t_map_info	set_info(char *str);
t_map_info file_to_struct();

typedef struct
{
	int line_n; //가로
	int y; //세로
	int **map; //맵 2차원배열
	char empty; //빈공간문자
	char obst; //장애물문자
	char full; //채울문자
	
}				t_map_info;

#endif