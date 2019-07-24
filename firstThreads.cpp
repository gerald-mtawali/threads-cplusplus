#include <iostream>
#include <thread>

using namespace std;

void call_from_thread()
{
  cout << "Hello World #2564783"<< endl;
}

int main()
{
  // launch a thread
  thread t1(call_from_thread);

  // join the thread with the main thread
  t1.join();

  return 0;
}
