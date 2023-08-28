#include <iostream>
#include <chrono>
using namespace std;


// Virtual Function Class
class Base{
public:
    virtual void task() {
        for (int i=0; i < 1000; i++){
        cout <<  "Hello World" << endl;

       }
    }
};

class Child:public Base {
public:
    void task(){

       for (int i=0; i < 1000; i++){
        cout << "Loop ran:  " << i +1 << " times"<< endl;

       }


    }
    void nonVirtualTask(){
                for (int i=0; i < 1000; i++){
        cout << "Loop ran:  " << i +1 << " times"<< endl;

       }
       }
};
int main(){
    auto startTime = chrono::high_resolution_clock::now();
    // Code
    Child c1;
    c1.task();
   auto endTime = chrono::high_resolution_clock::now();
   auto duration1 = chrono::duration_cast<chrono::microseconds>(endTime-startTime);

   auto startTime2 = chrono::high_resolution_clock::now();
    // Code
    Child c2;
   c2.nonVirtualTask();
   auto endTime2 = chrono::high_resolution_clock::now();
   auto duration2 = chrono::duration_cast<chrono::microseconds>(endTime2-startTime2);

   cout << "Execution time virtual function: " << duration1.count() << " microseconds" <<endl;
   cout << "Execution time non virtual function: " << duration2.count() << " microseconds";
}
