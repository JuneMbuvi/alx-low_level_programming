#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: t on success
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);/*we dont know the length of s1*/
	int len2 = strlen(s2);
	int size = len1 + len2 + 1;/*1 = '\0'*/
	char *t;
	int i;

	t = malloc(sizeof(char) * (size));
	if (!t)
		return (NULL);
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; i < len1; i++)
		t[i] = s1[i]; /*cpy contents of s1 in their respective ith spaces*/
	for (i = 0; i < len2; i++)
		t[len1 + i] = s2[i];
	t[size - 1] = '\0';
	return (t);

}
