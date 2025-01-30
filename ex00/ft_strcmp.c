#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str1;
	char	*str2;

	if (argc != 3)
		printf("Arguments failed.\n");
	else
	{
		str1 = argv[1];
		str2 = argv[2];
		printf("%i\n", ft_strcmp(str1, str2));
	}
	return (0);
}
