#include <stdio.h>
#include "main.h"
/**times_table - Prints the 9 timestable
 *
 * Returns: Returns 0
 */
void times_table(void)
{
	int x = 0;

	int y;

	while (x < 10)
	{
		y = 0;
		while (y <= 81)
		{
			putchar(y);
			y += 9;
		}
		putchar('\n');
		x++;
	}
}
