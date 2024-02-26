#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <cstring>
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
Student *head, *tmp, *prev;
  char tstr[10];
  ifstream ifs;
  ifs.open("students.txt");
  if (!ifs)
  {
    cerr << "Error: file open error" << endl;
    exit(0);
  }
  for(int i=0;i<N;i++)
    {
      tmp = (Student *)malloc(sizeof(Student)); 
      
      ifs.getline(tstr, 20, ' ');
      tmp->id = atoi(tstr);
      ifs.getline(tmp->name, 20, ' ');
      ifs.getline(tmp->major, 20);
      tmp->next = NULL;
      if (i==0)
        head = tmp;  
      else 
        prev->next = tmp; 
      prev = tmp;
    }
    return head;
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
    tmp = head;
    while (1) {
        tmp = tmp->next;
        if (tmp == NULL) {
            break;
        }
        free(tmp);
    }
}