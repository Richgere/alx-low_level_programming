 #include "main.h" 
 /** 
  * _puts - prints a string followed by a new line 
  * @str: input 
  */ 
void _puts(char *str)
{
	while (*str)
		_puts(*str++);

	_puts('\n');
}
