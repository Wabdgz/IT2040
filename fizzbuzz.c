//Walter Beardman
//Wabdgz
//INFOTEC 2040
//FizzBuzz
#include<stdio.h>

int main(void)
{
    int i;

    for(i=0;i<=100;i++)
    {
        if((i%15)==0)
        printf("FizzBuzz\t");

        else if((i%3)==0)
        printf("Fizz\t");

        else if((i%5)==0)
        printf("Buzz\t");
    

        else
        printf("%d\t" , i);

    }

printf("\n");

return 0;
}
