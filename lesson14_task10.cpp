#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class point
{
  public:
  int x;
  int y;

  point(int a=0, int b=0) : x(a), y(b) {}
};

class Queue 
{
 public:
  Queue(int n);
  ~Queue();
  bool empty() const;
  point front() const;
  void enqueue(point obj);
  void dequeue();

 private:
  int size;
  int front_index; 
  int rear_index;  
  int capacity;
  point* data_array;
};

//class implementation
// n should be >= 0
Queue::Queue(int n)
  : size(0)
  , front_index(0)
  , rear_index(-1)
{
  if (n <= 0) {
    n = 100;
  }
  capacity = n;
  data_array = new point[capacity];
}

Queue::~Queue() 
{
  delete[] data_array;
}

bool Queue::empty() const
{
  return size == 0;
}

point Queue::front() const
{
  return data_array[front_index];
}

void Queue::enqueue(point obj) 
{
  if (size == capacity) {
    return;
  }
  ++rear_index;
  if (rear_index == capacity) {
    rear_index = 0;
  }
  data_array[rear_index] = obj;
  ++size;
} 

void Queue::dequeue() 
{
  if (empty()) {
    return;
  }
  --size;
  ++front_index;
  if (front_index == capacity) {
    front_index = 0;
  }
}

int main()
{
  const int n = 10;
  int arr[n][n];

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      cin>> arr[i][j];
    }
  }                
    
  const int N = n * n; 
  Queue q(N);          
  point p[N]; p[0].x = 0; p[0].y = 0; 
  q.enqueue(p[0]); 
  bool t = false;
  int x = 0, y = 0, pindex = 1;
  while(!q.empty()) 
  { 
    point c = q.front();
    unsigned int i = c.x;
    unsigned int j = c.y;

    if(i < n-1 && arr[i+1][j] == 0) 
    {
      p[pindex].x = i+1, p[pindex].y = j;
      q.enqueue(p[pindex++]);
      arr[i+1][j] = 2;
      if(i+1 == n-1 && j == n-1)
      {
        t = true;
      }
    }
    if(i > 0 && arr[i-1][j] == 0)
    {
      p[pindex].x = i-1, p[pindex].y = j;
      q.enqueue(p[pindex++]);
      arr[i-1][j] = 2;
      if(i-1 == n-1 && j == n-1)
      {
        t = true;
      }
    }
    if(j < n-1 && arr[i][j+1] == 0)
    {
      p[pindex].x = i, p[pindex].y = j+1;
      q.enqueue(p[pindex++]);
      arr[i][j+1] = 2;
      if(i == n-1 && j+1 == n-1)
      {
        t = true;
      }
    }
    if(j > 0 && arr[i][j-1] == 0)
    {
      p[pindex].x = i, p[pindex].y = j-1;
      q.enqueue(p[pindex++]);
      arr[i][j-1] = 2;
      if(i == n-1 && j-1 == n-1)
      {
        t = true;
      }
    }
    q.dequeue();
  }
  if(t)
  {
    cout<< "YES" << "\n";
  }
  else 
  {
    cout<< "NO" << "\n";
  } 

  return 0;  
}