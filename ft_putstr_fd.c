#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr_fd(const char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	while (INT_MAX < len)
	{
		write(fd, s, INT_MAX);
		s += INT_MAX;
		len -= INT_MAX;
	}
	write(fd, s, len);
}
