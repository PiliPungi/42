/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   display_file.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 20:35:23 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 21:26:10 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 2048

void	ft_display(char *filename)
{
	int			fd;
	char		buf[BUF_SIZE];
	int			readr;

	fd = open(filename, O_RDONLY);
	while ((readr = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[readr] = '\0';
		write(1, &buf, readr);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc == 2)
	{
		ft_display(argv[1]);
		return (0);
	}
	else
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
}
