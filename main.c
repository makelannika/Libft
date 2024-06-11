#include <fcntl.h>
#include "libft.h"
/*
int main()
{
	int	fd;
 	char	*line;

 	fd = open("file.txt", O_RDONLY);
 	while ((line = get_next_line(fd)))
 	{
 		ft_printf("%s", line);
 	}
	return (0);
}
*/
int main()
{
	int		i;
	int		fd;
	int		fd2;
 	char	*line;

	i = 0;
 	fd = open("file.txt", O_RDONLY);
 	fd2 = open("file2.txt", O_RDONLY);

	line = get_next_line(fd);
 	ft_printf("%s", line);
	line = get_next_line(fd2);
	ft_printf("%s", line);
	line = get_next_line(fd);
	ft_printf("%s", line);
	line = get_next_line(fd2);
	ft_printf("%s", line);
	line = get_next_line(fd2);
	ft_printf("%s", line);
	line = get_next_line(fd);
 	ft_printf("%s", line);
	return (0);
}
