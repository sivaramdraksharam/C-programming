#include<stdio.h>
#include<conio.h>
main()
{
char str[20]={"Happy Learning"};
char *ptr;
clrscr();
ptr=str;
printf("\nStr : %s",str);
printf("\nPtr : %s",ptr);
printf("\nStr[3] : %c",str[3]);
printf("\n*(Ptr+3) : %c",*(ptr+3));
printf("\n&Str[6] : %s",&str[5]);
printf("\nPtr+6 : %s",ptr+5);
*(ptr+4)='i';
printf("\nPtr : %s",ptr);
ptr++; /* Since its a dynamic memory, it works */
printf("\nPtr : %s",ptr);
/* str++; It is an error bcoz its a static memory */
printf("\nStr : %s",str);
getch();
}



