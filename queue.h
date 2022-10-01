//
// Created by amana on 2022-10-02.
//

#ifndef STACK_USINGDEQUE_QUEUE_H
#define STACK_USINGDEQUE_QUEUE_H
#include <queue>


namespace qtu{
    template <typename  T, typename Container = std::deque<T>>
    class Queue{
    private:
    Container container;
    public:

        bool empty(){
            return container.empty();
        }
        std::size_t size() const{
            return container.size();
        }
        T &front(){
            return container.front();
        }
        const T &front() const{
            return container.front();
        }
        T &back(){
            return container.back();
        }
        const T &back() const{
            return container.back();
        }
        void push(const T &value){
            container.push_back(value);
        }
        void pop(){
            container.pop_front();
        }


    };
}
#endif //STACK_USINGDEQUE_QUEUE_H
