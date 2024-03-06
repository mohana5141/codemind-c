#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int N;
    scanf("%d
",&N);
    char str[1001];
    for(int i=0;i<N;i++){
        scanf("%s",&str);
    int hasDigits=0;
    for(int j=0;str[j]!=NULL;j++){
        if(isdigit(str[j])){
            hasDigits=1;
            break;
        }
     } printf("%s
",hasDigits? "Yes":"No");
    }
}