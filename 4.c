#include <stdio.h>
int main(void)
{
int ivar = 1;
printf("Size of ivar = %d\n", sizeof(ivar++));
printf("Value of ivar = %d\n", ivar);
return 0;
}
