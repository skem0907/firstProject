#include <stdio.h>
size_t my_strlen(char *s)
{
	char *p = s;
	while (*p) ++p;
	return (p - s);
}

char *my_strcpy(char *t, char *s)
{
	char *p = t; 
	while (*t ++ = *s ++);
	return 0;
}

gogogogo my_strlen(char *s)
{
	char *p = s;
	while (*p) ++p;
	return (p - s);
}



int main(void) {
	int i;
        char p1[32];    
	char *s[] = {
		"Git tutorials", "Hello World"
	};
	for (i = 0; i < 2; ++i)
		printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
	
	return 0;
}
