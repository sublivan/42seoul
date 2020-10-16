#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


void	*ft_bzero(void *str, size_t n);
void	*ft_memccpy(void *destination, const void *source, int c, size_t num);
void	*ft_memchr(const void *ptr, int value, size_t num);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memmove(void *destination, const void *source, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);
size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);
size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int ch);
int		ft_isalpha(int c);
int		ft_isdigit(int c);

#endif
