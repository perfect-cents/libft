#include "libft.h" 

void printMem(char *ptr, int nbr) {
	while (nbr >= 0) {
		if (!*ptr) {
			write(1, "@", 1);
		} else if (*ptr < 31 || *ptr > 126) {
			write(1, ".", 1);
		} else {
			write(1, ptr, 1);
		}
		ptr++;
		nbr--;
	}
	write(1, "\n", 1);
}

int main(int ac, char **av) {
	if (ac < 2 && av[0][0]) {
		return (0);
	}
	//printf("%d\n", ft_atoi(av[1]));

	/*
	printf("isaplpha: %d\n", ft_isalpha(av[1]));
	printf("isascii: %d\n", ft_isascii(av[1]));
	printf("isdigit: %d\n", ft_isdigit(av[1]));
	printf("isalnum: %d\n", ft_isalnum(av[1]));
	printf("isprint: %d\n", ft_isprint(av[1]));
	*/

	//printf("%s\n", ft_strdup(av[1]));

	return (0);
}