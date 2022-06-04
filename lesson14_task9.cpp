#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class Stack 
{
public:
  Stack(int c) ;
  
  Stack(const Stack& st); 
  
  ~Stack();

public:
  
  bool empty() const;
  bool full() const;
  int top() const;
  void push(int);
  void pop();
  int get_size() const;

private:
  
  int size;
  int capacity;
  int* data_array;
};

Stack::Stack(int c)	: size(0)
{
  if (c <= 0) {
    c = 100;
  }
  capacity = c;
  data_array = new int[capacity];
}

Stack::Stack(const Stack& st)
  : size(st.size)
  , capacity(st.capacity)
	, data_array(new int[capacity]) 
{
  for (int i = 0; i < size; i++) {
    data_array[i] = st.data_array[i];
  }
}

Stack::~Stack() 
{
  delete[] data_array;
}

bool Stack::empty() const
{
  return size == 0;
}

bool Stack::full() const
{
  return size == capacity;
}

int Stack::top() const
{
  return data_array[size - 1];
}

void Stack::push(int obj) 
{
  if (full()) {
    return;
  }
  data_array[size] = obj;
  ++size;
}

void Stack::pop()
{
  if (empty()) {
    return;
  }
  --size;
}

int Stack::get_size() const
{
  return size;
}

bool chek(char b, char p)
{
  switch(b)
  {
    case '(':
    return p == ')';

    case '{':
    return p == '}';

    case '[':
    return p == ']';

    default: return false;
  }
}


int main() 
{
  Stack s(100);
  char simbols[100];

  cin>> simbols;

  for(int i = 0; simbols[i] != '\0'; i++)
  {
    switch(simbols[i])
    {
      case '(':
      case '{':
      case '[':
      s.push(simbols[i]);
      break;
      case ')':
      case '}':
      case ']':
      if(s.empty() || !chek(s.top(), simbols[i]))
      {
        cout<< "NO" << "\n";
        return 0;
      }
      s.pop();
      break;
    }
  }

  if(s.empty())
  {
    cout<< "YES" << "\n";
  }
  else 
  {
    cout<< "NO" << "\n";
  }

  return 0;
}