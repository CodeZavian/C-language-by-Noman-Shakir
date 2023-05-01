#include<stdio.h>
#include<string.h>

/* make a system that you can store the info of all the students, teachers and staff of your college
in the form of structure */

struct teacher {
    int scale;
    int salary;
    char name[150];
};

struct student {
    int roll;
    char name[200];
    char department[200];
};

struct staff {
    int scale;
    int salary;
    char name[100];
};

void display_teacher(struct teacher t);
void display_student(struct student s);
void display_staff(struct staff st);

int main() {
    struct teacher t1;
    struct student s1;
    struct staff st1;

    printf("Enter teacher info:\n");
    fgets(t1.name, 150, stdin);
    scanf("%d", &t1.salary);
    scanf("%d", &t1.scale);
    display_teacher(t1);

    printf("Enter student info:\n");
    fgets(s1.name, 200, stdin);
    scanf("%d", &s1.roll);
    fgets(s1.department, 200, stdin);
    display_student(s1);

    printf("Enter staff info:\n");
    fgets(st1.name, 100, stdin);
    scanf("%d", &st1.salary);
    scanf("%d", &st1.scale);
    display_staff(st1);

    return 0;
}

void display_teacher(struct teacher t) {
    printf("Name: %sScale: %d\nSalary: %d\n\n", t.name, t.scale, t.salary);
}

void display_student(struct student s) {
    printf("Name: %s\nRoll Number: %d\nDepartment: %s", s.name, s.roll, s.department);
}

void display_staff(struct staff st) {
    printf("Name: %sScale: %d\nSalary: %d\n", st.name, st.scale, st.salary);
}
