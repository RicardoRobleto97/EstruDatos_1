#include <iostream>
#include "linked_list.h"

int LinkedList::size() const
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

void LinkedList::pushBack(int data)
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

void LinkedList::pushFront(int data)
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
LinkedList::Node* LinkedList::find(int elem){

    Node *n=head;
    //Node* elem;
    while(n!=nullptr){

            if(elem !=n->data){

                int valor=n->data;

                std::cout<< valor<<"";
                return n;

            }

}
LinkedList::Node*LinkedList::findMin(){

    Node* elem;
    Node *n=head;
    while (n!=nullptr )
    {
        
        if(elem->data<n->data){

                
  //           std::cout<<<<"";

            return elem;
        }

        n=n->next;



    }
    

}
LinkedList::Node*LinkedList::findMax(){

    Node* elem;
    Node *n=head;
    while (n!=nullptr )
    {
        
        if(elem->data>n->data){

                
  //           std::cout<<<<"";

            return elem;
        }

        n=n->next;



    }
    

}
void LinkedList::print() const
{


    std::cout << "[ ";
    bool first = true;

    Node *n = head;
    while (n != nullptr)
    {
        if (first) first = false;
        else std::cout << ", ";

        std::cout << n->data;
        n = n->next;
    }
    std::cout << " ]";
}