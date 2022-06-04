#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class Time
{
  private:
  int h;
  int m;

  public:
  Time(int h=0, int m=0) : h(h), m(m) {}
  
  int get_h()
  {
    return h;
  }

  int get_m()
  {
    return m;
  }
};

void noon(Time times[], int n)
{
  
  int index = 0, index1 = 0;
  int x = 24 * 60;

 for(int i = 0; i < n; i++)
 {
   int y = abs(12 * 60 - (times[i].get_h() * 60 + times[i].get_m()));
   if(x > y)
   {
     x = y;
     index = i;
   }
 }
  x = 24 * 60;

 for(int i = 0; i < n; i++)
 {
   int y = abs(12 * 60 - (times[i].get_h() * 60 + times[i].get_m()));

   if(i == index)
   {
     continue;
   }

   if(x > y)
   {
     x = y;
     index1 = i;
   }
 }
 
  x = times[index].get_h() * 60 + times[index].get_m();
  int y = times[index1].get_h() * 60 + times[index1].get_m();

  if(x < y)
  {
    cout<< times[index].get_h() << " " << times[index].get_m() << "\n";
    cout<< times[index1].get_h() << " " << times[index1].get_m() << "\n";
  }
  else
  {
  cout<< times[index1].get_h() << " " << times[index1].get_m() << "\n";
  cout<< times[index].get_h() << " " << times[index].get_m() << "\n";
  }
}


int main() 
{
  int n;
  cin >> n;

  Time* times = new Time[n];

  for(int i = 0; i < n; i++)
  {
     int hours, minute;
     cin >> hours >> minute;
     if(hours >= 0 && hours <= 23 && minute >= 0 && minute <= 59)
     {
     times[i] = Time(hours, minute);
     }
  }

  noon(times, n);

  return 0;
}