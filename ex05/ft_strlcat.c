#include <unistd.h>
unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0' && i < n)
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	copy_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len == size)
		return (size + src_len);
	copy_len = size - dest_len - 1;
	if (copy_len > 0)
	{
		ft_strncat(dest, src, copy_len);
		dest[dest_len + copy_len] = '\0';
	}
	return (dest_len + src_len);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	char str1[20] = "Visca Barça ";
	char str2[] = "Visca Catalunya";
	unsigned int longitud = ft_strlcat(str1, str2, sizeof(str1));

	printf("The final string is \"%s\", which has %zu characters.\n", str1, longitud);
	return (0);
}
