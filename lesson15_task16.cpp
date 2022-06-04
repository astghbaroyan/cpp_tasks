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
};

class cube : public shape
{
  private:
   double a;

  public:
   cube(double l) : a(l) {}
   ~cube(){}

   virtual double get_area()
   {
     return a * a * a;
   } 
};

class ball : public shape
{
  private:
   double r;

  public:
   ball(double t) : r(t){}
   ~ball(){}

   virtual double get_area()
   {
     r = r * r * r;
     double p = 3.1415;
     return p * r * 4/3; 
   } 
};

class pyramid : public shape
{
  private:
   double a;
   double b;

  public:
   pyramid(double c, double d) : a(c), b(d){}
   ~pyramid(){}

   virtual double get_area()
   {
    a = a * a;
    b = a * b;
    return  b * 1/3;  
   } 
};

int main()
{ 
 int n; cin>> n;
 double sum = 0;

 for(int i = 0; i < n; i++)
 {
   string s; cin>> s;

   if(s == "Cube")
   {
     double a; cin >> a;
     shape* t = new cube(a);
     sum += t->get_area();
   }
   else if(s == "Ball")
   {
     double a; cin>> a;
     shape* c = new ball(a);
     sum += c->get_area();
   } 
   else if(s == "Pyramid")
   {
     double a, b; cin>> a >> b;
     shape* r = new pyramid(a, b);
     sum += r->get_area();
   }
 }

 cout<< sum;
 return 0;
}