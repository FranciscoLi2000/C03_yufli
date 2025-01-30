#include <unistd.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < nb && dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	int	n;

	n = 5;
	if (argc != 3)
	{
		printf("Arguments failed.\n");
		return (1);
	}
	int len1 = strlen(argv[1]);
	int len2 = strlen(argv[2]);
	char *str1 = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str1)
	{
		printf("Memory leaks.\n");
		return (1);
	}
	strcpy(str1, argv[1]);
	printf("%s\n", ft_strncat(str1, argv[2], n));
	free(str1);
	return (0);
}
