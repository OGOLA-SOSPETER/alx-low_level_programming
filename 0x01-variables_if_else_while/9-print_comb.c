nclude<stdio.h>
/**
 *    * Return: Always 0 (Success/correct)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 5)
{																	putchar(',');																putchar(' ');
}
}
putchar('\n');
return (0);
}
