main()
{
char str[50];
int i,chrc,ltrc,spc,wrdc,vowc,conc,uprc,lwrc,digc,splc;
clrscr();
chrc=ltrc=spc=wrdc=vowc=conc=uprc=lwrc=digc=splc=0;
puts("Enter String : ");
gets(str);

for(i=0;str[i]!='\0';i++)
{
	chrc++;
	if(str[i]==' ')
	{
		spc++;
	}

	if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
	{
		vowc++;
	}
	else
	{
		conc++;
	}

	if(str[i]>='A' && str[i]<='Z')
	{
		uprc++;
	}
	else if(str[i]>='a' && str[i]<='z')
	{
		lwrc++;
	}
	else if(str[i]>='0' && str[i]<='9')
	{
		digc++;
	}
	else
	{
		splc++;
	}

}

wrdc=spc+1;
splc=splc-spc;
conc=conc-(spc+splc+digc);
ltrc=chrc-(spc+splc+digc);

clrscr();
printf("\nGiven String : %s",str);
printf("\n\nNumber of Characters  : %d",chrc);
printf("\n\nNumber of Letters     : %d",ltrc);
printf("\n\nNumber of Words       : %d",wrdc);
printf("\n\nNumber of Spaces      : %d",spc);
printf("\n\nNumber of Vowels      : %d",vowc);
printf("\n\nNumber of Consonants  : %d",conc);
printf("\n\nNumber of UpperCase   : %d",uprc);
printf("\n\nNumber of LowerCase   : %d",lwrc);
printf("\n\nNumber of Digits      : %d",digc);
printf("\n\nNumber of SpcialChars : %d",splc);

getch();
}

