#include <unistd.h>
#include <stdio.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *d = dest;
	const unsigned char *s = src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int main()
// {
// 	// const char src[] = "aymane";
// 	// char dest[] = "xxxxxx";

// 	int src = 23456789;
// 	int dest = 90;
// 	memcpy(&dest, &src, 4);
// 	printf("%d", dest);
// 	return 0;
// }