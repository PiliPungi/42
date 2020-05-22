/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/27 17:04:43 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 05:04:08 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
char	*ft_strcpy(char *dest, const char *src);
void	*ft_calloc(size_t i1, size_t i2);
int		ft_strlen(const char *str);
int		free_ret(char **buf, int ret);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	32
# endif

#endif
