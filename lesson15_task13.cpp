#include <iostream>
#include <string>

using std:: string;
using std:: cout;
using std:: cin;

class worker 
{
  private:
   string name;
   string lastname;
   int age;

  public:
   worker(string n, string l, int a) : name(n), lastname(l), age(a){}
   worker(){} 

   string get_name()
   {
     return name;
   }

   string get_lastname()
   {
     return lastname;
   }

   int get_age()
   {
     return age;
   }

   void set_name(string s)
   {
     name = s;
   }

   void set_lastname(string l)
   {
     lastname = l;
   }

   void set_age(int a)
   {
     age = a;
   }
};

class group
{
  private:
   string group_name;
   int worker_count;
   worker* data_arr;

  public:
   
   group(string s="") : group_name(s){}
   group(worker* d) : data_arr(d){}


   string get_group_name()
   {
     return group_name;
   } 

   int get_worker_count()
   {
     return worker_count;
   }
  
   worker* get_data_arr()
   {
     return data_arr; 
   }
   void set_group_name(string s)
   {
     group_name = s;
   }

   void set_worker_count(int w)
   {
     worker_count = w;
   }

   void set_data_arr(worker* w)
   {
     data_arr = w;
   }
};

void find_workers(int n, group* g, string y)
{
  bool p = true;
  for(int i = 0; i < n; i++)
  {
    int k = g[i].get_worker_count();
    worker* workers = g[i].get_data_arr();

    if(g[i].get_group_name() == y)
    {
     for(int j = 0; j < k; j++)
      {
        cout<< workers[j].get_name() << " " << workers[j].get_lastname() << "\n";
      }
      p = false;
    }    
  } 
  if(p)
   {
    cout<< "Not found!" << "\n";
   } 
}

int main()
{ 

  int n;
  cin>> n;

  group* g = new group[n];
  
  std::string name, lastname; int age;

  for(int i = 0; i < n; i++)
  {
    string s;
    cin>> s;
    g[i] = group(s);

    int k;
    cin>> k;
    worker* workers = new worker[k];
    g[i].set_worker_count(k);

    for(int j = 0; j < k; j++)
    {
      cin>> name >> lastname >> age;
      workers[j] = worker(name, lastname, age);
    }
    g[i].set_data_arr(workers);
    
  }

  find_workers(n, g, "A-15");
  return 0;
}