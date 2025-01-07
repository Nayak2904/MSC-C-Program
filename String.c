#include <stdio.h>
#include <string.h>

void demonstrateSringFunction(){
    char str1[100], str2[100], str3[100];

    printf("Enter first srting: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1] = '\0';
    
    
    printf("Enter second srting: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1] = '\0';

    printf("Length of %s %s: %lu\n", str1, str2, strlen(str1),strlen(str2));
     
     printf("Reverse String is: %s\n",strrev(str1));    
     printf("Reverse String is: %s\n", strrev(str2));    


     printf("Reverse String is: %s\n",strrev(str1));    
     printf("Reverse String is: %s\n", strrev(str2));    

    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);
    strcat(str1, str2);
    printf("Concatenated sting: %s\n",str1);
    int i = 0;   
    int count = 0;  
    while(i<11)  
    {  
        if(str1[i]=='a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'u' || str1[i] == 'o')  
        {  
            count ++;  
        }  
        i++;  
    }  
     printf("The number of vowels: %d\n",count); 

       printf("Upper String is: %s\n",strupr(str1));    
       printf("Lower String is: %s\n",strlwr(str1));    


    printf("Comparison result: %d\n", strcmp(str1, str2));

}

int main()
{
    demonstrateSringFunction();
    
    return 0;
}