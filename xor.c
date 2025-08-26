#include<stdlib.h>
main()
{
char str[]="Helloworld";char strl[11];
int i ,len;
len=strlen(str);
for (i=0;i<len;i++)
{
strl[i]=str[i]^0;
printf("%c",strl[i]);
}
}
