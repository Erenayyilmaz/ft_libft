#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int nb, int fd)
{
	int	number_to_write;

	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
		ft_putnbr_fd(nb, fd);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr_fd((nb / 10), fd);
		}
		number_to_write = nb % 10 + 48;
		write(fd, &number_to_write, 1);
	}
}