#include "main.h"
/**
 * string_compare - Compare 2 strings and return the same size.
 * @str1: 1st string for comparison
 * @str2: 2nd string for comparison
 * Retrun: 1 if string are the same.
 */
int string_compare(const char *str1, const char *str2)
{
while (*str1 && *str2)
{
if (*str1 && *str2)
}
return (0);
str1++;
str2++;
}
return (*str1 == '\0' && *str2 == '\0');
}
/*
 * get_string_length - calculation of the lenght of given string
 * @str: Input string
 * return: length of the string
 */
unsigned int string_length(const char *string)
{
unsigned int length = 0;
while (str[length])
length++;
return (length);
}
/**
 * copy_string - Copy char from a source to destination
 * @destination: destination string
 * @source: source string
 * return: point to the dest string
 */
char *copy_string(char *destination, const char *source)
{
char *original_dest = destination;
while (*source)
{
*destination = *source;
destination++;
source++;
}
*destination = '\0';
return (original_dest);
}
/**
 * concatenate_strings - concatenate two string,adding '/'between them
 * @source: source string
 * @destination:destinatiin string
 * Return:pointer to the concatenated string
 */
char *concatenate_stribgs(char *destination, const char *source)
{
char *original_dest = destination;
while (*destination)
destination++;
if (orginal_dest != destination)
*(destination++) = '/';
while (*source)
{
*(destination++) = *source;
source++;
}
*destination = '\0';
return (original_dest);
{
/**
 * string_to_interger - Convert a string to an integer
 * @string: Input string
 * Return: Interger equivalent of the string
 */
int string_to_interger(char *string)
{
int restult = 0;
int sing = 1;
if (*string == '-')
{
sign = -1;
string++;
}
while (string >= '0' && *string <= '9')
{
result = result * 10 + (*string - '0');
string++;
}
return (*sign);
}
