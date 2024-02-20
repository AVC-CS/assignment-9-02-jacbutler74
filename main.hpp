#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5;
struct Student
{
    int id;
    string name;
    string major;
    Student *next;
};

Student *makeStudent();
void printStudent(Student *head);

Student *makeStudent()
{
    Student *head, *tmp, *prev;
    ifstream ifs;
    ifs.open("students.txt");
    if (!ifs)
    {
        cerr << "File Open Error\n";
        exit(0);
    }
    for (int i = 0; i < N; i++)
    {
        tmp = (Student *)malloc(sizeof(Student));
        ifs >> tmp->id >> tmp->name >> tmp->major;
        tmp->next = NULL;
        if (i == 0)
            head = tmp;
        else
            prev->next = tmp;
        prev = tmp;
    }
    return head;
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