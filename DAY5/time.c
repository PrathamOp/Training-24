//check which time is early,equal or later

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
 
char* compare(char*,char*);
 
int main() {
    int n;
    printf("Enter number of pairs : \n");
    scanf("%d",&n);
    char str[n][100];
    char res[n][100];
    printf("Enter the time pairs: \n");
    for(int i=0;i<n;i++)
    {
        char temp[100],temp1[100],temp2[100],ans[100];
        scanf(" %[^\n]s",temp);
       
        strncpy(temp1,temp,8);
        strncpy(temp2,temp+9,8);
        strcpy(res[i],compare(temp1,temp2));
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",res[i]);
    }
    return 0;
}
 
char *compare(char *str1,char *str2){
    int i=0;
    while(i < 3){
        char *t1 = strtok(str1,"/");
        char *t2 = strtok(str2,"/");
        if(atoi(t1) < atoi(t2))
        {
            return "Time 1 is Earlier";
        }
        else if(atoi(t1) > atoi(t2))
        {
            return "Time 1 is Later";
        }
        t1 = strtok(NULL,"/");
        t2 = strtok(NULL,"/");
        i++;
    }
    return "Time is Equal";
}
