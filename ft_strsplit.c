#include "libft.h"

size_t	split_count(char *s, char c)
{
	char	flag;
	size_t	splits;

	flag = 0;
	splits = 0;
	while (*s)
	{
		if (flag && *s == c)
		{
			flag = 0;
		}
		else if (!flag && *s == c)
		{
			flag = 1;
			splits++;
		}
		s++;
	}
	return (splits);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab = NULL;
	int		i;
	int		j;

	if ((tab = (char **)malloc( \
		sizeof(*tab) * (split_count((char *)s, c) + 1)
	)) == NULL)
	{
		free(tab);
		return (NULL);
	}
	j = 0;
	while (s && s[i]) {
		while (*s && *s == c)
		{
			s++;
		}
		if (*s) {
			i = 0;
			while (s[i] && s[i] == c)
			{
				i++;
			}
			tab[j] = ft_strndup(s, i);
			j++;
			s += i;
		}
	}
	tab[j] = NULL;
	return (tab);
}
/*
char	**split(char *str, int (*is_splitter)(char)) {
	char **tab = NULL;

	int splits = 0;
	int flag = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (flag && is_splitter(str[i])) {
			flag = 0;
		} else if (!flag && !is_splitter(str[i])) {
			flag = 1;
			splits++;
		}
		i++;
	}

	if ((tab = (char **)malloc(sizeof(*tab) * (splits + 1))) == NULL) {
		return (NULL);
	}

	i = 0;
	int j = 0;

	while (str && str[i]) {
		while (*str && is_splitter(*str)) { str++; }

		if (*str) {
			while (str[i] && !is_splitter(str[i])) { i++; }
			tab[j] = strndup(str, i);
			j++;
			str += i;
			i = 0;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int splitWS_isspace(char ch) {
	return (ch == ' ' || ch == '\t' || ch == '\n' \
			|| ch == '\v' || ch == '\f' || ch == '\r');
}

int splitNewLine_isnewline(char ch) {
	return (ch == '\n');
}

char **splitWS(char *str) {
	return split(str, &splitWS_isspace);
}

char **splitNewLine(char *str) {
	return split(str, &splitNewLine_isnewline);
}

	void putTable(char **tab) {
		for (int i = 0; tab[i] != NULL; i++) {
			printf("%s\n", tab[i]);
		}
	}

	int main(int ac, char const *av[]) {
		if (ac == 2) {
			char **raw;

			if ((raw = splitWS((char *)av[1])) == NULL) {
				return (0);
			} else {
				putTable(raw);
			}
		}
		return (0);
	}

*/
