#include <iostream>
#include <string>
#include <math.h>

using std:: string;
using std:: cout;
using std:: cin;

class shape
{
  public:
   virtual double get_area() = 0;
   ~shape(){}
   void print_area()
   {
     cout<< get_area() << " ";
   }
};

class rectangle : public shape
{
  private:
   int length;
   int hight;

  public:
   rectangle(int l, int h) : length(l), hight(h){}
   ~rectangle(){}

   virtual double get_area()
   {
     return length * hight;
   } 
};

class circle : public shape
{
  private:
   int radius;

  public:
   circle(int r) : radius(r){}
   ~circle(){}

   virtual double get_area()
   {
     return radius * radius * 3.1415; 
   } 
};

class tringle : public shape
{
  private:
   int a;
   int b;

  public:
   tringle(int c, int d) : a(c), b(d){}
   ~tringle(){}

   virtual double get_area()
   {
     double c = sqrt((a * a) + (b * b));
     double p = (a + b + c) / 2;
     return sqrt(p * (p - a) * (p - b) * (p - c));
   } 
};

void sort_and_print(double* arr, int n)
{
  while(true)
  {
    bool p = true;
    for(int i = 0; i < n-1; i++)
    {
      if(arr[i] > arr[i+1])
      {
        double a = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = a;
        p = false;
      }
    }
    if(p) break;
  }

  for(int i = 0; i < n; i++)
  {
    cout<< arr[i] << " ";
  }
}

int main()
{ 
 int n; cin>> n;
 double* arr = new double[n];
 int j = 0;

 for(int i = 0; i < n; i++)
 {
   string s; cin>> s;

   if(s == "Triangle")
   {
     int a, b; cin >> a >> b;
     shape* t = new tringle(a, b);
     arr[j++] = t->get_area();
   }
   else if(s == "Circle")
   {
     int a; cin>> a;
     shape* c = new circle(a);
     arr[j++] = c->get_area();
   } 
   else if(s == "Rectangle")
   {
     int a, b; cin>> a >> b;
     shape* r = new rectangle(a, b);
     arr[j++] = r->get_area();
   }
 }

 sort_and_print(arr, n);
 return 0;
}