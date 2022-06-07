#include <stdio.h>
#include "main.h"
/**times_table - Prints the 9 timestable
 *
 * Returns: Returns 0
 */
void times_table(void)
{
	int x = 1;

	int y;

	int res;

	while (x < 10)
	{
		y = 1;
		while (y <= 10)
		{
			res = y * x;
			printf("%d", res);
			y++;
		}
		putchar('\n');
		x++;
	}
}
