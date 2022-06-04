#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

using std::cout;
using std::cin;
using std:: string;

class Book
{
  protected:
   string caption;

  public:
   Book(string c) : caption(c){}
   Book(){} 
};

class FictionBook : public Book
{
  private:
   double copies_sold;
   double circulation;

  public:
   FictionBook(string w, double c, double s) : Book(w), copies_sold(c), circulation(s) {}
   FictionBook(){}

   double popularity()
   {
     return double (copies_sold / circulation) * (circulation / 1000);
   } 

   string get_caption()
   {
     return caption;
   }

   double get_copies_sold()
   {
     return copies_sold;
   }

   double get_circulation()
   {
     return circulation;
   }
};

class ScientificBook : public Book
{
  private:
   double price_book;
   double page_amount;
   double copies_amount;

  public:
   ScientificBook(string s, double p, double pa, double c) : Book(s), price_book(p), page_amount(pa), copies_amount(c) {}
   ScientificBook(){}

   double expensive()
   {
     return price_book / page_amount;
   } 

   string get_caption()
   {
     return caption;
   }

   double get_price_book()
   {
     return price_book;
   }

   double get_page_amount()
   {
     return page_amount;
   }

   double get_copies_amount()
   {
     return copies_amount;
   }
};

void find_highest_popularity(FictionBook* fbook, int n)
{
  int index, max = 0;
  for(int i = 0; i < n; i++)
  {
    if(fbook[i].popularity() > max)
    {
      max = fbook[i].popularity();
      index = i;
    }
  }
  cout<< fbook[index].get_caption() << "\n";

  for(int i = 0; i < n; i++)
  {
    if(fbook[i].popularity() == max && i != index)
    {
      cout<< fbook[i].get_caption() << "\n";
    }
  }
}

void find_scientific_book(ScientificBook* sbook, int n)
{
  int sum_expensive = 0;
  for(int i = 0; i < n; i++)
  {
    sum_expensive += sbook[i].expensive();
  }

  int middle_expensive = sum_expensive / n;
  bool p = true;
  int* arr = new int[n]; int j = 0; 
  for(int i = 0; i < n; i++)
  { 
    if(sbook[i].expensive() < middle_expensive)
    {
      arr[j++] = i;
      p = false;
    }
  }
  if(p) 
  {
    cout<< "Not found!" << "\n";
    return;
  }  

  int max = 0; int index;
  for(int i = 0; i < n; i++)
  {
    if(sbook[i].get_copies_amount() > max)
    {
      max = sbook[i].get_copies_amount();
      index = i;
    }
  }

   p = true;
  for(int i = 0; i < j; i++)
  {
    if(arr[i] == index)
    {
      cout<< sbook[arr[i]].get_caption() << "\n";
      p = false;
    }
  }
  if(p)  
  {
  cout<< "Not found!" << "\n"; 
  return;
  }

  for(int i = 0; i < j; i++)
  {
    if(sbook[arr[i]].get_copies_amount() == max && arr[i] != index)
    {
      cout<< sbook[arr[i]].get_caption() << "\n";
    }
  }
  
}

int main() 
{
  int n; cin>> n;
  FictionBook* fbook = new FictionBook[n];
  

  for(int i = 0; i < n; i++)
  {
    cin.get();
    string s;  int a, b;
    getline(cin, s); cin>> a >> b; 
    fbook[i] = FictionBook(s, a, b);
  }

  int m; cin >> m;
  ScientificBook* sbook = new ScientificBook[m];
  

  for(int i = 0; i < m; i++)
  {
    cin.get();
    string s; int a, b , c;
    getline(cin, s); cin>> a >> b >> c;
    sbook[i] = ScientificBook(s, a, b, c);
  }

  find_highest_popularity(fbook, n);
  find_scientific_book(sbook, m);

  return 0;
}