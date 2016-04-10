/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/10 18:40:16 by vquesnel          #+#    #+#             */
/*   Updated: 2016/04/10 18:40:33 by vquesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <sys/uio.h>
# include <fcntl.h>
# include <sys/types.h>
# define BUFF_SIZE 24
# define MAX_FILES 10240

int		get_next_line(int const fd, char **line);

#endif
