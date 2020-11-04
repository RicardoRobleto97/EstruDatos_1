#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

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

    LinkedList(const std::initializer_list<int>& init);
    LinkedList(const LinkedList& other);

    ~LinkedList();

    std::string toString() const;
    int size() const;
    void pushBack(int data);
    void pushFront(int data);

    friend std::ostream& operator << (std::ostream& out, const LinkedList& lst);

private:
    Node *head;
    Node *tail;
};

#endif
