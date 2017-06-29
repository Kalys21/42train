#include <unistd.h> 

int	ft_putchar(char c)
{	
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c > 96)
	{
		ft_putchar(c);
		c--;

	}
	ft_putchar('\n');
}

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c < 58)
	{
		ft_putchar(c);
		c++;
	
	}
	ft_putchar('\n');
}

void	ft_print_alphabet(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		ft_putchar(c);
		i++;
		c++;
	
	}
	ft_putchar('\n');
}

int	main()
{
	ft_print_alphabet();
	ft_print_reverse_alphabet();
	ft_print_numbers();
	return (0);
}

