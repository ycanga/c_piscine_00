#include<unistd.h>

void	ft_putchar(char c){
	write(1, &c,1);
}

void	ft_print_numbers(void){
	
	char	number=48;
	
	while(number<58){
	
		ft_putchar(number);
		number++;
	
	}
}
