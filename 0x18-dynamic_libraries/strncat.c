/**
 * *_strncat - concatenates 2 strings
 * Return: dest
 * @dest: first pointer
 * @src: second pointer
 * @n: parameter being tested
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
