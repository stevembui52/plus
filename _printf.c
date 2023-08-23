#include "shell.h"
/**
 * _printf - prints a formatted sting and returns number of characters printed
 * @format:the format string.
 * Return:number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count;
	va_list ap;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			count += printchr('%');
			else if (*format == 'c')
			{
				count += printchr(va_arg(ap, int));
			}
			else if (*format == 's')
			{
				count += printstr(va_arg(ap, char*));
			} 
		}
		format++;
	}
	va_end(ap);
	return (count);
}
