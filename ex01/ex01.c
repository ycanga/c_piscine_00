#include<unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

void	ft_print_alphabet(void){
	
	char	first_letter='a';
	
	while(first_letter<='z'){
		
		ft_putchar(first_letter);
		first_letter++;
		
	}
}

