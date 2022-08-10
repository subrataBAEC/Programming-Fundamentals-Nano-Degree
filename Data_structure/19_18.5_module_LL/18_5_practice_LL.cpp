/* Operations on Linked List
1.	Counting the Size
2.	Display List
3.	Insertion at Head
4.	Insertion at Tail
5.	Insertion at Specific Position
6.	Search a value (Unique List)
7.	Search a value (Duplication enabled List)
8.	Insertion after a specific value (Unique List)
9.	***Insertion after a specific value (Duplication enabled List)
10.	Deletion at Head
11.	Deletion at Tail
12.	Deletion at a Specific Position
13.	Deletion by Value (Unique List)
14.	***Deletion by Value(Duplication enabled List)
*/
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    // constructor
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
int countLength(Node *&head);
void display(Node *&head);
// insertion
void insertionAtHead(Node *&head, int val);
void insertionAtTail(Node *&head, int val);
void insertAtspecificPosition(Node *&head, int pos, int val);
void insertionAfterValueUnique(Node *&head, int searchValue, int val);
// search
int searchValueUnique(Node *&head, int val);
void searchValueDuplicate(Node *&head, int val);
// deletion
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deleteAtSpecificPosition(Node *&head, int pos);
void deletionByValueUnique(Node *&head, int searchVal);

