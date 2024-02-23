#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5;
struct Student
{
    int id;
    char name[50];
    char major[50];
    Student *next;
};

Student *makeStudent();
void printStudent(Student *head);

Student *makeStudent()
{
    /*******************************
     * Code your program here
     *******************************/
}
void printStudent(Student *head)
{
    Student *tmp;
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->id << "\t";
        cout << tmp->name << "\t";
        cout << tmp->major << "\n";
        tmp = tmp->next;
    }
    /*******************************
     * Code your program here
     *******************************/
}