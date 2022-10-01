#ifndef _STACK_H
#define _STACK_H
#include <deque>

namespace stc{
    template <typename T, typename Container = std::deque<T>>
    class Stack{
    public:


        bool empty(){
            return coll.empty();
        }
        std::size_t size() const{
            return coll.size();
        }
        T &top(){
            return coll.back();
        }
        const T &top()const{
            return coll.back();
        }
        void push(const T &value){
            coll.push_back(value);
        }
        void pop(){
            coll.pop_back();
        }
    private:
        Container coll;
    };
    template <typename T>
    bool operator==(const stc::Stack<T> &x, const stc::Stack<T> &y){
        return x.coll == y.coll;
    }
    template <typename T>
    bool operator<(const stc::Stack<T> &x, const stc::Stack<T> &y){
        return x.coll < y.coll;
    }

}



#endif