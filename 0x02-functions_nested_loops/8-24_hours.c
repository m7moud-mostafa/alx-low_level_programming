#include "main.h"

/**
 * jack_bauer - prints every minut in the day
 */

void jack_bauer(void)
{
	int hten;
	int hdigit;
	int mten;
	int mdigit;

	for (hten = 0; hten <= 2 ; hten++)
	{
		for (hdigit = 0; hdigit <= 9; hdigit++)
		{
			if (!(hten == 2 && hdigit == 4))
			{
				for (mten = 0; mten <= 5; mten++)
				{
					for (mdigit = 0; mdigit <= 9; mdigit++)
					{
						_putchar('0' + hten);
						_putchar('0' + hdigit);
						_putchar(':');
						_putchar('0' + mten);
						_putchar('0' + mdigit);
						_putchar('\n');

					}
				}
			}
			else
			{
				break;
			}
		}
	}
}
