#include<stdio.h>
#include "ft.h"

int Min(int a, int b, int c) {
	a = a < b ? a : b;
	return a < c ? a : c;
}

void resolve(t_map_info map_info) 
{
	int i, j, k=0, n, m, b[1001][1001], d[1001][1001] = { 0 };

    n = map_info.line_n;
    m = map_info.y;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) b[i][j] = map_info.map[i][j - 1] - 48;
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			if (b[i][j] == 1) {
				d[i][j] = Min(d[i - 1][j - 1], d[i - 1][j], d[i][j - 1]) + 1;
				k = k > d[i][j] ? k : d[i][j];
			}
	printf("%d", k*k);
}



int     main(void)
{
    t_map_info map_info;
	map_info = file_to_struct();
	printf("%d %d", map_info.y, map_info.line_n);

    resolve(map_info);
	return (0);
}