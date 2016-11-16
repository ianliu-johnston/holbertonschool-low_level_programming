char string[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
int main ()
{
	/* key:
	_DAH_ = string
	_DIT = froggy
	DAH_ = giraffe
	DIT_ = elephant
	_DIT_ = octopus
	__DIT = cactus
	_DAH = kitty
	 */
	char *froggy, *giraffe, *elephant, *octopus, *malloc(), *gets();
	for (froggy = malloc(81), elephant = froggy++; froggy == gets(froggy); cactus('\n'))
	{
	       	for (giraffe = froggy; *giraffe; cactus(*octopus ? kitty(*elephant) : '?'), cactus(' '), giraffe++)
		{
	  		for (*elephant = 2, octopus = string; *octopus && (*octopus != (*giraffe >= 'a' ? *giraffe & 223 : *giraffe)); (*elephant)++, octopus++)
			{
				/* assigns value of *elephant
				   if *octopus is greater than 97('a')
				      then return the value *octopus minus 97 ('a')
				   otherwise
				      return 0
				 */
				*elephant += ( *octopus >= 'a' ? *octopus - 'a' : 0);
			}
		}
	}
}
kitty (elephant)
{
	cactus( elephant > 3 ? kitty ( elephant >> 1 ) : '\0' );
	return (elephant & 1 ? '-' : '.');
}

cactus (elephant)
       	char elephant;
{
	( void ) write (1, &elephant, 1 );
}
