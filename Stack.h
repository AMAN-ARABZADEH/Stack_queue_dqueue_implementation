#ifndef _STACK_H
#define _STACK_H
#include <deque>

namespace stc{
    template <typename T>
    class Stack{
    public:
        //typedef typename Container::value_type value_type;
        //typedef typename Container::size_type size_type;


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
        std::deque<T> coll;
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