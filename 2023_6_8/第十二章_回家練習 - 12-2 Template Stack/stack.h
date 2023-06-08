#ifndef STACK_H
#define STACK_H
#include<iostream>
#include<sstream>
#include<string>
template<class T>
class Stack
{
public:
    Stack();
    Stack(const Stack&);
    ~Stack();
    bool empty() const;
    T peek() const;
    void push(int value);
    T pop();
    int getSize() const;

private:
    T* elements;
    int size;
    int capacity;
    void ensureCapacity();
};
template<class T>
Stack<T>::Stack() : size(0), capacity(16)
{
    elements = new T[capacity];
}
template<class T>
Stack<T>::Stack(const Stack& stack)
{
    elements = new int[stack.capacity];
    size = stack.size;
    capacity = stack.capacity;
    for (int i = 0; i < size; i++)
    {
        elements[i] = stack.elements[i];
    }
}
template<class T>
Stack<T>::~Stack()
{
    delete[] elements;
}
template<class T>
bool Stack<T>::empty() const
{
    return (size == 0);
}
template<class T>
T Stack<T>::peek() const
{
    return elements[size - 1];
}
template<class T>
void Stack<T>::push(int value)
{
    ensureCapacity();
    elements[size++] = value;
}
template<class T>
void Stack<T>::ensureCapacity()
{
    if (size >= capacity)
    {
        T* old = elements;
        capacity = 2 * size;
        elements = new T[size * 2];

        for (int i = 0; i < size; i++)
            elements[i] = old[i];

        delete[] old;
    }
}
template<class T>
T Stack<T>::pop()
{
    return elements[--size];
}
template<class T>
int Stack<T>::getSize() const
{
    return size;
}
#endif