#include<stdio.h>
int main() {
    // label:
    // printf("hyy ananya\n");
    // goto end;
    // printf("hyy minal");
    // goto label;
    // end:
    // printf("hyy priya");

    int num;
    for (int i = 0; i < 8; i++) 
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++) 
        {
            printf("enter the number. enter 0 to exist\n");
            scanf("%d", &num);
            if (num==0) 
            {
                goto end;
            }
        }
    }
end:
return 0;
}