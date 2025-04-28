//Scan and print marks and average of 5 students
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int id1 = 1, id2 = 2, id3 = 3, id4 = 4, id5 = 5;
    int ma1, ma2, ma3, ma4, avg1;
    int mb1, mb2, mb3, mb4, avg2;
    int mc1, mc2, mc3, mc4, avg3;
    int md1, md2, md3, md4, avg4;
    int me1, me2, me3, me4, avg5;
    char name1[50], name2[50], name3[50], name4[50], name5[50];

    // Student 1
    printf("Enter the details of student 1\n");
    printf("Enter your name: ");
    scanf("%s", name1);
    printf("Enter marks for 4 subjects: ");
    scanf("%d %d %d %d", &ma1, &ma2, &ma3, &ma4);
    avg1 = (ma1 + ma2 + ma3 + ma4) / 4;

    // Student 2
    printf("Enter the details of student 2\n");
    printf("Enter your name: ");
    scanf("%s", name2);
    printf("Enter marks for 4 subjects: ");
    scanf("%d %d %d %d", &mb1, &mb2, &mb3, &mb4);
    avg2 = (mb1 + mb2 + mb3 + mb4) / 4;

    // Student 3
    printf("Enter the details of student 3\n");
    printf("Enter your name: ");
    scanf("%s", name3);
    printf("Enter marks for 4 subjects: ");
    scanf("%d %d %d %d", &mc1, &mc2, &mc3, &mc4);
    avg3 = (mc1 + mc2 + mc3 + mc4) / 4;

    // Student 4
    printf("Enter the details of student 4\n");
    printf("Enter your name: ");
    scanf("%s", name4);
    printf("Enter marks for 4 subjects: ");
    scanf("%d %d %d %d", &md1, &md2, &md3, &md4);
    avg4 = (md1 + md2 + md3 + md4) / 4;

    // Student 5
    printf("Enter the details of student 5\n");
    printf("Enter your name: ");
    scanf("%s", name5);
    printf("Enter marks for 4 subjects: ");
    scanf("%d %d %d %d", &me1, &me2, &me3, &me4);
    avg5 = (me1 + me2 + me3 + me4) / 4;

    // Display table
    printf("\n==========================================================\n");
    printf("Sl.No | ID  | Name     | M1  | M2  | M3  | M4  | AVG  |\n");
    printf("==========================================================\n");
    printf("  1   | %3d | %-8s | %3d | %3d | %3d | %3d | %3d  |\n", id1, name1, ma1, ma2, ma3, ma4, avg1);
    printf("  2   | %3d | %-8s | %3d | %3d | %3d | %3d | %3d  |\n", id2, name2, mb1, mb2, mb3, mb4, avg2);
    printf("  3   | %3d | %-8s | %3d | %3d | %3d | %3d | %3d  |\n", id3, name3, mc1, mc2, mc3, mc4, avg3);
    printf("  4   | %3d | %-8s | %3d | %3d | %3d | %3d | %3d  |\n", id4, name4, md1, md2, md3, md4, avg4);
    printf("  5   | %3d | %-8s | %3d | %3d | %3d | %3d | %3d  |\n", id5, name5, me1, me2, me3, me4, avg5);
    printf("==========================================================\n");

    return 0;
}
