/*
                                    Program: 13
    Write a program to read three integer values from the keyboard and display the output stating that they are 
    the sides of right-angled triangle.
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);

    if ((a > b && a > c && a * a == b * b + c * c) || 
        (b > a && b > c && b * b == a * a + c * c) || 
        (c > a && c > b && c * c == a * a + b * b)) {
        printf("The sides %d, %d, and %d form a right-angled triangle.\n", a, b, c);
    } else {
        printf("The sides %d, %d, and %d do not form a right-angled triangle.\n", a, b, c);
    }

    return 0;
}


/*
    Output:
    Enter the sides of the triangle:
    Side 1: 5
    Side 2: 12
    Side 3: 13
    The sides 5, 12, and 13 form a right-angled triangle.
*/