#include <stdio.h>
#include <malloc.h>

int my_strlen(char *s)
{
	int charCount = 0;
	while (*(s+charCount) != '\0')
		{
			charCount++;
		}
		return charCount;
}

int str2upper(char *s)
{
	int charCount = 0;
	while(*s != '\0')
    {
        if (*s >='a' && *s <= 'z')
		{
			*s = *s - 32;
			charCount++;
		}
		s++;
    }
	return charCount;
}

int str2lower(char *s)
{
	int charCount = 0;
	while(*s != '\0')
    {
        if (*s >='A' && *s <= 'Z')
		{
			*s = *s + 32;
			charCount++;
		}
		s++;
    }
	return charCount;
}

int str_strip_numbers(char *s)
{

	int i, j = 0;

	for (i = 0;  s[i]!='\0'; i++)
    {
        if (!((s[i] >= '0') && (s[i] <= '9')))
		{
			s[j] = s[i];
			j++;

		}
    }
	s[j] = '\0';
	return j;
}


void mystrcpy(char *s,char *d)
{
	while (*d)
	{
		*s = *d;
		s++;
		d++;
	}
	*s = '\0';
}

int mystrcmp (char *s, char *d)
{
	while (*s == *d++)
		if (*s++ == '\0')
			return 0;
	return (*s - *(d - 1));
}

char * strdupl(char *s)
{
	char *a = (char*)malloc(my_strlen(s)+1);
	mystrcpy(a,s);
	return a;
}
