//coding with Debashish
#include<stdio.h>
#include<stdlib.h>
int main()
{  
    system("cls");
  FILE*fp1,fp2;
  char c;
  fp1=fopen("abc.txt","r");
  {
      if(fp1==NULL);
      {
          printf("file not exit");
          exit(0);
      }
      c=fgetc(fp1);
      while (c!=EOF)
      {
          fputc(c,fp1);
          c=fgetc(fp1);
      }
      fclose(fp1);
      //fclose(fp2);
  }
  return 0;
}