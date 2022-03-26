#include<unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
	
}

void	ft_print_out(char a, char b, char c, char d)
{
	int sayac=0;
	
	if(a == '0' && b == '0' && c == '0' && d == '0')
	{
	}
	
	else{	
		
		if(a == c && b == d || b == c && d==a)
		{
		}
		
		else if(a<=c && b<=d){
			
			ft_putchar(a);
			ft_putchar(b);
			
			
			ft_putchar(' ');
			
			ft_putchar(c);	
			ft_putchar(d);
			
			while(sayac < 1)
			{	
				if(a == '9' && b == '8' && c == '9' && d == '9')
				{
					break;
				}
					ft_putchar(',');
					sayac++;		
			}
			ft_putchar(' ');
		}
		
	}
		
}

void ft_print_comb2(void)
{
	char a = '0';
	char b;
	char c;
	char d;
		
	while (a <='9')
	{	
		b ='0';
		while(b<='9')
		{
			c='0';
			while(c<='9')
			{
				d='0';
				while(d<='9')
				{
					ft_print_out(a,b,c,d);
					d++;
					
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
int main(){
	ft_print_comb2();
}
