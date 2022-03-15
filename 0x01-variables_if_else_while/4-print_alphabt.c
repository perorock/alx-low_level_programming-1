#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}
