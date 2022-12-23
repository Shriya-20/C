
#include<string.h>
int main()
{

    char str[100],strvowels[100];
    int i, j, len = 0,count=0,countvowels=0;


    printf("Enter a string : ");
     gets(str);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {   if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            strvowels[countvowels++]=str[i];
        }
        else
            str[count++]=str[i];
    }
    str[count++]='\0';
   printf("After deleting the SPACES, the string will be : %s", str);
   return 0;
}

