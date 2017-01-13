/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcheung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:29:00 by kcheung           #+#    #+#             */
/*   Updated: 2017/01/08 00:06:30 by kcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/includes/libft.h"

typedef	struct		s_fd
{
	int				fd;
	char			*stock;
	char			*ptr;
	struct s_fd		*next;
}					t_fd;
int					get_next_line(const int fd, char **line);
int					check_nline(char *buff, char **buff2, t_fd *node);
int					get_next_line(const int fd, char **line);
#endif
