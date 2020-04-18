#ifndef CircLinkedList_h
#define CircLinkedList_h

#include <iostream>
#include <string>

using namespace std;

class CircLinkedList
{
    private:
    class Node
    {
        public:
        string name;
        int num;
        Node *next;
        Node *prev;
        Node();
    };
    Node *head;
    Node *tail;

    public:
    CircLinkedList();
    ~CircLinkedList();
    void append(string newName, int newNum);
    void removeItem(int position);
    void deleteList();
    void printList();
    void reversePrintList();
    void gameLoop(int passNum, int players);
};

#endif