#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{    
    system("cls");
     char str1[100],str2[100],*p,rev[100],*ptr;
    int ch,i,j,count=0,vc=0;
    do
    {
        printf("\tMENU");
        printf("\n------------------------------\n");
        printf("1:Find Length of String");
        printf("\n2:Find Reverse of String");
        printf("\n3:Concatenate two string usig strcat funcation");
        printf("\n4:Concatenate string");
        printf("\n5:Compare Strings");
        printf("\n6:Convert upper case");
        printf("\n7:Covert lower case");
        printf("\n8:Calculate no. of vowels");
        printf("\n9:show address of each character");
        printf("\n10:Exit");
        printf("\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter String: ");
                scanf("%s",str1);
                p=str1;
                while(*p!='\0')
                 {
                    i++;
                    p++;
                 }
                printf("Length of String : %d\n\n",i);
            break;
            case 2:
                printf("Enter String: ");
                scanf("%s",str1);
                while(str1[count]!='\0')
                 {
                    count++;
                 }
                 j=count-1;
                  for(i=0;i<count;i++)
                   {
                       rev[i]=str1[j];
                       j--;
                   }
                printf("Reverse string : %s\n\n",rev);
            break;
            
            case 3:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("Enter Second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("String After Concatenation : %s\n\n",str1);
            break;
            
            case 4:
                printf("Enter a String1: ");
                scanf("%s",str1);
                printf("Enter a String2: ");
                scanf("%s",str2);
                for(i=0;str1[i]!='\0';i++);

                  str1[i]=' ';
                  i++;
                 for(j=0;str2[j]!='\0';j++,i++)
                  {
                    str1[i]=str2[j];
                  }
                 str1[i]='\0';
                printf("String After Concatenation : %s\n\n",str1);
            break;
            
            case 5:
                printf("Enter First String: ");
                scanf("%s",str1);
                printf("Enter Second String: ");
                scanf("%s",str2);
                j=strcmp(str1,str2);
                if(j==0)
                {
                    printf("Strings are Same\n\n");
                }
                else
                {
                    printf("Strings are Not Same\n\n");
                }
            break;
            
             case 6:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                for(i=0;str1[i];i++)
                 {
                    if(str1[i]>='a'&&str1[i]<='z')
                    str1[i]-=32;
                 }
                printf("Upper case is : %s\n\n",str1);
    
                break;        
             case 7:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                for(i=0;str1[i];i++)
                 {
                    if(str1[i]>='A'&&str1[i]<='Z')
                    str1[i]+=32;
                 }
                printf("String After Concatenation : %s\n\n",str1);
            break;
            
             case 8:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                for(i=0;str1[i];i++)
                 {
                    if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
                     {
                        vc++;
                     }
                 }
                printf("No of vowels are present : %d\n\n",vc);
            break;
            
            case 9:
                printf("\nEnter the String: ");
                scanf("%s",str1);
                ptr=str1;
                for(i=0;ptr[i]!='\0';i++)
                printf("show address of each character : %p\n\n",(ptr+i));
            break;
            
            case 10:
                exit(0);
            break;
            default:
                printf("Invalid Input. Please Enter valid Input.\n\n ");
        }
    }
    
    while(ch!=6);
    return 0;
}