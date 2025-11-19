#include <stdio.h>
#include <string.h>


int main() {
    char students[4][20] =
	{
        "Alice", "Bob", "Charlie", "Diana"
    };
    char courses[4][5][20] = 
	{
        {"Math", "Physics", "Biology"},
        {"Chemistry", "Math"},
        {"Physics", "English", "Math", "Art"},
        {"Biology", "Physics", "Chemistry"}
    };
       int courseCount[4] = {
        3, 2, 4, 3
    };

    int i,j;
    printf("=== Student Course Registrations ===\n\n");
    for (i = 0;i<4; i++) {
        printf("%s is registered for: ", students[i]);
        for (j = 0; j < courseCount[i]; j++) {
            printf("%s  ", courses[i][j]);
        }
        printf("\n");
    }
    char searchCourse[20];
    printf("\nEnter a course name to search who is taking it: ");
    scanf("%s", searchCourse);

    printf("\nStudents taking %s:\n", searchCourse);
    int found = 0;
    for (i = 0; i <4; i++) {
        for (j = 0; j < courseCount[i]; j++) {
            if (strcmp(courses[i][j], searchCourse) == 0) {
                printf("- %s\n", students[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("No student is taking %s.\n", searchCourse);
    }
      printf("\n=== Overloaded Students (More than 3 courses) ===\n");
    int overloaded = 0;

    for (i = 0; i < 4; i++) {
        if (courseCount[i] > 3) {
            printf("- %s (%d courses)\n", students[i], courseCount[i]);
            overloaded = 1;
        }
    }

    if (!overloaded) {
        printf("No overloaded students.\n");
    }

    return 0;
}
