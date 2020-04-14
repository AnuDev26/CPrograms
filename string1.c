//string:sequence of characters and ending at null character is known as string.
//gets and puts
main()
{
char s[10],name[10];
int i;
printf("Enter the name:");
gets(s);
puts(s);
i=strlen(s); //strlen(takes input as a string)
printf("%d",i);
strcpy(name,s); //strcpy(destination,source)
puts(name);
strupr(name); //it represents the string in uppercase and takes the string as input
puts(name);
strlwr(name); //it represents the string in lowerrcase and takes the string as input
puts(name);

}

//scanf("%[^\n]s",s);  
