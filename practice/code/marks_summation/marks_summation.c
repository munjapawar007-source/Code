#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int marks_sumation(int* marks, int numbers_of_students, char gender);

int main(void)
{
    int number_of_students;
    char gender;
    int sum;

    printf("Enter number of student: ");
    scanf("%d", &number_of_students);
    int *marks = (int*)malloc(number_of_students * sizeof(int));

   
    for(int student = 1; student <= number_of_students; student++)
    {
        if(student % 2 == 0)
            printf("mark for girl student[%d]: ", student);
        else
            printf("mark for boy  student[%d]: ", student);

        scanf("%d",(marks + student));  // &marks[student];
    }

    getchar();  //reads one character from the input stream (keyboard).
    printf("Enter gender(b/g):");
    scanf("%c", &gender);   // if u dont use getchar() for clear buffer 
                            // then %c read whitespace and its read \n newline char
                            // or you can use 2 space befor %c
    sum = marks_sumation(marks, number_of_students,gender);
    printf("%d",sum);
    free(marks);

    return 0;
}

int marks_sumation(int* marks, int numbers_of_students, char gender)
{
    int sum = 0;

    if(gender == 'b')
    {
        printf("total sum of Boys: ");
        for(int boys = 0; boys <= numbers_of_students; boys += 2)
        {
            sum += marks[boys];
        }
    }

    if(gender == 'g')
    {
        printf("total sum of Girls: ");
        for(int girls = 1; girls <= numbers_of_students; girls += 2)
        {
            sum += marks[girls];
        }
    }

    return sum;
}
