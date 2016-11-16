#include <stdlib.h>
char string[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
int main (void)
{
	/* key:
	_DAH_ = string
	_DIT = buffer
	DAH_ = giraffe
	DIT_ = lastPointerToBuffer
	_DIT_ = octopus
	__DIT = cactus
	_DAH = morseConvert
	 */
	char *buffer, *giraffe, *lastPointerToBuffer, *octopus;
	for (buffer = malloc(81), lastPointerToBuffer = buffer++; buffer == gets(buffer); _putchar('\n'))
	{
	       	for (giraffe = buffer; *giraffe; _putchar(*octopus ? morseConvert(*lastPointerToBuffer) : '?'), _putchar(' '), giraffe++)
		{
	  		for (*lastPointerToBuffer = 2, octopus = string; *octopus && (*octopus != (*giraffe >= 'a' ? *giraffe & 223 : *giraffe)); (*lastPointerToBuffer)++, octopus++)
			{
				/* assigns value of *lastPointerToBuffer
				   if *octopus is greater than 97('a')
				      then return the value *octopus minus 97 ('a')
				   otherwise
				      return 0
				 */
				*lastPointerToBuffer += ( *octopus >= 'a' ? *octopus - 'a' : 0);
			}
		}
	}
}
char morseConvert(lastPointerToBuffer)
{
	_putchar( lastPointerToBuffer > 3 ? morseConvert( lastPointerToBuffer >> 1 ) : '\0' );
	return (lastPointerToBuffer & 1 ? '-' : '.');
}

void _putchar (char lastPointerToBuffer)
{
	(void) write(1, &lastPointerToBuffer, 1);
}
