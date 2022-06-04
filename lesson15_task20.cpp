#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class Book
{
  protected:
   string name;
   string last_name;

  public:
   Book(string n, string m) : name(n), last_name(m) {}
   Book(){}

};

class FictionBook : public Book
{
  private:
   string genre = "poem";

  public:
   FictionBook(string n, string m) : Book(n, m){}
   FictionBook(){}

   string get_genere()
   {
     return genre;
   }

   string get_name()
   {
     return name;
   }

   string get_last_name()
   {
     return last_name;
   }
};

class ScientificBook : public Book
{
  private:
   string field = "mathematics";

  public:
   ScientificBook(string n, string m) : Book(n, m) {}
   ScientificBook(){}

   string get_name()
   {
     return name;
   } 

   string get_last_name()
   {
     return last_name;
   }

   string get_field()
   {
     return field;
   }
};

void find_mathematician_poet(FictionBook* fbook, ScientificBook* sbook, int size_fbook, int  size_sbook)
{
  if(size_fbook == 0 || size_sbook == 0)
  {
    cout<< "Not found!" << "\n";
    return;
  }
  bool p = true;
  for(int i = 0; i < size_fbook; i++)
  {
    for(int j = 0; j < size_sbook; j++)
    {
      if(fbook[i].get_name() == sbook[j].get_name() && fbook[i].get_last_name() == sbook[j].get_last_name())
      {
        cout<< fbook[i].get_name() << " " << fbook[i].get_last_name() << "\n";
        i++, j = 0;
        p = false;
      }
    }
  }
  if(p) cout<< "Not found!" << "\n";
}

int main() 
{
  int n; cin >> n;
  FictionBook* fbook = new FictionBook[n];
  int size_fbook = 0;

  for(int i = 0; i < n; i++)
  {
    string n, ln, g; cin>> n >> ln >> g;
    if(g == "poem")
    {
      fbook[size_fbook++] = FictionBook(n, ln);
    }
  }

  int m; cin >> m;
  ScientificBook* sbook = new ScientificBook[m];
  int size_sbook = 0;

  for(int i = 0; i < m; i++)
  {
    string n, ln, f; cin >> n >> ln >> f;
    if(f == "mathematics")
    {
      sbook[size_sbook++] = ScientificBook(n, ln);
    }
  }

  find_mathematician_poet(fbook, sbook, size_fbook, size_sbook);
  return 0;
}