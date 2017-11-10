/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:27:00 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 15:11:58 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct	s_list
{
	struct s_list	*next;
	size_t			content_size;
	void			*content;
}				t_list;

int				ft_atoi(char *str);
void			*ft_bzero(void *ptr, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_islower(int c);
int				ft_isprint(int c);
int				ft_isupper(int c);
char			*ft_itoa(int nbr);
void			ft_lstadd(t_list **alst, t_list *new_one);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
void			*ft_memalloc(int size);
void			*ft_memccpy(void *ptrd, void *ptrs, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *ptrd, void *ptrs, size_t n);
void			ft_memdel(void **ptr);
int				ft_memjunc(void *ptr1, void *ptr2, size_t n);
void			*ft_memmove(void *ptrd, void *ptrs, size_t n);
void			*ft_memset(void *ptr, int c, size_t n);
int				ft_pow(int x, int y);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char *str);
void			ft_putendl_fd(char const *str, int fd);
void			ft_putnbr(int nbr);
void			ft_putnbr_fd(int nbr, int fd);
void			ft_putstr(const char *str);
void			ft_putstr_fd(char const *str, int fd);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(char *str, int c);
void			ft_strclr(char *str);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
void			ft_strdel(char **str);
char			*ft_strdup(const char *s);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *str, void (*f)(char *));
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_strlen(const char *str);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *dest, char *src, int nbr);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, char *src, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(char *str, char *to_find, size_t n);
char			*ft_strrchr(char *str, int c);
char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
