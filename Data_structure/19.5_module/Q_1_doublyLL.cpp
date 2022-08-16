/* practice module 19.5
doubly linked list operations

creat a doubly Linked list
1. insert at head
2. insert at tail
3. count length
4. display
5. reverse LL
6. insertion at specific position
7. Deletion at Head
8. Deletion at Tail
9. Deletion at a Specific Position
10. search a value (Unique List)
11. Search a value (Duplication enabled List)
12. Deletion by Value (Unique List)
13. ** Deletion by Value(Duplication enabled List)
14. Insertion after a specific value (Unique List)
-------------------------------------------------
********* target:

9.	Insertion after a specific value (Duplication enabled List)


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
    // step 1: go from head to last node
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
// 7. deletion at head
void deleteHead(doublyNode *&head)
{
    head = head->next;
    head->prev = NULL;
}
// 8. deletion at tail
void deleteTail(doublyNode *&head)
{ // if one node
    doublyNode *temp = head;
    if (temp->next == NULL) // may have bug
    {
        delete temp;
    }
    doublyNode *delNode;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    cout << temp->value << " " << temp->next->value << endl;
    delNode = temp->next;
    temp->next = NULL;
    delete delNode;
}
// 9. deletion-any pos including head,tail
void deletion(doublyNode *&head, int pos)
{

    doublyNode *temp = head;
    if (pos == 0)
    {
        head = head->next;
        head->prev = NULL;
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
// 10. search a value-return position(Unique List)
int searchValueUnique(doublyNode *&head, int val)
{
    doublyNode *temp = head;
    int count = 1, flag = 0;
    while (temp != NULL)
    {
        if (temp->value == val)
        {
            flag = 1;
            return count;
        }
        temp = temp->next;
        count++;
    }
    if (flag == 0)
    {
        return 0; // not present
    }
}
// 11. Search a value (Duplication enabled List)
void searchValueDuplicate(doublyNode *&head, int val)
{
    doublyNode *temp = head;
    int count = 1, k = 1;
    int len = countLength(head);
    int arr[len + 1];
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == val)
        {
            arr[k] = count;
            k++;
            flag = 1;
        }
        temp = temp->next;
        count++;
    }
    if (flag == 0)
    {
        cout << "not found in doubly LL" << endl;
        return;
    }
    arr[0] = k;
    for (int i = 1; i < arr[0]; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// 12. Deletion by Value (Unique List)
void deletionByValueUnique(doublyNode *&head, int val)
{
    int pos;
    // search the pos of the value
    pos = searchValueUnique(head, val);
    cout<<pos<<endl;
    // delete at that position
    if (pos == 0)
    {
        cout << "not present in doubly LL" << endl;
    }
    else
    {   pos=pos-1;//as pos is 1 indexed and deletion is 0 indexed
        deletion(head, pos);
    }
}
//13. 
//14. 

//----------------------------------------------------------
main()
{
    doublyNode *head = NULL;
    // choices
    cout << "choice 1: Insertion at Head" << endl;
    cout << "choice 2: Insertion at Tail" << endl;
    cout << "choice 3: Count LL" << endl;
    cout << "choice 4: Display LL" << endl;
    cout << "choice 5: Reverse doubly LL" << endl;
    cout << "choice 6: insertion at a specifi pos doubly LL" << endl;
    cout << "choice 7: Deletion at Head" << endl;
    cout << "choice 8: Deletion at Tail" << endl;
    cout << "choice 9: deletion doubly LL" << endl;
    cout << "choice 10: search a value in doubly LL(Unique List)" << endl;
    cout << "choice 11: search a value in doubly LL(duplicate value List)" << endl;
    cout << "choice 12. Deletion by Value (Unique List)" << endl;

    cout << "choice 20: auto input" << endl;

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
            cout << "deletion at head" << endl;
            deleteHead(head);
            break;
        case 8:
            cout << "deletion at tail" << endl;
            deleteTail(head);
            break;
        case 9:
            cout << "enter pos to delete(0 indexed)" << endl;
            cout << "pos: ";
            cin >> pos;
            deletion(head, pos);
            break;
        case 10:
            cout << "search a value to get position (Unique List)" << endl;
            cout << "value: ";
            cin >> value;
            pos = searchValueUnique(head, value);
            if (pos != 0)
            {
                cout << "position: " << pos << endl;
            }
            else if (pos == 0)
            {
                cout << "value is not in the doubly LL" << endl;
            }
            break;
        case 11:
            cout << "search a value to get position (duplicate value List)" << endl;
            cout << "value: ";
            cin >> value;
            searchValueDuplicate(head, value);
            break;
        case 12:
            cout << "deletion by value (unique value List)" << endl;
            cout << "value: ";
            cin >> value;
            deletionByValueUnique(head, value);
            break;

        case 20:
            insertAtTail(head, 10);
            insertAtTail(head, 20);
            insertAtTail(head, 30);
            insertAtTail(head, 40);
           // insertAtTail(head, 10);
            //insertAtTail(head, 40);
            //insertAtTail(head, 40);
            insertAtTail(head, 50);
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