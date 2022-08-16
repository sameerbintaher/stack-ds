#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
     int value;
     Node *next;
     Node *prev;

     Node(int val)
     {
          value = val;
          next = NULL;
          prev = NULL;
     }
};

class Stack
{
     Node *head;
     Node *top;

     // PUSH
     void push(int val)
     {
          Node *newNode = new Node(val);
          if (head == NULL)
          {
               head = top = newNode;
               return;
          }
          top->next = newNode;
          newNode->prev = top;
          top = newNode;
     }

     // POP
     int pop()
     {
          Node *delNode;
          delNode = top;
          int chk = -1;
          if (head == NULL)
          {
               cout << "Stack underflow" << endl;
               return chk;
          }
          if (head == top)
               head = top = NULL;
          else
          {
               top = delNode->prev;
               top->next = NULL;
          }
          chk = delNode->value;
          delete delNode;
          return chk;
     }
};

int main()
{
}