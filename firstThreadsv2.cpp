#include <iostream>
#include <thread>
//#include <pthread.h>

using namespace std;

void call_from_thread(int t_id)
{
  // updated to contain  a parameter
  cout << "Another Hello World #" << t_id << endl;
}

static const int num_threads = 10;

int main()
{
  thread t[num_threads];

  // launch a group of threads
  for(int i = 0; i < num_threads; ++i)
    t[i] = thread(call_from_thread,i);

  cout << "Launched from the main thread\n";

  // join the threads with the main thread
  for(int i = 0; i < num_threads; ++i)
    t[i].join();
  return 0;
}
