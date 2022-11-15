/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:13:56 by hbarrak           #+#    #+#             */
/*   Updated: 2022/11/07 16:14:15 by hbarrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
char	*ft_strtrim_nl(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *src, int start, size_t len);
int		found_nl(char *dst, char **leftovers);

#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 8
#endif
