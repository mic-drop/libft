#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int	ft_tolower(int c);
size_t	ft_strlen(const char *str);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strchr(const char *str, int search_str);
void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
void *ft_memcpy(void *dest_str, const void * src_str, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char    *ft_strnstr(const char *s, const char *find, size_t slen);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_atoi(const char *str);
char *ft_strdup(const char *string);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif