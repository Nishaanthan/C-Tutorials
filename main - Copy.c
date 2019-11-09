#include <stdio.h>
int main()
{
char quote[] = "Cookies make you fat" ;
printf("quote occupies %i bytes\n", sizeof(quote));
fortune_cookie(quote);
return 0;
}
void fortune_cookie(char *msg)
{
printf("Message reads: %s\n", msg);
*msg = 'R';
printf("Message reads: %s\n", msg);
msg = "Cookies don't make you fat";
printf("Message reads: %s\n", msg);
printf("msg occupies %i bytes\n", sizeof(msg));
}