// 1. count length
int countLength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
        // cout << "len" << endl;
    }
    return count;
}
// 2. display
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->Next;
    }
    cout << endl;
}
// 3. insertion at head
void insertionAtHead(Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
// 4. insertion at tail
void insertionAtTail(Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    // case 1:if LL is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // case 2: LL has some nodes
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
// 5. Insertion at a Specific Position
void insertAtspecificPosition(Node *&head, int pos, int val)
{                 // pos 1 and 2 causes problem,so they need to handle separately
    if (pos == 1) // head
    {
        insertionAtHead(head, val);
        return;
    }
    // works from pos 2
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->Next;
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
// 6. Search a value (Unique List)
int searchValueUnique(Node *&head, int val)
{ //// method 1:
    // Node *temp = head;
    // int len = countLength(head);
    // int count = 1;
    // for (int i = 1; i <= len; i++)
    // {
    //     if (temp->value == val)
    //     {
    //         return i;
    //     }
    //     else
    //     {
    //         temp = temp->Next;
    //     }
    // }
    // return -1; // not in LL

    // method 2: using while loop
    Node *temp = head;
    // case 1-empty LL
    if (temp == NULL)
    {
        return -1;
    }
    int count = 1;
    while (temp->value != val)
    {
        if (temp->Next == NULL)
        { // value not in LL
            return -1;
        }
        count++;
        temp = temp->Next;
    }
    return count;
}
// 7. Search a value (Duplication enabled List)
void searchValueDuplicate(Node *&head, int val)
{
    Node *temp = head;
    int len = countLength(head);
    int array[len + 1];
    int count = 1, k = 1;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->value == val)
        {
            array[k] = count;
            k++;
            flag = 1;
        }
        temp = temp->Next;
        count++;
        // cout<<k<<" "<<count<<endl;
    }
    if (flag == 0)
    {
        cout << "not in LL" << endl;
        return;
    }
    else
    {
        array[0] = k;
        cout << "found at position: ";
        for (int i = 1; i < array[0]; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}
// 8. Insertion after a specific value (Unique List)
void insertionAfterValueUnique(Node *&head, int searchValue, int val)
{
    Node *temp = head;
    // find positon of value
    int pos = searchValueUnique(head, searchValue);
    if (pos == -1)
    {
        cout << "value not in LL" << endl;
    }
    else
    { // insert after that position
        insertAtspecificPosition(head, pos + 1, val);
    }
}
// 10. Deletion at head
void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp == NULL) // empty
    {
        cout << endl
             << "nothing to delete" << endl;
        return;
    }
    head = temp->Next;
    delete temp;
}
// 11.	Deletion at Tail
void deletionAtTail(Node *&head)
{

    Node *temp = head;
    if (temp == NULL) // empty
    {
        cout << endl
             << "nothing to delete" << endl;
        return;
    }
    while (temp->Next->Next != NULL)
    {
        temp = temp->Next;
    }
    Node *delnode = temp->Next;
    temp->Next = NULL;
    delete delnode;
}
// 12. Deletion at a Specific Position
void deleteAtSpecificPosition(Node *&head, int pos)
{
    Node *temp = head;
    int len = countLength(head);
    if (temp != NULL and pos <= len)
    {
        // pos==0, delete head
        if (pos == 1)
        {
            deletionAtHead(head);
        }
        // if tail deletion
        else if (pos == len)
        {
            deletionAtTail(head);
        }
        // any node except head and tail
        else
        {
            int i = 1;
            while (i < (pos - 1))
            {
                temp = temp->Next;
                i++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        // LL is empty
        if (temp == NULL)
            cout << "LL is empty" << endl;
        else if (pos > len)
            cout << "out of range" << endl;
    }
}
// 13. Deletion by Value (Unique List)
void deletionByValueUnique(Node *&head, int searchVal)
{
    Node *temp = head;
    // find the position of the search value
    int pos;
    pos = searchValueUnique(head, searchVal);
    if (pos == -1)
    {
        cout << "value is not in the LL" << endl;
        return;
    }
    // delete node at that position
    else
    {
        deleteAtSpecificPosition(head, pos);
    }
}

int main()
{
    Node *head = NULL;
    // choices
    cout << "all positions start from 1" << endl;
    cout << "choice 1: Count LL" << endl;
    cout << "choice 2: Display LL" << endl;
    cout << "choice 3: Insertion at Head" << endl;
    cout << "choice 4: Insertion at Tail" << endl;
    cout << "choice 5: Insertion at a specific position" << endl;
    cout << "choice 6: Search value (unique LL)" << endl;
    cout << "choice 7: Search value (duplicate LL)" << endl;
    cout << "choice 8: Insertion after a specific value (Unique List)" << endl;
    cout << "choice 10: Deletion at Head" << endl;
    cout << "choice 11: Deletion at Tail" << endl;
    cout << "choice 12: Deletion at a Specific Position" << endl;
    cout << "choice 13:	Deletion by Value (Unique List)" << endl;

    cout << "choice 22: populate-values 1 2 3 4 5" << endl;

    cout << endl;
    int choice;
    cout << "enter choice: ";
    cin >> choice;
    int value, position;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "length of Linked List: ";
            int len;
            len = countLength(head);
            cout << len << endl;
            break;
        case 2:
            display(head);
            break;
        case 3:
            cout << "enter value to insert at head: ";
            cin >> value;
            insertionAtHead(head, value);
            break;
        case 4:
            cout << "enter value to insert at tail: ";
            cin >> value;
            insertionAtTail(head, value);
            break;
        case 5:
            cout << "enter value to insert at a specific position: ";
            cin >> value;
            cout << "enter position: ";
            cin >> position;
            insertAtspecificPosition(head, position, value);
            break;
        case 6:
            cout << "enter value to search (unique LL): ";
            cin >> value;
            int pos;
            pos = searchValueUnique(head, value);
            if (pos != -1)
                cout << "found at: " << pos << endl;
            else
                cout << "not found" << endl;
            break;
        case 7:
            cout << "enter value to search (dupliacte LL): ";
            cin >> value;
            searchValueDuplicate(head, value);
            break;
        case 8:
            cout << "ennter searchValue and  value to insert (Unique List): " << endl;
            int searchValue;
            cout << "enter searchValue: ";
            cin >> searchValue;
            cout << "enter value: ";
            cin >> value;
            insertionAfterValueUnique(head, searchValue, value);
            break;
        case 10:
            cout << "deletion at head";
            deletionAtHead(head);
            cout << endl;
            break;
        case 11:
            cout << "deletion at tail";
            deletionAtTail(head);
            cout << endl;
            break;
        case 12:
            cout << "deletion at a specific position" << endl;
            cout << "enter position: ";
            cin >> position;
            deleteAtSpecificPosition(head, position);
            break;
        case 13:
            cout<<"deletion by value,enter value: ";
            cin>>value;
            deletionByValueUnique(head,value);
            break;
        case 22:
            value = 1;
            insertionAtTail(head, value);
            value = 2;
            insertionAtTail(head, value);
            value = 3;
            insertionAtTail(head, value);
            value = 4;
            insertionAtTail(head, value);
            value = 5;
            insertionAtTail(head, value);
            break;

        default:
            break;
        }
        display(head);
        cout << "next choice: ";
        cin >> choice;
    }
    cout << endl
         << "Final Linked List" << endl;
    display(head);
}
