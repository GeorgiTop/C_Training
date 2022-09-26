#include <stdio.h>

int main(void)
{  
	char c1 = '\'';  /* символ  '   */
	char c2 = '\"';  /* символ  "   */
	char c3 = '"';   /* символ  "   */
	char c4 = '\\';  /* символ  \   */

	printf("%c %c %c %c\n ", c1,c2,c3,c4);

	return 0;
}
