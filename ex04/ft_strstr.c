#include <unistd.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find || !str)
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
	}
	return (NULL);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*result;

	if (argc != 3)
	{
		printf("Arguments failed.\n");
		return (1);
	}
	result = ft_strstr(argv[1], argv[2]);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found.\n");
	return (0);
}
