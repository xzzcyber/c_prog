#include<stdio.h>
int main(){
    int form, to, n=6;

    printf("Please 1st Number \n");
    scanf("%d", &form);
    printf("Please 2nd Number \n");
    scanf("%d", &to);

    printf("6 Will Be Skiped \n");
    while (form <= to)
    {
        if(form != n){
            continue;
        }
        printf("%d \n", form);
        form++;
    }
    return 0;
}
