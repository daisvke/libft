/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanigaw <dtanigaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:23:44 by dtanigaw          #+#    #+#             */
/*   Updated: 2021/09/22 03:55:55 by dtanigaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 	32
# endif

# define NOT_FOUND		0
# define OFF			-1

/*
** return values
*/
# define ERROR 			-1
# define REACHED_EOF 	0
# define LINE_READ		1

# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

/*
** lst* functions
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
** get_next_line
*/
typedef struct s_gnl
{
	int				fd;
	char			*content;
	char			buffer[BUFFER_SIZE + 1];
	struct s_gnl	*next;
}					t_gnl;

int		ft_atoi(const char *str);
long	ft_abs(long n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_free_array_of_pointers(char **array_of_pointers, size_t arr_size);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isws(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	*ft_memchr(const void *ptr, int c, size_t n);
int		ft_memcmp(const void *p1, const void *p2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_nbrlen(long long int n);
void	ft_putchar(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr(long long int nb);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char *str);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strsdup(char *src, int size);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_wordcount(char *s, int sep);
int		get_next_line(int fd, char **line);

#endif
