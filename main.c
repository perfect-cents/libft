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

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KORG  "\x1B[33m"
#define RESET "\033[0m"

void	isto_test(void) {
	int	i;
	
	i = 0;
	while (i <= 127) {
		if (!isdigit(i) ^ !ft_isdigit(i)) {
			printf(KRED "isdigit FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "isdigit OK\n" RESET);

	i = 0;
	while (i <= 127) {
		if (!isalpha(i) ^ !ft_isalpha(i)) {
			printf(KRED "isalpha FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "isalpha OK\n" RESET);

	i = 0;
	while (i <= 127) {
		if (!isalnum(i) ^ !ft_isalnum(i)) {
			printf(KRED "isalnum FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "isalnum OK\n" RESET);

	i = 0;
	while (i <= 127) {
		if (!isascii(i) ^ !ft_isascii(i)) {
			printf(KRED "isascii FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "isascii OK\n" RESET);
	
	i = 0;
	while (i <= 127) {
		if (!isprint(i) ^ !ft_isprint(i)) {
			printf(KRED "isprint FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "isprint OK\n" RESET);
	
	i = 0;
	while (i <= 127) {
		if (!toupper(i) ^ !ft_toupper(i)) {
			printf(KRED "toupper FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "toupper OK\n" RESET);

	i = 0;
	while (i <= 127) {
		if (!tolower(i) ^ !ft_tolower(i)) {
			printf(KRED "tolower FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "tolower OK\n" RESET);
}

void	iss_test(void) {
	int i;
	
	i = 0;
	while (i <= 127) {
		if (!isspace(i) ^ !ft_isspace(i)) {
			printf(KRED "isspace FAIL on %d\n" RESET, i);
			return ;
		}
		i++;
	}
	printf(KGRN "isspace OK\n" RESET);	
}

void	atoi_test(void) {
	char *s1 = "5";
	char *s2 = "2 087 561";
	char *s3 = "0";
	char *s4 = "-32";
	char *s5 = "- 84	2    59 5 17";
	char *s6 = "\t\n\v -45dd78z22-4d";
	char *s7 = "+44-5";

	if (ft_atoi(s1) != atoi(s1) || ft_atoi(s2) != atoi(s2) \
	|| ft_atoi(s3) != atoi(s3) || ft_atoi(s4) != atoi(s4) \
	|| ft_atoi(s5) != atoi(s5) || ft_atoi(s6) != atoi(s6) \
	|| ft_atoi(s7) != atoi(s7))
	{
		printf(KRED "atoi FAIL\n" RESET);
		return;
	}
	printf(KGRN "atoi OK\n" RESET);
}

void	itoa_test(void) {
	if (strcmp(ft_itoa(1), "1") \
	|| strcmp(ft_itoa(12), "12") \
	|| strcmp(ft_itoa(0), "0") \
	|| strcmp(ft_itoa(-150), "-150") \
	|| strcmp(ft_itoa(-2147483648), "-2147483648"))
	{
		printf(KRED "itoa FAIL\n" RESET);
		return;
	}
	printf(KGRN "itoa OK\n" RESET);
}

void	strlen_test(void) {
	char	*s1 = "hello world.";
	char	*s2 = "";

	if (ft_strlen(s1) != strlen(s1) || ft_strlen(s2) != strlen(s2))
	{
		printf(KRED "strlen FAIL\n" RESET);
		return;
	}
	printf(KGRN "strlen OK\n" RESET);
}

void	strcpy_test(void) {
	char	*s1 = "hello world.";
	char	*ftd_1 = ft_strnew(13);
	char	*ftd_2 = ft_strnew(10);
	char	*ftd_3 = ft_strnew(15);
	char	*d_1 = ft_strnew(13);
	char	*d_2 = ft_strnew(10);
	char	*d_3 = ft_strnew(15);
	char	*s2 = "";
	char	*ftd2_1 = ft_strnew(1);
	char	*d2_1 = ft_strnew(1);

	ft_strcpy(ftd_1, s1);
	ft_strcpy(ftd_2, s1);
	ft_strcpy(ftd_3, s1);
	strcpy(d_1, s1);
	strcpy(d_2, s1);
	strcpy(d_3, s1);
	
	ft_strcpy(ftd2_1, s2);
	strcpy(d2_1, s2);
	
	if (strcmp(ftd_1, d_1) && strcmp(ftd_2, d_2) && strcmp(ftd_3, d_3) \
	&& strcpy(ftd2_1, d2_1))
	{
		printf(KRED "strcpy FAIL\n" RESET);
		return;
	}
	printf(KGRN "strcpy OK\n" RESET);
}

void	memcpy_test(void) {
	char a[20] = "Hello World!";
	char b[20] = "!dlroW olleH";
	char c[20] = "Hello World!";
	char d[20] = "!dlroW olleH";
	char e[2] = "";
	char f[2] = "";
	
	if (memcmp(memcpy(a, b, 6), ft_memcpy(c, d, 6), 20) \
	|| !memcmp(ft_memcpy(e, b, 6), ft_memcpy(f, d, 6), 20))
	{
		printf(KRED "memcpy FAIL\n" RESET);
		return;
	}
	printf(KGRN "memcpy OK\n" RESET);
}

void	strdup_test(void) {
	char	*s1 = "hello world.";
	char	*s2 = "";
	char	*sc1 = NULL;
	char	*sc2 = NULL;

	if (strcmp(strdup(s1), (sc1 = ft_strdup(s1))) \
	|| strcmp((sc2 = ft_strdup(s2)), strdup(s2)))
	{
		printf(KRED "strdup FAIL\n" RESET);
		return;
	}
	printf("trying to free strdup...\n" RESET);
	free(sc1);
	free(sc2);
	printf(KGRN "strdup OK\n" RESET);
}

void	chr_test(void) {
	char a[20] = "Hello World!";

	if ((strcmp(strchr(a, 'e'), ft_strchr(a, 'e'))) != 0 \
	|| strchr(a, 'w') != ft_strchr(a, 'w') \
	|| strcmp(strchr(a, 'W'), ft_strchr(a, 'W')) != 0 \
	|| strchr(a, '1') != ft_strchr(a, '1') \
	|| strcmp(strchr(a, '\0'), ft_strchr(a, '\0')) != 0)
	{
		printf(KRED "strchr FAIL\n" RESET);
		return;
	}
	printf(KGRN "strchr OK\n" RESET);

	if ((strcmp(strrchr(a, 'e'), ft_strrchr(a, 'e'))) != 0 \
	|| strrchr(a, 'w') != ft_strrchr(a, 'w') \
	|| strcmp(strrchr(a, 'W'), ft_strrchr(a, 'W')) != 0 \
	|| strrchr(a, '1') != ft_strrchr(a, '1') \
	|| strcmp(strrchr(a, '\0'), ft_strrchr(a, '\0')) != 0)
	{
		printf(KRED "strrchr FAIL\n" RESET);
		return;
	}
	printf(KGRN "strrchr OK\n" RESET);

	if (!memcmp(memchr(a, 'e', 6), ft_memchr(a, 'e', 6), 20) \
	|| !memcmp(memchr(a, 'e', 8), ft_memchr(a, 'e', 8), 20))
	{
		printf(KRED "memchr FAIL\n" RESET);
		return;
	}
	printf(KGRN "memchr OK\n" RESET);
}

void	cmp_test(void) {
	char a[20] = "Hello World!";
	char b[20] = "Hello world!";
	char c[20] = "Hello Yorld!";
	char d[20] = "Hello Sorld";
	char e[20] = "Hello World!";

	if (strcmp(a, b) != ft_strcmp(a, b) || strcmp(a, c) != ft_strcmp(a, c) \
	|| strcmp(a, d) != ft_strcmp(a, d) || strcmp(a, e) != ft_strcmp(a, e))
	{
		printf(KRED "strcmp FAIL\n" RESET);
		return;
	}
	printf(KGRN "strcmp OK\n" RESET);

	if (strncmp(a, b, 6) != ft_strncmp(a, b, 6) \
	|| strncmp(a, c, 8) != ft_strncmp(a, c, 8) \
	|| strncmp(a, d, 4) != ft_strncmp(a, d, 4) \
	|| strncmp(a, e, 20) != ft_strncmp(a, e, 20))
	{
		printf(KRED "strncmp FAIL\n" RESET);
		return;
	}
	printf(KGRN "strncmp OK\n" RESET);

	if (memcmp(a, b, 6) != ft_memcmp(a, b, 6) \
	|| memcmp(a, c, 8) != ft_memcmp(a, c, 8) \
	|| memcmp(a, d, 4) != ft_memcmp(a, d, 4) \
	|| memcmp(a, e, 20) != ft_memcmp(a, e, 20))
	{
		printf(KRED "memcmp FAIL\n" RESET);
		return;
	}
	printf(KGRN "memcmp OK\n" RESET);
	
	if (!strcmp(a, b) == !ft_strequ(a, b) || !strcmp(a, c) == !ft_strequ(a, c) \
	|| !strcmp(a, d) == !ft_strequ(a, d) || !strcmp(a, e) == !ft_strequ(a, e))
	{
		printf(KRED "strequ FAIL\n" RESET);
		return;
	}
	printf(KGRN "strequ OK\n" RESET);
	
	if (!strncmp(a, b, 6) == !ft_strnequ(a, b, 6) \
	|| !strncmp(a, c, 8) == !ft_strnequ(a, c, 8) \
	|| !strncmp(a, d, 4) == !ft_strnequ(a, d, 4) \
	|| !strncmp(a, e, 20) == !ft_strnequ(a, e, 20))
	{
		printf(KRED "strnequ FAIL\n" RESET);
		return;
	}
	printf(KGRN "strnequ OK\n" RESET);
}

void	set_test(void) {
	char s1[20] = "Hello World!";
	char s2[20] = "Hello World!";
	
	if ((memcmp(memset(s1, '5', 6), ft_memset(s2, '5', 6), 12)) != 0 \
	|| (memcmp(memset(s1, 'o', 15), ft_memset(s2, 'o', 15), 15)) != 0)
	{
		printf(KRED "memset FAIL\n" RESET);
		return;
	}
	printf(KGRN "memset OK\n" RESET);

	bzero(s1, 6);
	ft_bzero(s2, 6);
	if ((memcmp(s1, s2, 20)) != 0)
	{
		printf(KRED "bzero FAIL\n" RESET);
		return;
	}
	printf(KGRN "bzero OK\n" RESET);

	char s3[11] = "0123456789";
	char s4[11] = "0123456789";

	bzero(s3, strlen(s3));
	ft_strclr(s4);
	if ((memcmp(s3, s4, 11)) != 0)
	{
		printf(KRED "strclr FAIL\n" RESET);
		return;
	}
	printf(KGRN "strclr OK\n" RESET);

}

void	strstr_test(void) {
	char a[20] = "Hello World!";
	char b[20] = "";
	char c[20] = "Hello yorld!";
	char d[20] = "Hello World! I am";
	char e[20] = "Hello World!";
	
	if ((strcmp(strstr(a, b), ft_strstr(a, b))) != 0 \
	|| strstr(a, c) != ft_strstr(a, c) \
	|| strstr(a, d) != ft_strstr(a, d) \
	|| (strcmp(strstr(a, e), ft_strstr(a, e))) != 0)
	{
		printf(KRED "strstr FAIL\n" RESET);
		return;
	}
	printf(KGRN "strstr OK\n" RESET);
}

void	putfl(char *s) { putchar(*s); }
void	putfli(unsigned int n, char *s) { putchar(n ? *s : *s); }
char	retc(char c) { return (c); }
char	retci(unsigned int i, char c) { return (i ? c : c); }

void	fncptr_test(void) {
	ft_striter("striter OK\n", &putfl);
	ft_striteri("striteri OK\n", &putfli);
	
	char	*s = ft_strmap("strmap OK\n", &retc);
	printf(KGRN "%s" RESET, s);

	s = ft_strmapi("strmapi OK\n", &retci);
	printf(KGRN "%s" RESET, s);
}

void	put_test(void) {
	putchar('\0');
	
	write(1, "putchar test ", 14);
	ft_putchar('O');
	ft_putchar_fd('K', 1);
	putchar('\n');
	
	write(1, "putstr ", 7);
	ft_putstr("OK\n");
	
	write(1, "putstr_fd ", 10);
	ft_putstr_fd("OK\n", 1);
	
	write(1, "putendl ", 8);
	ft_putendl("OK");
	
	write(1, "putendl_fd ", 11);
	ft_putendl_fd("OK", 1);
	
	write(1, "putnbr test\n", 12);
	write(1, "         12 : ", 14);
	ft_putnbr(12);
	putchar('\n');
	
	write(1, "        -10 : ", 14);
	ft_putnbr(-10);
	putchar('\n');
	
	write(1, "-2147483648 : ", 14);
	ft_putnbr(-2147483648);
	putchar('\n');
	
	write(1, "putnbr_fd test\n", 15);
	write(1, "         12 : ", 14);
	ft_putnbr_fd(12, 1);
	putchar('\n');
	
	write(1, "        -10 : ", 14);
	ft_putnbr_fd(-10, 1);
	putchar('\n');
	
	write(1, "-2147483648 : ", 14);
	ft_putnbr_fd(-2147483648, 1);
	putchar('\n');
}
/*
void	split_test(void) {
	char	*s = "h \t\ne";
	char	**tab = ft_strsplit(s, ' ');

	int	i = 0;
	while (tab[i]) { i++; }
	if (i != 3 || strcmp(tab[0], "h") || strcmp(tab[1], "\t\ne")) {
		printf(KRED "strsplit FAIL\n" RESET);
		return;
	}
	printf("hey\n");
	tab = ft_strsplit("", '*');
	char	**tab2 = ft_strsplit("blabla", '*');
	if (tab && *tab == NULL && tab2 && *tab2 != NULL) {
		printf(KRED "strsplit FAIL\n" RESET);
		return;
	}
	printf(KGRN "strsplit OK\n" RESET);
}
*/
void			strsplit_main(void)
{
	char **tab;

	tab = ft_strsplit("***salut****!**", '*');
	if ((strcmp(tab[0], "salut") == 0) &&
			(strcmp(tab[1], "!") == 0) &&
				(tab[2] == NULL))
	{
		tab = ft_strsplit("*****", '*');
		if (tab[0] == NULL)
		{
			tab = ft_strsplit("coucou", '*');
			if ((strcmp(tab[0], "coucou") == 0) &&
				(tab[1] == NULL))
			 {
			 	tab = ft_strsplit("", '*');
			 	if (tab && tab[0] == NULL)
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

/*
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char* ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);

char* ft_strsub(char const *s, unsigned int start, size_t len);
char* ft_strjoin(char const *s1, char const *s2);

char* ft_strtrim(char const *s);

void	memmove_main(void) {
	char b[20] = "Hello World!";
	char a[20] = "Smile";
	char d[20] = "Hello World!";
	char c[20] = "Smile";

	char i[20] = "Hello World!";
	char e[20] = "Smile";
	char f[20] = "Hello World!";
	char g[20] = "Smile";
	
	if ((strcmp(memmove(a, b, 8), ft_memmove(c, d, 8))) == 0)
	{
		if ((strcmp(memmove(i, e, 8), ft_memmove(f, g, 8))) == 0)
		{
			printf(KGRN "OKAY! =D\n" RESET);
			return;
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void	memcpy_test(void) {
	char a[20] = "Hello World!";
	char b[20] = "!dlroW olleH";
	char c[20] = "Hello World!";
	char d[20] = "!dlroW olleH";
	char e[2] = "";
	char f[2] = "";
	
	if (strcmp(memcpy(a, b, 6), memcpy(c, d, 6)) \
	|| (!strcmp(memcpy(e, b, 6), memcpy(f, d, 6)))
	{
		printf(KRED "memcpy FAIL\n" RESET);
		return;
	}
	printf(KGRN "memcpy OK\n" RESET);
}

void	memccpy_main(void) {

	char a[20] = "Hello World!";
	char b[20] = "Smile-Everyday";
	char c[20] = "Hello World!";
	char d[20] = "Hello World!";
	char e[20] = "Hello World!";
	char f[20] = "Hello World!";
	char g[20] = "Hello World!";

	char h[2] = "";
	char i[2] = "";
	char j[2] = "";
	
	memccpy(a, b, '\0', 12);
	ft_memccpy(d, b, '\0', 12);
	if ((strcmp(a, d)) == 0)
	{
		memccpy(c, b, 'l', 6);
		ft_memccpy(e, b, 'l', 6);
		if ((strcmp(c, e)) == 0)
		{
			memccpy(f, b, 'o', 6);
			ft_memccpy(g, b, 'o', 6);
			if ((strcmp(f, g)) == 0)
			{
				memccpy(i, h, 'a', 6);
				ft_memccpy(j, h, 'a', 6);
				if ((strcmp(i, j)) == 0)
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void	strnstr_main(void) {
	char	buf[10];

	bzero(buf, 10);
	strcpy(buf, "un deux 9");
	if (strcmp(ft_strnstr(buf, "deux", 10), "deux 9") == 0)
	{
		if (ft_strnstr(buf, "9", 3) == NULL)
		{
			if (strcmp(ft_strnstr(buf, "", 6), buf) == 0)
			{
				if (ft_strnstr(buf, "deux", 5) == NULL)
				{
					if (strcmp(ft_strnstr(buf, "9", 10), "9") == 0)
					{
						if (ft_strnstr(buf, "9", 8) == NULL)
						{
							printf(KGRN "OKAY! =D\n" RESET);
							return;
						}
					}
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void	strcat_main(void) {
	char	a[8]="Hello ";
	char	b[8]="W0rld!";
	char	c[8]="Hello ";
	char	d[2]="";
	char	e[2]="";
	char	f[2]="";
	char	g[2]="";
	char	h[2]="";

	if ((strcmp(strcat(a, b), ft_strcat(c, b))) == 0)
	{
		if ((strcmp(strcat(f, h), ft_strcat(g, h)) == 0))
		{
			if ((strcmp(strcat(d, b), ft_strcat(e, b)) == 0))
			{
				printf(KGRN "OKAY! =D\n" RESET);
				return;
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void	strncat_main(void) {
	char	buf[20];

	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	if (strcmp(buf, "To be or not") != 0)
	{
		printf(KRED "FAILED!\n" RESET);
		return;
	}
	ft_strncat(buf, "efefef", 0);
	if (strcmp(buf, "To be or not") != 0)
	{
		printf(KRED "FAILED!\n" RESET);
		return;
	}
	ft_strncat(buf, "", 0);
	if (strcmp(buf, "To be or not") != 0)
	{
		printf(KRED "FAILED!\n" RESET);
		return;
	}
	printf(KGRN "OKAY! =D\n" RESET);
}

void	strlcat_main(void) {
	char	a[8]="Hello ";
	char	b[8]="W0rld!";
	char	c[8]="Hello ";
	char	d[2]="";
	char	e[2]="";
	char	f[2]="";
	char	g[2]="";
	char	h[2]="";

	if (strlcat(a, b, 6) == ft_strlcat(c, b, 6))
	{
		if (strlcat(f, h, 3) == ft_strlcat(g, h, 3))
		{
			if (strlcat(d, b, 15) == ft_strlcat(e, b, 15))
			{
				printf(KGRN "OKAY! =D\n" RESET);
				return;
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void	strncpy_main(void) {
	char a[20] = "Hello World!";
	char b[20] = "!dlroW olleH";
	char c[20] = "Hello World!";
	char d[20] = "!dlroW olleH";
	char e[2] = "";
	char f[2] = "";
	
	if ((strcmp(strncpy(a, b, 20), ft_strncpy(c, d, 20))) == 0)
	{
		if ((strcmp(strncpy(e, b, 4), ft_strncpy(f, d, 4))) == 0)
		{
			if ((strcmp(strncpy(e, b, 0), ft_strncpy(f, d, 0))) == 0)
			{
				printf(KGRN "OKAY! =D\n" RESET);
				return;
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			itoa_main(void)
{
	int i1 = 5;
	int i2 = 201;
	int i3 = 0;
	int i4 = 32;
	int i5 = -87;
	int i6 = -84259517;
	char *str1 = "5";
	char *str2 = "201";
	char *str3 = "0";
	char *str4 = "32";
	char *str5 = "-87";
	char *str6 = "-84259517";

	if (strcmp(ft_itoa(i1), str1) == 0)
	{
		if (strcmp(ft_itoa(i2), str2) == 0)
		{
			if (strcmp(ft_itoa(i3), str3) == 0)
			{
				if (strcmp(ft_itoa(i4), str4) == 0)
				{
					if (strcmp(ft_itoa(i5), str5) == 0)
					{
						if (strcmp(ft_itoa(i6), str6) == 0)
						{
							printf(KGRN "OKAY! =D\n" RESET);
							return;
						}
					}
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strnew_main(void)
{
	char *mem1;
	char *mem2 = "Hello World";
	int i = 0;

	mem1 = ft_strnew(2000);
	while (i <= 2000)
	{
		if (mem1[i] != '\0')
		{
			printf(KRED "FAILED!\n" RESET);
			return;
		}
		i++;
	}
	i = 0;
	mem2 = ft_strnew(100);
	while (i <= 100)
	{
		if (mem2[i] != '\0')
		{
			printf(KRED "FAILED!\n" RESET);
			return;
		}
		i++;
	}
	printf(KGRN "OKAY! =D\n" RESET);
}

void			strsplit_main(void)
{
	char **tab;

	tab = ft_strsplit("***salut****!**", '*');
	if ((strcmp(tab[0], "salut") == 0) &&
			(strcmp(tab[1], "!") == 0) &&
				(tab[2] == NULL))
	{
		tab = ft_strsplit("*****", '*');
		if (tab[0] == NULL)
		{
			tab = ft_strsplit("coucou", '*');
			if ((strcmp(tab[0], "coucou") == 0) &&
				(tab[1] == NULL))
			 {
			 	tab = ft_strsplit("", '*');
			 	if (tab && tab[0] == NULL)
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			striter_main(void)
{
	char	str[] = "aBcDeF";

	ft_striter(str, it_test);
	if (strcmp(str, "bCdEfG") == 0)
	{
		printf(KGRN "OKAY! =D\n" RESET);
		return;
	}
	printf(KRED "FAILED!\n" RESET);
}

void			striteri_main(void)
{
	char	str[] = "aBcDeF";

	ft_striteri(str, iti_test);
	if (strcmp(str, "aCeGiK") == 0)
	{
		printf(KGRN "OKAY! =D\n" RESET);
		return;
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strmap_main(void)
{
	char	*src;
	char	*dst;

	src = strdup("abcde");
	dst = ft_strmap(src, map_test);
	free(src);
	src = NULL;
	if (strcmp(dst, "bcdef") == 0)
	{
		printf(KGRN "OKAY! =D\n" RESET);
		return;
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strmapi_main(void)
{
	char	*src;
	char	*dst;

	src = strdup("abcde");
	dst = ft_strmapi(src, mapi_test);
	free(src);
	src = NULL;
	if (strcmp(dst, "acegi") == 0)
	{
		printf(KGRN "OKAY! =D\n" RESET);
		return;
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strequ_main(void)
{
	char a[20] = "Hello World!";
	char b[20] = "Hello world!";
	char c[20] = "Hello-World!";
	char d[20] = "Hello World";
	char e[20] = "Hello World!";

	if (ft_strequ(a, b) == 0)
	{
		if (ft_strequ(a, c) == 0)
		{
			if (ft_strequ(a, d) == 0)
			{
				if (ft_strequ(a, e) == 1)
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strnequ_main(void)
{
	char a[20] = "Hello World!";
	char b[20] = "Hello world!";
	char c[20] = "Hello-World!";
	char d[20] = "Hello World";
	char e[20] = "Hello World!";

	if (ft_strnequ(a, b, 12) == 0)
	{
		if (ft_strnequ(a, c, 5) == 1)
		{
			if (ft_strnequ(a, d, 12) == 0)
			{
				if (ft_strnequ(a, e, 35) == 1)
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strjoin_main(void)
{
	char	b[8]="W0rld!";
	char	c[8]="Hello ";
	char	e[2]="";
	char	g[2]="";
	char	h[2]="";

	if ((strcmp("Hello W0rld!", ft_strjoin(c, b))) == 0)
	{
		if ((strcmp("", ft_strjoin(g, h)) == 0))
		{
			if ((strcmp("W0rld!", ft_strjoin(e, b)) == 0))
			{
				printf(KGRN "OKAY! =D\n" RESET);
				return;
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strsub_main(void)
{
	char	str[12]="hello W0rld!";

	if ((strcmp("lo W0", ft_strsub(str, 3, 5))) == 0)
	{
		if ((strcmp(ft_strsub(str, 0, 0), "")) == 0)
		{
			if (ft_strsub(str, 4, -10) == NULL)
			{
				if ((strcmp(" ", ft_strsub(str, 5, 1)) == 0))
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strtrim_main(void)
{
	char	str[12]="hello W0rld!";

	if ((strcmp("lo W0", ft_strsub(str, 3, 5))) == 0)
	{
		if ((strcmp(ft_strsub(str, 0, 0), "")) == 0)
		{
			if (ft_strsub(str, 4, -10) == NULL)
			{
				if ((strcmp(" ", ft_strsub(str, 5, 1)) == 0))
				{
					printf(KGRN "OKAY! =D\n" RESET);
					return;
				}
			}
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			strclr_main(void)
{
	char str1[14] = "Hello World!";
	char str2[2] = "";
	int  i = 0;

	ft_strclr(str1);
	while (i < 13)
	{
		if (str1[i] != '\0')
		{
			printf(KRED "FAILED!\n" RESET);
			return;
		}
		i++;
	}
	ft_strclr(str2);
	i = 0;
	while (i < 2)
	{
		if (str2[i] != '\0')
		{
			printf(KRED "FAILED!\n" RESET);
			return;
		}
		i++;
	}
	printf(KGRN "OKAY! =D\n" RESET);
}

void			strdel_main(void)
{
	char *mem1;
	char *mem2;

	mem1 = malloc(2000);
	if (!mem1)
	{
		printf(KORG "UNEXPECTED MALLOC ERROR\n" RESET);
		return;
	}
	ft_strdel(&mem1);
	if (mem1 == NULL)
	{
		mem2 = malloc(0);
		if (!mem2)
		{
			printf(KORG "UNEXPECTED MALLOC ERROR\n" RESET);
			return;
		}
		ft_strdel(&mem2);
		if (mem2 == NULL)
		{
			printf(KGRN "OKAY! =D\n" RESET);
			return;
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			memdel_main(void)
{
	void *mem1;
	void *mem2;

	mem1 = malloc(2000);
	if (!mem1)
	{
		printf(KORG "UNEXPECTED MALLOC ERROR\n" RESET);
		return;
	}
	ft_memdel(&mem1);
	if (mem1 == NULL)
	{
		mem2 = malloc(0);
		if (!mem2)
		{
			printf(KORG "UNEXPECTED MALLOC ERROR\n" RESET);
			return;
		}
		ft_memdel(&mem2);
		if (mem2 == NULL)
		{
			printf(KGRN "OKAY! =D\n" RESET);
			return;
		}
	}
	printf(KRED "FAILED!\n" RESET);
}

void			memalloc_main(void)
{
	size_t		len = 100;
	void		*mem1, *mem2;

	mem1 = malloc(len);
	if (!mem1)
	{
		printf(KORG "UNEXPECTED MALLOC ERROR\n" RESET);
		return;
	}
	bzero(mem1, len);
	mem2 = ft_memalloc(len);
	if (!mem2)
	{
		printf(KRED "FAILED!\n" RESET);
		return;
	}
	if (memcmp(mem1, mem2, 100) == 0)
	{
		printf(KGRN "OKAY! =D\n" RESET);
		return;
	}
	printf(KRED "FAILED!\n" RESET);
}
*/

int main(int ac, char **av) {
	if (ac < 1 && av[0][0]) {
		return (0);
	}

	isto_test();
	iss_test();
	atoi_test();
	itoa_test();
	strlen_test();
	strcpy_test();
	memcpy_test();
	strdup_test();
	chr_test();
	cmp_test();
	set_test();
	strstr_test();
	fncptr_test();
	put_test();
	//strsplit_main();

	return (0);
}