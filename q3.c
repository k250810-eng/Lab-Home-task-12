#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    float marks;
} Student;

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *s = (Student*)malloc(n * sizeof(Student));

    if (!s) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudents scoring more than 75 marks:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks > 75)
            printf("%s - %.2f\n", s[i].name, s[i].marks);
    }

    free(s);
    return 0;
}
