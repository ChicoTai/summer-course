#include <iostream>
using namespace std;

int main() {
    string name[11];
    char x;
    int  b,c;
    double average;
    printf("Please input your name: ");
    scanf("%s", &name);

    getchar();

    printf("Please select your department(a:CS b:Bio c:Math): ");
    scanf("%c", &x);

    printf("Please input your score on test 1: ");
    scanf("%d", &b);

    printf("Please input your score on test 2: ");
    scanf("%d", &c);

    average= b*0.5+c*0.5;

    printf("+---------------------+----------+------+------+-------+\n");
    printf("|        Name         |Department|Test 1|Test 2|Average|\n");
    printf("+---------------------+----------+------+------+-------+\n");
    printf("|%s                   |%c        |%d    |%d    |%f     |\n", name,x,b,c,average);
    printf("+---------------------+----------+------+------+-------+\n");

    return 0;
    }