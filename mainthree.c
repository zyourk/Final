#include <stdio.h>
#include <string.h>
#include <math.h>
//Programmer: Zack Yourkavitch
//Class: ENGR 120
//Assignment: Final Exam Problem 3
struct student{
    char name[20];
    int id;
    float marks;
}s[10];
void initializearray();
void initializearray()
{
    strcpy(s[0].name, "Tom");
    s[0].id = 120;
    s[0].marks = 86;
    strcpy(s[1].name, "Jake");
    s[1].id = 121;
    s[1].marks = 91;
    strcpy(s[2].name, "Jon");
    s[2].id = 122;
    s[2].marks = 31;
    strcpy(s[3].name, "Jonna");
    s[3].id = 123;
    s[3].marks = 86;
    strcpy(s[4].name, "Lyn");
    s[4].id = 124;
    s[4].marks = 99;
    strcpy(s[5].name, "Nike");
    s[5].id = 125;
    s[5].marks = 55;
    strcpy(s[6].name, "Adida");
    s[6].id = 126;
    s[6].marks = 65;
    strcpy(s[7].name, "Mary");
    s[7].id = 127;
    s[7].marks = 83;
    strcpy(s[8].name, "Sue");
    s[8].id = 128;
    s[8].marks = 100;
    strcpy(s[9].name, "Jess");
    s[9].id = 129;
    s[9].marks = 99;
}
double avg(struct student input[]);
double avg(struct student input[])
{
    double sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += input[i].marks;
    }
    return(sum/10.0);
}
double standard_dev(struct student input[], double average);
double standard_dev(struct student input[], double average)
{
    double numerator = 0;
    for(int i = 0; i < 10; i++)
    {
        numerator += (pow((input[i].marks - average) ,2));
    }
    double dev = sqrt((numerator/9.0));
    return(dev);
}
int main() {
    initializearray();
    printf("Average Grade: %.2f\n", avg(s));    //Code to calc and display average (part 1)
    printf("Standard Deviation: %.2f\n", standard_dev(s, avg(s))); //Code to calc and display standard dev (part 2)
    //Sorting the array of students from highest to lowest grade
    struct student swap;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10 - i; j++)
        {
            if(s[j].marks < s[j + 1].marks)
            {
                swap = s[j];
                s[j] = s[j + 1];
                s[j + 1] = swap;
            }
        }
    printf("Students ranked by grade: \n");
    for(int index = 0; index < 10; index++)
        printf("%s:%.2f| ", s[index].name, s[index].marks); //Printing the ranked students (part 3)
    printf("\nStudents who have grades under 70: \n");
    for(int i = 0; i < 10; i++)
    {                                   //Finding and printing students with grades under 70 (part 4)
        if(s[i].marks < 70)
            printf("%s:%.2f| ", s[i].name, s[i].marks);
    }
}
