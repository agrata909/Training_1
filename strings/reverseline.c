//3. WAP to reverse the given line

#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char line[max];
    char *words[max];
    int word_count=0;
    char *token;
    
    printf("Enter a line\n");
    fgets(line,sizeof(line),stdin);
    
    int len=strlen(line);
    if(line[len-1]=='\n')
        line[len-1]='\0';
        
    token=strtok(line," ");
    printf("\n");
    while(token!=NULL)
    {
        words[word_count++]=token;
        token=strtok(NULL," ");
    }
    printf("Reversed line is :\n");
    for(int i=word_count-1;i>=0;i--)
    {
        printf("%s ",words[i]);
       
    }
    printf("\n");
    return 0;
}
