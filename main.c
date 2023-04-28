#include <stdio.h>
#include <string.h>
//Programmer: Zack Yourkavitch
//Class: ENGR 120
//Assignment: Final Exam Problem 1
#define MYSTRING "DBBDBBDCBDBBDBDBCEEECCCCCEACDDDE"     //This is MyString as given in the problem
struct letter{
    char letter;
    int occurrences;
};
int main() {
    printf("%s\n", MYSTRING);     //1. Display MyString
    for(int i = strlen(MYSTRING) - 1; i >= 0; i--)
        printf("%c", MYSTRING[i]);                  //2. Display MyString in reverse order
    printf("\n");
    struct letter occurrences[5];
    occurrences[0].letter = 'A';
    occurrences[1].letter = 'B';
    occurrences[2].letter = 'C';
    occurrences[3].letter = 'D';
    occurrences[4].letter = 'E';
    occurrences[0].occurrences = 0;
    occurrences[1].occurrences = 0;
    occurrences[2].occurrences = 0;
    occurrences[3].occurrences = 0;
    occurrences[4].occurrences = 0;
    for(int i = 0; i < strlen(MYSTRING); i++)
    {
        if(MYSTRING[i] == occurrences[0].letter)
            occurrences[0].occurrences++;
        else if(MYSTRING[i] == occurrences[1].letter)
            occurrences[1].occurrences++;
        else if(MYSTRING[i] == occurrences[2].letter)   //3. Count occurrences for each character
            occurrences[2].occurrences++;               //Note: I made a struct array because it was easier for the
        else if(MYSTRING[i] == occurrences[3].letter)   //next part
            occurrences[3].occurrences++;
        else if(MYSTRING[i] == occurrences[4].letter)
            occurrences[4].occurrences++;
    }
    printf("%-10s%-17s%s\n", "Letter", "Occurrence", "Histogram");
    for(int i = 0; i < 5; i++)
    {
        printf("%-15c%-12d", occurrences[i].letter, occurrences[i].occurrences);
        for(int a = 0; a < occurrences[i].occurrences; a++)             //4. Displaying what the problem asks me to
            printf("*");
        printf("\n");
    }
}
