
#include <iostream>
#include <sstream>
#include "linked_list.h"


template<typename TElem>
LinkedList<TElem>::LinkedList(const std::initializer_list<TElem>& init)
: size_ (init.size(),head(nullptr),tail(nullptr))
{
    Node *n = head;
    int sz = 0;
    while (n != nullptr)
    {
        sz++;
        n = n->next;
    }

    return sz;
}

template<typename TElem>
void LinkedList<TElem>::pushBack(TElem data)
{
    Node *newn = new Node(data);
    if (head == nullptr)
    {
        head = tail = newn;
    }
    else
    {
        tail->next = newn;
        tail = newn;
    }
}

template<typename TElem>
void LinkedList<TElem>::pushFront(TElem data)
{
    Node *newn = new Node(data);
    if (head == nullptr)
    {
        head = tail = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
}

std::string LinkedList::toString() const
{
    std::ostringstream out;
    
    out << "[";
    bool first = true;

    Node *n = head;
    while (n != nullptr)
    {
        if (first) first = false;
        else out << ",";

        out << n->data;
        n = n->next;
    }
    out << "]";
    
    return out.str();
}
template<typename TElem>
void LinkedList<TElem>::sort(){

        
        Node* temp = head; 
  
    
    while (temp!=nullptr) { 
        Node* min = temp; 
        Node* aux = temp->next; 
  
        
        while (aux) { 
            if (min->data > aux->data) 
                min = aux; 
  
            aux = aux->next; 
        } 
  
        
        TElem x = temp->data; 
        temp->data = min->data; 
        min->data = x; 
        temp = temp->next; 
    } 



}
