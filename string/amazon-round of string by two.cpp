#include<stdio.h> 
#include<string.h>
int main() 
{ 

    int i,l,j,x;
    char str1[10],str2[10],temp1[10],temp2[3];
    scanf("%s",str1);
    scanf("%s",str2);
    l=strlen(str2);
    for(i=0;i<l-2;i++)
    {
        temp1[i]=str2[i];	
	}
	temp1[i]='\0';
	temp2[0]=str2[l-2];
	temp2[1]=str2[l-1];
    temp2[2]='\0';
	puts(temp1);
    puts(temp2);
    strcat(temp2,temp1);
    printf("%s\n",temp2);
    
    if(strcmp(str1,temp2)==0)
     printf("1");
    else
     printf("0");
	
    
    return 0; 
} 

