/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoupy <jkoupy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:41:30 by jkoupy            #+#    #+#             */
/*   Updated: 2024/07/04 20:31:58 by jkoupy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

//read
# include <unistd.h>
//malloc, free
# include <stdlib.h>
//bool
# include <stdbool.h>

# ifndef T_LIST
#  define T_LIST

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

# endif

//get_next_line.c
void	free_line(t_list **llist);
char	*read_gnl_line(t_list *llist);
int		line_ends(char *line);
bool	save_line(t_list **llist, int fd);
int		get_next_line(int fd, char **line);

void	free_list(t_list **llist, char *new_content);
int		line_length(t_list *llist);
bool	ft_lstadd_new(t_list **lst, char *new_content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);

//extra testing functions
// void	print_list(t_list *ll);
// void	print_nl(char *str);

#endif
