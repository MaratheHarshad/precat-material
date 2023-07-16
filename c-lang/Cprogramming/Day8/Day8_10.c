#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("Day8_1.c","r");
    if(fp!=NULL)
    {
        printf("Current file position %ld\n",ftell(fp));
        fseek(fp,10,SEEK_SET); //reposition file pointer 10 offset ahead from beginning of file
        ch = fgetc(fp);
        printf("Current file position %ld ch=%c\n",ftell(fp),ch);

        fseek(fp,-5,SEEK_CUR); //reposition file pointer 5 offset back from current position of file
        ch = fgetc(fp);
        printf("Current file position %ld ch=%c\n",ftell(fp),ch);
        
        fseek(fp,-5,SEEK_END); //reposition file pointer 5 offset back from end of file
        ch = fgetc(fp);
        printf("Current file position %ld ch=%c\n",ftell(fp),ch);
        
        fclose(fp);
    }
}