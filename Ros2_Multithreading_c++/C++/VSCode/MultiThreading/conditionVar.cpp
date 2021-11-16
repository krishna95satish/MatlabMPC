#include <iostream>
#include <thread>
#include <chrono>
#include <condition_variable>

using namespace std;

int main()
{
    condition_variable condition;
    mutex mtx;
    bool ready = false;

    thread t1([&]()
              {
                  this_thread::sleep_for(chrono::milliseconds(2000));
                  cout << "t1 acquaring the lock " << endl;
                  unique_lock<mutex> lock(mtx);
                  cout << "t1 lock acquired" << endl;
                  ready = true;
                  lock.unlock();
                  cout << "t1 unlocked and notifying!" << endl;
                  condition.notify_one();
              });
    cout << "main thread getting the lock " << endl;
    unique_lock<mutex> lock(mtx);
    cout << "waiting for the lock " << endl;
    while (!ready)
    {
        condition.wait(lock);
    }
    cout << "main thread got the lock successfully  " << endl;
    cout << "ready " << ready << endl;

    t1.join();
    return 0;
}