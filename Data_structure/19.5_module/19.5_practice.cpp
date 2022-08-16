/*Module 19.5 practice
Implement the following Operations for a Doubly Linked List using the template code taught in Modules 17, 18, and 19.
1.	Counting the Size
2.	Display List
3.	Insertion at Head
4.	Insertion at Tail
5.	Insertion at Specific Position
6.	Search a value (Unique List)
7.	Search a value (Duplication enabled List)
8.	Insertion after a specific value (Unique List)
9.	Insertion after a specific value (Duplication enabled List)
10.	Deletion at Head
11.	Deletion at Tail
12.	Deletion at a Specific Position
13.	Deletion by Value (Unique List)
14.	Deletion by Value(Duplication enabled List)

creat a doubly Linked list
1. insert at head
2. insert at tail
3. count length
4. print
5. reverse LL
6. insertion
7. deletion

*/

#include <bits/stdc++.h>
using namespace std;

class doublyNode
{
public:
    int value;
    doublyNode *prev;
    doublyNode *next;
    // constructor
    doublyNode(int val)
    {
        value = val;
        prev = NULL;
        next = NULL;
    }
};
// 1. insert at head
void insertAtHead(doublyNode *&head, int val)
{
    doublyNode *temp = head;
    doublyNode *newNode = new doublyNode(val);
    if (temp == NULL) // empty
    {
        head = newNode;
        return;
    }
    else
    {
        // doublyNode *newNode = new doublyNode(val);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}
// 2. insert at tail
void insertAtTail(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        doublyNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}
// 3. length
int countLength(doublyNode *&head)
{
    int count = 1;
    doublyNode *temp = head;
    if (temp == NULL)
    {
        return 0;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
// 4. display
void display(doublyNode *&head)
{
    doublyNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
// 5. reverse LL
void reverse(doublyNode *&head)
{
    doublyNode *temp = head;
    if (temp == NULL)
    {
        cout << "empty doubly LL" << endl;
        return;
    }
    // step 1: go to last node
    while (temp->next != NULL) // dont go fot temp!=NULL
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << temp->value << endl; // to print the last value
    cout << endl;

    // step 2:reverse from last node to head
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}
// 6.insertion-any pos including head,tail
void insertion(doublyNode *&head, int pos, int val)
{
    doublyNode *newNode = new doublyNode(val);
    doublyNode *temp = head;
    if (pos == 0)
    {
        // insertAtHead(head, val);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    else
    {
        // int i=0;
        // while(i<pos-1){
        //     temp=temp->next;
        //     i++;
        // }
        for (int i = 1; i <= pos - 1; i++) // step number=pos-1
        {
            temp = temp->next;
        }
        // fro checking
        //  cout<<temp->value<<endl;
        //  cout<<temp->next->value<<endl;
        // A-B; A-new-B; temp at A; save B first
        doublyNode *save = temp->next;
        temp->next = newNode;
        newNode->next = save;
        if (save != NULL)
        {
            save->prev = newNode;
        }
        newNode->prev = temp;
    }
}
// 7. deletion-any pos including head,tail
void deletion(doublyNode *&head, int pos)
{

    doublyNode *temp = head;
    if (pos == 0)
    {
        head=head->next;
        head->prev=NULL;
    }
    
    else
    {
        for (int i = 1; i <= pos - 1; i++) // step number=pos-1
        {
            temp = temp->next;
        }
        // cout << temp->value;
        // A-B-C;  A-C, temp at A; save C first
        //  doublyNode *delNode=temp->next;
        //  temp->next=delNode->next;
        //  delNode->next->prev=temp;
        //  delete delNode;

        // another method
        doublyNode *save = temp->next->next;
        temp->next = save;
        if (save != NULL) // for tail delete
        {
            save->prev = temp;
        }
    }
}

main()
{
    doublyNode *head = NULL;
    // choices
    cout << "choice 1: Insertion at Head" << endl;
    cout << "choice 2: Insertion at Tail" << endl;
    cout << "choice 3: Count LL" << endl;
    cout << "choice 4: Display LL" << endl;
    cout << "choice 5: Reverse doubly LL" << endl;
    cout << "choice 6: insertion doubly LL" << endl;
    cout << "choice 7: deletion doubly LL" << endl;

    cout << "choice 9:   auto input" << endl;

    cout << "enter choice: ";
    int choice, value, len, pos, position;
    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "enter your value: ";
            cin >> value;
            insertAtHead(head, value);
            break;
        case 2:
            cout << "enter your value: ";
            cin >> value;
            insertAtTail(head, value);
            break;
        case 3:
            cout << "length: ";
            len = countLength(head);
            cout << len << endl;
            break;
        case 4:
            display(head);
            break;
        case 5:
            reverse(head);
            break;
        case 6:
            cout << "enter pos and value to insert(0 indexed)" << endl;
            cout << "pos: ";
            cin >> pos;
            cout << "value: ";
            cin >> value;
            insertion(head, pos, value);
            break;
        case 7:
            cout << "enter pos to delete(0 indexed)" << endl;
            cout << "pos: ";
            cin >> pos;
            deletion(head, pos);
            break;
        case 9:
            insertAtTail(head, 10);
            insertAtTail(head, 20);
            insertAtTail(head, 30);
            insertAtTail(head, 40);
            // doublyNode *head=new doublyNode(10);
            // doublyNode *a=new doublyNode(20);
            // doublyNode *b=new doublyNode(30);
            // doublyNode *c=new doublyNode(40);
            break;
        default:
            break;
        }
        display(head);
        cout << "again input choice: ";
        cin >> choice;
    }
    cout << "final LL" << endl;
    display(head);
}