
//program to write addition table

#include<stdio.h
int main()
{
    int a,i=0;
    printf("Enter the number\n");
    scanf("%d",&a);

    printf("\nAddition table of\n",a);
    while(i<=10)
    {
        printf("%d + %d = %d\n",a,i,(a+i));
        i++;
    }
return 0;
}
