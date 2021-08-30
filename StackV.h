
//Implementing a Stack ADT with a vector

#ifndef STACK_H
#define STACK_H

#include <vector>
using namespace std;

template<typename T>
class Stack
{
private:

      vector<T> data;
  

public:

    // No default c'tor needs to be declared 
    // The vector "knows" how to initialize itself


   // No d'tor needs to be declared
   // The vector "knows" how to destroy itself

    int size() const { return data.size(); }

    void push(const T& data)
    {
        this->data.push_back(data);
    }
    void pop()
    {
        this->data.pop_back();
    }

    // returns the data at the top of the stack
    int top() const
    {
        return this->data.at(data.size() - 1);
    }
    void clear()
    {
        this->data.clear();
    }

};

#endif
