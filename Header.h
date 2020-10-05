#pragma once
#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;
template <typename T>
class Dynamic_Array {
private:
    int size;
    T* data;
public:
    Dynamic_Array()
    {
        this->m_size = 0;
        this->m_data = NULL;
    }

    Dynamic_Array(Dynamic_Array<T>& a)
    {
        this->size = a.size;
        this->data = new T[size];
        for (int i = 0; i < size; ++i)
            this->data[i] = a.data[i];
    }

    Dynamic_Array(int size, T* ms)
    {
        this->size = size;
        data = new T[size];
        for (int i = 0; i < size; i++)
        {
            this->data[i] = ms[i];
        }
    }
    ~Dynamic_Array()
    {
        delete[] this->data;
    }
    void push_back(T val)
    {
        size += 1;
        data[size - 1] = val;
    }
    void show() {
        for(int i=0; i<size; i++)
        cout << this->data[i] << " ";
        cout << endl;
    }
    int search_max()
    {
        int k=0;
        T max=this->data[0];
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] > max)
            {
                k = i;
                max = this->data[i];
            }
        }
        return k;
    }
    T& operator[] (int i)
    {
        return data[i];
    }
};