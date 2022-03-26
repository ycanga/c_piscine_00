#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void	ft_write_comb(char a, char b, char c)

	
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

		
		int	i=0;
		while(i <= 0)
		{	
			if(a == '7' && b == '8' && c == '9')
			{	
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
				i++;
			}
		}			
}

void	ft_print_comb(void)
{
	
	char	a;
	char	b;
	char	c;
	
	a = '0';
	while(a <= '7'){
		
		b = a + 1;
		while(b <='8'){
			
			c = b + 1;
			while(c <='9'){
				
				ft_write_comb(a, b, c);
				c++;
			}
			b++;
			
		}
		a++;
	}
	
}
