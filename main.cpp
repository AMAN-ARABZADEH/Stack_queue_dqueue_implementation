#include <iostream>
#include <list>
#include "Stack.h"
#include "queue.h"
int main() {
    srand(unsigned(time(nullptr)));


    qtu::Queue<int, std::list<int> > aQueue;


    int numbers[] = {1,3,6,7,8,9,11,22,33,44,1,2,3};
    const int count = sizeof(numbers) / sizeof(numbers[0]);


    for(auto pos = 0; pos < count; ++pos){
        std::cout.width(5);
        std::cout << numbers[pos];
        aQueue.push(numbers[pos]);
    }


    stc::Stack<int> aStack;

    while(!aQueue.empty()){
        int temp = aQueue.front();  // read value
        std::cout.width(6);
        aQueue.pop();
        aStack.push(temp);
    }


    std::priority_queue<int, std::vector<int>, std::greater<int>> aPriQ;

    // greater: smallest element first (= highest priority
    // less ´: highest element fist




    while(!aStack.empty()){
        int temp = aStack.top();  // read value
        std::cout.width(6);
        aStack.pop();
        aPriQ.push(temp);
    }



    while(!aStack.empty()){
        int temp = aStack.top();  // read value
        std::cout.width(6);
        aStack.pop();
        aPriQ.push(temp);
    }


    stc::Stack<int> tempStack;
    std::cout << "\n\nPut the numbers from priority queue  in stack" << std::endl;
    while(!aPriQ.empty()){
        int temp = aPriQ.top();
        tempStack.push(temp);
        std::cout.width(6);
        std::cout << temp;
        aPriQ.pop();
    }



    std::cout << "\n\nread the numbers from temp stack" << std::endl;
    while(!tempStack.empty()){
        std::cout.width(6);
        std::cout << tempStack.top() << ", ";

        tempStack.pop();
    }








    return 0;
}
