#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class student
{
  private:
  string Name, LastName;
  int A, B, C, D, E;

  public:
  student(string name ="", string lastname ="", int a=0, int b=0, int c=0, int d=0, int e=0) : Name(name), LastName(lastname), A(a), B(b), C(c), D(d), E(e) {}

  string get_name()
  {
    return Name;
  }

  string get_LastName()
  {
    return LastName;
  }

  int get_A()
  {
    return A;
  }

  int get_B()
  {
    return B;
  }

  int get_C()
  {
    return C;
  }

  int get_D()
  {
    return D;
  }

  int get_E()
  {
    return E;
  }
};

void The_Best_Student(student students[], int n)
{
  int x = 0;
  int index;

  for(int i = 0; i < n; i++)
  {
    int y = students[i].get_A() + students[i].get_B() + students[i].get_C() + students[i].get_D() + students[i].get_E();
    if(x < y)
    {
      x = y;
      index = i;
    }
  }
  cout<< students[index].get_name() << " " << students[index].get_LastName() << "\n";
}

int main() 
{
  int n;
  cin >> n;

  student* students = new student[n];

  for(int i = 0; i < n; i++)
  {
     string name, lastname;
     unsigned int a, b, c, d, e;
     cin >> name >> lastname >> a >> b >> c >> d >> e;
     students[i] = student(name, lastname, a, b, c, d, e);
     
  }

  The_Best_Student(students, n);

  return 0;
}