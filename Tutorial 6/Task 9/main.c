#include <stdio.h>

int main() {
    int students[][5] = {
            //ID, Mark 1, Mark 2, Mark 3, Average
            {1,  75, 87, 65, 0},
            {2,  57, 90, 42, 0},
            {3,  36, 45, 83, 0},
            {4,  26, 86, 87, 0},
            {5,  97, 74, 16, 0},
            {6,  64, 26, 21, 0},
            {7,  87, 89, 62, 0},
            {8,  57, 62, 25, 0},
            {9,  41, 26, 83, 0},
            {10, 07, 99, 63, 0}
    };

    //Calculate Average
    for (int i = 0; i <= 9; i++) {
        //a[i][4] = (a[i][1] + a[i][2] + a[i][3]) / 3;
        int number = (students[i][1] + students[i][2] + students[i][3]) / 3;
        printf("%d\n", number);
        students[i][4] = number;
    }

    int true = 1;

    size_t n;

    while (true) {
        printf("\n=================================================");
        printf("\nWhat Would You Like To Do?");
        printf("\n=================================================");
        printf("\n[1] Enter an ID number and see the results for that student");
        printf("\n[2] Look at the entire set of IDs and scores");
        printf("\n[3] Ask for the highest mark");
        printf("\n[4] Ask for the lowest mark");
        printf("\n[5] Ask for the highest average");
        printf("\n[6] Ask for the lowest average");
        printf("\n=================================================");
        printf("\n[7] Add new record to the system");
        printf("\n=================================================\n");

        int response;
        scanf("%d", &response);

        n = sizeof(students) / sizeof(int);
        int noOfStudents = (n / 5);
        printf("NUMOFSTUDENTS: %d\n", noOfStudents);

        switch (response) {
            case 1 :
                printf("=================================================\n");
                printf("What ID would you like to look up?\n");
                printf("=================================================\n");
                int answer;
                scanf("%d", &answer);

                for (int i = 0; i <= noOfStudents; i++) {
                    if (students[i][0] == answer) { //Comparing the first element in the array to answer so you can change the ID in the array and it will still work
                        printf("The average score for student %d is %d", students[i][0], students[i][4]);
                    }
                }
                break;

            case 2 :
                printf("=================================================\n");
                printf("Score Table\n");
                printf("=================================================\n\n");
                printf("StudentID, Mark1, Mark2, Mark3, Average\n");
                for (int i = 0; i <= noOfStudents; i++) { //Loops through each student
                    for (int x = 0; x <= 4; x++) { //Loops through each part of the student record
                        printf("%d ", students[i][x]);
                    }
                    printf("\n");
                }
                break;

            case 3 :
                int highest = 0;
                int highestId;

                printf("=================================================\n");
                printf("Highest Mark\n");
                printf("=================================================\n");

                for (int i = 0; i <= noOfStudents; i++) { //Loops through each student
                    for (int x = 1; x <= 3; x++) { //Loops through each mark of the record
                        if (students[i][x] > highest) {
                            highest = students[i][x];
                            highestId = students[i][0];
                        }
                    }
                }

                printf("The highest score is %d and was by student ID %d", highest, highestId);
                break;

            case 4 :
                int lowest = 100;
                int lowestID;

                printf("=================================================\n");
                printf("Lowest Mark\n");
                printf("=================================================\n");

                for (int i = 0; i <= noOfStudents; i++) { //Loops through each student
                    for (int x = 1; x <= 3; x++) { //Loops through each mark of the record
                        if (students[i][x] < lowest) {
                            lowest = students[i][x];
                            lowestID = students[i][0];
                        }
                    }
                }

                printf("The lowest score is %d and was by student ID %d", lowest, lowestID);
                break;

            case 5 :
                int highestAvg = 0;
                int highestAvgId;

                printf("=================================================\n");
                printf("Highest Average Mark\n");
                printf("=================================================\n");
                for (int i = 0; i <= noOfStudents; i++) { //Loops through each student
                    if (students[i][4] > highestAvg) {
                        highestAvg = students[i][4];
                        highestId = students[i][0];
                    }
                }

                printf("The Highest Average score is %d and was by student ID %d", highestAvg, highestId);
                break;

            case 6 :
                int lowestAvg = 100;
                int lowestAvgId;

                printf("=================================================\n");
                printf("Lowest Average Mark\n");
                printf("=================================================\n");
                for (int i = 0; i <= noOfStudents; i++) { //Loops through each student
                    if (students[i][4] < lowestAvg) {
                        lowestAvg = students[i][4];
                        lowestAvgId = students[i][0];
                    }
                }

                printf("The Lowest Average score is %d and was by student ID %d", lowestAvg, lowestAvgId);
                break;

            case 7 :
                int studentId; //I know i can make these all on one line but this looks nicer.
                int studentM1;
                int studentM2;
                int studentM3;
                int studentAvg;

                printf("=================================================\n");
                printf("Add new Record / Student\n");
                printf("=================================================\n");
                printf("Student ID Number: ");
                scanf("%d", &studentId);

                printf("Student Mark 1: ");
                scanf("%d", &studentM1);

                printf("Student Mark 2: ");
                scanf("%d", &studentM2);

                printf("Student Mark 3: ");
                scanf("%d", &studentM3);

                studentAvg = (studentM1 + studentM2 + studentM3) / 3;

                printf("\nID: %d", studentId);
                printf("\nM1: %d", studentM1);
                printf("\nM2: %d", studentM2);
                printf("\nM3: %d", studentM3);
                printf("\nAvg: %d", studentAvg);

                //size_t n = sizeof(students) / sizeof(int);
                //int noOfStudents = n / 5;
                //printf("Number of Students: %d", noOfStudents);

                students[noOfStudents][0] = studentId;
                students[noOfStudents][1] = studentM1;
                students[noOfStudents][2] = studentM2;
                students[noOfStudents][3] = studentM3;
                students[noOfStudents][4] = studentAvg;

                break;
        }
    }
}