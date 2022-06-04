#include <iostream>
#include <string>

using std:: string;
using std:: cout;
using std:: cin;

class student
{
  private:
   string name;
   string lastname;
   int* arr = new int[5];

  public:
   student(string n, string l, int* a) : name(n), lastname(l), arr(a) {}
   student(){} 

   string get_name()
   {
     return name;
   }

   string get_lastname()
   {
     return lastname;
   }

   int* get_arr()
   {
     return arr;
   }
};

class Class
{
  private:
   string classname;
   int count_students;
   student* students;

  public:
   Class(string c, int s) : classname(c), count_students(s){}
   Class(){}

   string get_classname()
   {
     return classname;
   }

   int get_count_students()
   {
     return count_students;
   }

   student* get_sudents()
   {
     return students;
   }

   void set_students(student* arr)
   {
     students = arr;
   }

};

int sum(int* arr, int n)
{
  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}

void find_best_class(Class* classes, int n)
{
  double max_count = 0; int index = 0;
  for(int i = 0; i < n; i++)
  {
    double count = 0;
    int m = classes[i].get_count_students();  
    for(int j = 0; j < m; j++)
    {
      int* arr = new int[5];
      arr = classes[i].get_sudents()[j].get_arr();   
      count += sum(arr, 5);
    }

    if(count / m > max_count)
    {
      index = i;
      max_count = count / m;
    }
  }
  cout<< classes[index].get_classname();
}

int main()
{ 
  int n;
  cin>> n;
  Class* classes = new Class[n];

  for(int i = 0; i < n; i++)
  {
    string name; int count;
    cin>> name >> count;
    classes[i] = Class(name, count);
    student* st = new student[count];

    for(int j = 0; j < count; j++)
    {
      string name, lastname;
      cin>> name >> lastname;
      int* arr = new int[5];

      for(int k = 0; k < 5; k++)
      {
        int a; cin>> a;
        arr[k] = a;
      }
      st[j] = student(name, lastname, arr);
    }
    classes[i].set_students(st);
  }
  find_best_class(classes, n);
 
  return 0;
}