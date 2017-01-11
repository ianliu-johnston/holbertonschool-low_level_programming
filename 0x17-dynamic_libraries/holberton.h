#ifndef HEADER_H
#define HEADER_H

int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _atoi(char *s);
int mul(int argc, char *argv[]);
int _isdigit(int c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int *array_range(int min, int max);
int _islower(int c);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
void _puts(char *s);
#endif
