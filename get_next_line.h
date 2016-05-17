/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 21:18:11 by vquesnel          #+#    #+#             */
/*   Updated: 2016/05/17 14:41:00 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <fcntl.h>
# define BUFF_SIZE 69
# define EOL '\n'

typedef struct		s_line
{
	int				fd;
	char			*line;
	struct s_line	*next;
}					t_line;

int					get_next_line(const int fd, char **line);

#endif
