#include <iostream>
#include <string>

using std:: string;
using std:: cout;
using std:: cin;

class person
{
  protected:
   string name;
   string last_name;

  public:
   person(string n, string m) : name(n), last_name(m){} 
   person(){}

};

class employee : public person 
{
  private:
   string post;
   int salary;

  public:
   employee(string n, string l, string p, int s) : person(n, l), post(p), salary(s){}
   employee(){}

   string get_last_name()
   {
     return last_name;
   }

   string get_post()
   {
     return post;
   }

   int get_salary()
   {
     return salary;
   }

};

void middle_salary(employee* arr, int n)
{
  double middle = 0;
  for(int i = 0; i < n; i++)
  {
    middle += arr[i].get_salary();
  }

  middle /= n;

  for(int i = 0; i < n; i++)
  {
    if(arr[i].get_salary() >= middle)
    {
      cout<< arr[i].get_last_name() << " " << arr[i].get_post() << "\n";
    }
  }
}

int main()
{ 
 int n; cin>> n;
 employee* emp = new employee[n];

 for(int i = 0; i < n; i++)
 {
   string n, l, p; int s;
   cin>> n >> l >> p >> s;
   emp[i] = employee(n, l, p, s);
 } 
 
 middle_salary(emp, n);
 
 return 0;
}