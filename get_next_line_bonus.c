/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:13:13 by hbarrak           #+#    #+#             */
/*   Updated: 2022/11/07 16:27:54 by hbarrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*gnl_app(char *dst, char **leftovers, int fd)
{
	char	*tmp;
	int		r;

	tmp = 0;
	if (*leftovers)
		tmp = ft_strjoin(0, *leftovers);
	if (found_nl(tmp, leftovers))
		return (tmp);
	dst = malloc(BUFFER_SIZE + 1);
	if (dst)
		dst[0] = 0;
	while (dst && !found_nl(dst, leftovers))
	{
		r = read(fd, dst, BUFFER_SIZE);
		if (r <= 0)
			break ;
		dst[r] = 0;
		tmp = ft_strjoin(tmp, dst);
	}
	if (dst)
		free(dst);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*leftovers[10240];
	char		*dst;

	dst = 0;
	dst = gnl_app(dst, &leftovers[fd], fd);
	if (dst)
		dst = ft_strtrim_nl(dst);
	return (dst);
}
