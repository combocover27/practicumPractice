#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char name[50];
    int roll;
    float marks;
} student;

void inputStudent(student*s){
    printf("Input student name: ");
    scanf("%s", s->name);
    printf("\n");

    printf("Input student roll: ");
    scanf("%d", &s->roll);
    printf("\n");

    printf("Input marks: ");
    scanf("%f", &s->marks);
}

void displayStudent(student *s){
    printf("Student name: %s\nStudent roll: %d\nStudent marks: %f\n", s->name, s->roll, s->marks);
}

int main(){
    int studentNum;
    //student *stud = (student *)malloc(sizeof(student));
    printf("How many students to input (<5): ");
    scanf("%d", &studentNum);

    student students[5];
    for (int i =0; i < studentNum; i++){
        inputStudent(&students[i]);
    }

    for (int g=0; g < studentNum; g++){
        printf("Student %d: Name = %s, Roll = %d, Marks = %f\n", g+1, students[g].name, students[g].roll, students[g].marks);
    }
}