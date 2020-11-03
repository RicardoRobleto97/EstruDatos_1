#include <sstream>
#include "array.h"

template<typename TElem>
Array<TElem>::Array(const std::initializer_list<TElem>& init)
: size_ (init.size())
{
    arr = new TElem[size_];

    int index = 0;
    for (auto elem : init)
    {
        arr[index++] = elem;
    }
}

template<typename TElem>
Array<TElem>::Array(int size)
: size_ (size)
{
    arr = new TElem[size_];

    for (int i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

template <typename TElem>
void Array<TElem>::copyFrom(const Array& other)
{
    size_ = other.size_;
    arr = new TElem[size_];

    for (int i = 0; i < size_; i++)
    {
        arr[i] = other.arr[i];
    }
}

template<typename TElem>
Array<TElem>& Array<TElem>::operator=(const Array<TElem>& rhs)
{
    delete [] arr;

    copyFrom(rhs);
    return *this;
}

template<typename TElem>
std::string Array<TElem>::toString() const
{
    std::ostringstream out;

    out << "[";
    bool first = true;

    for (int i = 0; i < size_; i++)
    {
        if (first) first = false;
        else out << ",";

        out << arr[i];
    }
    out << "]";

    return out.str();
}

template<typename TElem>
bool Array<TElem>::isSorted() const
{
    for(int i=0;i<size_;i++)
    {
        if(arr[i]>arr[i+1]){
 n 
            return false;
        }

    }

    return true;
}

template<typename TElem>
void Array<TElem>::reverse()
{
    arr2 = new TElem[size_];
    
    int input=0;
    int output=size_-1;

    while(input<output)
    {   
        int temp=arr[input];
        arr[input]=arr[end];
        arr[end]=temp;

        input++;
        output--;

    }

}