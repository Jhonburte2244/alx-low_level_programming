#include "main.h"
/**
 * rev_string - this characters in reverse.
 * @s: this is a parameter to change.
 */
void rev_string(char *s)
{
	int start = 0, stop = 0;
	char t;

	while (s[stop] != 0)
		stop++;
	stop--;

	while (start < stop)
	{
		t = s[start];
		s[start] = s[stop];
		s[stop] = t;
		start++;
		stop--;
	}
}
