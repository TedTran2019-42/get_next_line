/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 17:52:06 by ttran             #+#    #+#             */
/*   Updated: 2018/01/02 14:13:10 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5
# define FD_LIMIT 9001
# include "libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdlib.h>

int	get_next_line(const int fd, char **line);
int gtfoline(char **holder, char **line);

#endif
