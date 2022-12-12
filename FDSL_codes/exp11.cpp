#include <iostream>
using namespace std;

class Queue
{
public:
  const static int size = 10;
  int start = -1;
  int end = -1;
  int array[size];
  void push(int x)
  {
    if (end == size - 1)
    {
      cout << "Queue overflow !!" << endl;
    }
    array[++end] = x;
  }
  int pop()
  {
    if (start == end)
    {
      cout << "Queue enderflow !!" << endl;
    }
    return array[++start];
  }

  void display()
  {
    if (start == end)
    {
      cout << "Queue is empty !!";
    }
    cout << "Queue contain:";
    for (int i = start + 1; i <= end; i++)
    {
      cout << array[i] << " ";
    }
    cout << endl;
  }
};
  void add_job(Queue &q, int job)
  {
    q.push(job);
  }
  void del_job(Queue &q)
  {
    q.pop();
  }
int main()
  {
    Queue job_line;
    add_job(job_line, 1);
    add_job(job_line, 10);
    add_job(job_line, 100);
    add_job(job_line, 1000);

    job_line.display();
    del_job(job_line);
    job_line.display();
  }
