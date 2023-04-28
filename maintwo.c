#include <stdio.h>
//Programmer: Zack Yourkavitch
//Class: ENGR 120
//Assignment: Final Exam Problem 2
//Function to read the parameter to see if it is the sentinel value or not
int readParam();
int readParam()
{
    int result;
    printf("Please input an integer 0 through 9 or -1 to quit: ");
    scanf("%d", &result);
    return result;
}
//Function to do the factorial calculation
void fact_calc(int num);
void fact_calc(int num)
{

    int product = 1;
    printf("******************");
    for(int i = num; i > 1; i--) {
        printf("****");
    }
    printf("\n");
    printf("* %d! = ", num);
    for(int i = num; i > 1; i--)
    {
        product *= i;
        printf("%d * ", i);
    }
    printf("1 = %d *\n", product);
    printf("******************");
    for(int i = num; i > 1; i--) {
        printf("****");
    }
    printf("\n");
}
//Main function
int main()
{
    int param;
    while((param = readParam()) != -1)
    {
        if(param >= 0 && param <= 9)
        {
            fact_calc(param);
        }
        else
        {
            printf("Invalid entry\n");
        }
    }
    return(0);
}