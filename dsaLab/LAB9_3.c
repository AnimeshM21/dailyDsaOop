// The students of 2 classes (A and B) are standing in 2 separate lines in ascending
// order of their height. The principle asks the students to combine and join a single
// line. Write a function merge to combine the lines into a single line in ascending
// order of their height using the singly linked list. For example class A: 5->10->15.
// Class B: 2->3->20 resultant line: 2->3->5->10->15->20. Input first line contains 2
// integer N1 and N2 as number of students of class A and B respectively. Second
// line contains N1 integers (heights of the students of class A in ascending order)
// third line contains N2 integers (heights of students of class B in ascending order).
// Output Display Line of Class A. Display line of class B.

#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int height;
    struct Student *next;
} Student;

Student *initClass(int height)
{
    Student *student = (Student *)malloc(sizeof(Student));
    student->height = height;
    student->next = NULL;
    return student;
}

Student *insertStudentHeight(Student *head, int value)
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    newStudent->height = value;
    newStudent->next = NULL;

    if (head == NULL)
    {
        return newStudent;
    }

    Student *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newStudent;
    return head;
}

Student *merge(Student *headA, Student *headB)
{
    if (headA == NULL)
        return headB;
    if (headB == NULL)
        return headA;

    Student *mergedHead = NULL;
    if (headA->height < headB->height)
    {
        mergedHead = headA;
        headA = headA->next;
    }
    else
    {
        mergedHead = headB;
        headB = headB->next;
    }

    Student *current = mergedHead;

    while (headA != NULL && headB != NULL)
    {
        if (headA->height < headB->height)
        {
            current->next = headA;
            headA = headA->next;
        }
        else
        {
            current->next = headB;
            headB = headB->next;
        }
        current = current->next;
    }

    if (headA != NULL)
    {
        current->next = headA;
    }
    else
    {
        current->next = headB;
    }

    return mergedHead;
}

void display(Student *head)
{
    Student *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->height);
        temp = temp->next;
        if (temp != NULL)
        {
            printf("->");
        }
    }
    printf("\n");
}

int main()
{
    int N1, N2, height;

    printf("Enter the number of students in Class A and Class B: ");
    scanf("%d %d", &N1, &N2);

    Student *headA = NULL;
    Student *headB = NULL;

    printf("Enter the heights of students in Class A: ");
    for (int i = 0; i < N1; i++)
    {
        scanf("%d", &height);
        headA = insertStudentHeight(headA, height);
    }

    printf("Enter the heights of students in Class B: ");
    for (int i = 0; i < N2; i++)
    {
        scanf("%d", &height);
        headB = insertStudentHeight(headB, height);
    }

    printf("Class A Line: ");
    display(headA);
    printf("Class B Line: ");
    display(headB);

    Student *mergedHead = merge(headA, headB);
    printf("Merged Line: ");
    display(mergedHead);

    return 0;
}