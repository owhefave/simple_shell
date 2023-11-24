#include "main.h"

/**
 *_strcat - join two strings together
 *@dest: dest of copied str as a pointer to a char
 *@src: source of str as a pointer to a const char
 *Return: return to dest
 */

char *_strcat(char *dest, const char *src)
{
		int i;
			int j;

				for (i = 0; dest[i] != '\0'; i++)
							;

					for (j = 0; src[j] != '\0'; j++)
							{
										dest[i] = src[j];
												i++;
													}

						dest[i] = '\0';
							return (dest);
}
/**
 *_strcpy - this replicates the string pointed to by src.
 *@dest: char pointer rep the dest of the replicated str
 *@src: the char pointer the source of str
 *Return: return the dest.
 */

char *_strcpy(char *dest, char *src)
{

		size_t a;

			for (a = 0; src[a] != '\0'; a++)
					{
								dest[a] = src[a];
									}
				dest[a] = '\0';

					return (dest);
}
/**
 *_strcmp - two strings compator function
 *@s1: type string comparison
 *@s2: type string comparison
 *Return: Always return 0.
 */

int _strcmp(char *s1, char *s2)
{
		int i;

			for (i = 0; s1[i] == s2[i] && s1[i]; i++)
						;

				if (s1[i] > s2[i])
							return (1);
					if (s1[i] < s2[i])
								return (-1);
						return (0);
}
/**
 *_strchr - Finds a character within a string
 *@s: string.
 *@c: character.
 *Return: A pointer referencing first instance of the char c.
 */

char *_strchr(char *s, char c)
{
		unsigned int i = 0;

			for (; *(s + i) != '\0'; i++)
						if (*(s + i) == c)
										return (s + i);
				if (*(s + i) == c)
							return (s + i);
					return ('\0');
}
/**
 *  * _strspn - obtains length of a prefix substring.
 *   * @s: initial segment.
 *    * @accept: the accepted bytes.
 *     * Return: the no of accepted bytes.
 *      */
int _strspn(char *s, char *accept)
{
		int i, j, bool;

			for (i = 0; *(s + i) != '\0'; i++)
					{
								bool = 1;
										for (j = 0; *(accept + j) != '\0'; j++)
													{
																	if (*(s + i) == *(accept + j))
																					{
																										bool = 0;
																														break;
																																	}
																			}
												if (bool == 1)
																break;
													}
				return (i);
}
