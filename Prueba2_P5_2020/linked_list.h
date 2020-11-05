#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_


template <typename TElem>
class LinkedList
{
public:
    class Node
    {
    public:
        
        Node(int val)
        : data(val), next(nullptr)
   
         {}
        
        int data;
        Node *next;
    };

    LinkedList()
    : head(nullptr), tail(nullptr)
    {}

       LinkedList& operator=(const LinkedList& rhs);

        LinkedList(const std::initializer_list<TElem>& init);
    LinkedList(const LinkedList& other);

    ~LinkedList();

    std::string toString() const;
    int size() const;
    void pushBack(TElem data);
    void pushFront(TElem data);

    void sort();
    bool isSorted();
    friend std::ostream& operator << (std::ostream& out, const LinkedList& lst);

private:
    Node *head;
    Node *tail;
};
#include "linked_list.cpp"
#endif
