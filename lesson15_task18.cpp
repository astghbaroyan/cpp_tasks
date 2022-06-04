#include <iostream>
#include <string>
#include <math.h>

using std:: string;
using std:: cout;
using std:: cin;

class person
{
  protected:
   string name;
   string last_name;
   int age;

  public:
   person(string n, string m, int a) : name(n), last_name(m), age(a){} 
   person(){}

   string get_last_name()
   {
     return last_name;
   }

   int get_age()
   {
     return age;
   }
};

class employee : public person
{
  private:
   int salary;

  public:
   employee(string n, string m, int a, int s) : person(n, m, a), salary(s){}
   employee(){}

   int get_salary()
   {
     return salary;
   } 
};

void find_employee(employee* emp, int n)
{
  int* i_y = new int[n];
  int* i_s = new int[n];
  int j = 0, index, k = 0;
  for(int i = 0; i < n; i++)
  {
    if(emp[i].get_age() > j)
    {
      j = emp[i].get_age();
      index = i;
    }
  }

  i_y[0] = index; j = 1;

  for(int i = 0; i < n; i++)
  {
    if(emp[i].get_age() == emp[index].get_age() && i != index)
    {
      i_y[j++] = i;
    }
  }

  for(int i = 0; i < n; i++)
  {
    if(emp[i].get_salary() > k)
    {
      k = emp[i].get_salary();
      index = i;
    }
  }

  i_s[0] = index; k = 1;

  for(int i = 0; i < n; i++)
  {
    if(emp[i].get_salary() == emp[index].get_salary() && i != index)
    {
      i_s[k++] = i;
    }
  }

  bool p = true;
  for(int i = 0; i < j; i++)
  {
    for(int t = 0; t < k; t++)
    {
      if(i_y[i] == i_s[t])
      {
        cout<< emp[i_y[i++]].get_last_name() << "\n";
        t = 0;
        p = false;
      }
    }
  }
  if(p) cout<< "Not found!";
}

int main()
{ 
  int n; cin>> n;
  employee* emp = new employee[n];

  for(int i = 0; i < n; i++)
  {
    string name, last_name; int age, salary;
    cin>> name >> last_name >> age >> salary;

    emp[i] = employee(name, last_name, age, salary);
  }
 
 find_employee(emp, n);
 return 0;
}