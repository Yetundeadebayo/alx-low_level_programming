#include "main.h"
#include<stdio.h>
/**
 * _puts - custom function to print a string
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	puts(str);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
