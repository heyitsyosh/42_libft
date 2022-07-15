# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	
	char * s = ft_strtrim("   xxxtripouille", " x");
	printf("%s", s);
	return 0;
}