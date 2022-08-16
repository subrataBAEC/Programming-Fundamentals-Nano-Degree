// Module 17- Linked list deep dive
/*
1.insert at head
2.insert at tail
length calculate
3. insert at a specific position
4. search a value-find position-(no duplication)
5. search a value-find position- (contains duplication value)
5_1. return search array to main()-using struct
6. insert a value after/before a given value(Unique LL)
7. deletetion at Head
8. deletion at tail
9.deletion at specific position
10. delete a value(unique LL)

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
struct Test
{
    int position[1000];
};

void insertAtHead(Node *&head, int val);
void insertAtTail(Node *&head, int val);
void display(Node *head);
int countLength(Node *&head);
void insertAtSpecificPosition(Node *&head, int pos, int val);
int searchValueUnique(Node *&head, int val);
void searchValueDuplicate(Node *&head, int val);
Test searchValueDuplicateReturn(Node *&head, int val);
void insertByValueUnique(Node *&head, int searchValue, int val);
void deletetionAtHead(Node *&head);
void deletionAtTail(Node *&head);
void deleteAtSpecificPosition(Node *&head, int pos);
void deletionByValueUnique(Node *&head, int val);

// insert at head
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
// inset at tail
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    // 2 cases
    // case 1: empty Linked List
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // case 2: already have some lists
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
// display
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->Next;
    }
    cout << endl;
}
// count length
int countLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

// inset at a specific position
void insertAtSpecificPosition(Node *&head, int pos, int val)
{
    Node *temp = head;
    for (int i = 0; i < pos - 2; i++)
    { // traverse untill pos-2
        temp = temp->Next;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
    // cout<<temp->value<<endl;
}

// search a value, find the position -no duplicate value in LL
int searchValueUnique(Node *&head, int val)
{
    Node *temp = head;
    int count = 1; // for counting position
    // travers untill the value is present
    // 2 cases
    // list is empty-nothing to search,exit
    if (head == NULL)
    {
        return -1;
    }
    // case 2
    while (temp->value != val)
    {
        // if value is not presesnt and reached at the end,exit
        if (temp->Next == NULL)
        {
            return -1;
        }
        temp = temp->Next;
        count++;
    }
    return count;
}

// search a value, find the positions -contains duplicate value in LL
void searchValueDuplicate(Node *&head, int val)
{
    Node *temp = head;
    int size = countLength(head);
    // declare array
    int pos[size + 1], j = 1;
    int count = 1, flag = 0;
    while (temp != NULL)
    {
        if (temp->value == val)
        {
            pos[j] = count;
            // cout << count<<" ";
            flag = 1;
            j++;
        }
        temp = temp->Next;
        count++;
    }
    cout << endl;
    if (flag == 0)
    {
        cout << "not present" << endl;
    }
    else
    {
        pos[0] = j;
        cout << "value is at position: ";
        for (int i = 1; i < pos[0]; i++)
        {
            cout << pos[i] << " ";
        }
    }
    cout << endl;
}

// void searchValueDuplicate(Node *&head, int val)
// { just print values with using arrays
//     Node *temp = head;
//     int count=1,flag=0;
//     while (temp != NULL)
//     {
//         if (temp->value == val)
//         {
//             cout << count<<" ";
//             flag=1;
//         }
//         temp = temp->Next;
//         count++;
//     }
//     cout<<endl;
//     if(flag==0){
//         cout<<"not present"<<endl;
//     }
// }

// return searched values to main function-using structure-duplicate value in LL
Test searchValueDuplicateReturn(Node *&head, int val)
{
    Node *temp = head;
    int count = 1;
    Test T;
    int k = 1;
    while (temp != NULL)
    {
        if (temp->value == val)
        {
            T.position[k] = count;
            k++;
        }
        count++;
        temp = temp->Next;
    }
    T.position[0] = k;
    return T;
}

// insert after a specific value-insert by value/search by value (unique LL)
void insertByValueUnique(Node *&head, int searchValue, int val)
{
    Node *temp = head;
    // step 1: find the position of searchValue using- searchValueUnique()
    int a = searchValueUnique(head, searchValue);
    // step 2: insert our value at pos+1 using- insertAtSpecificPosition()
    insertAtSpecificPosition(head, a + 1, val);
    // cout<<"pp"<<a;
}

// deletion at head
void deletetionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        head = temp->Next;
        delete (temp);
    }
    else
    { // list is empty
        cout << "nothing to delete, LL is empty" << endl;
    }
}

// deletion at tail
void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->Next != NULL) // not empty && contains more than one node
    {
        while (temp->Next->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = NULL;
        delete (temp->Next);

        // Node *delNode = temp->Next; // capture the last node
        // delete(temp->Next);
        // temp->Next = NULL;
        // delete (delNode);
    }
    else
    {
        // case 2: LL is full empty
        if (temp == NULL)
            cout << "empty LL" << endl;

        // case 1: LL has one node only(head)- just delete the node
        else //(temp->Next == NULL)
        {
            deletetionAtHead(head);
            cout << "Same head-tail,deleted" << endl;
        }
    }
}

// deletion at specific position-delete node at a specific position
void deleteAtSpecificPosition(Node *&head, int pos)
{
    Node *temp = head;
    // if LL is not null and position is not out of range
    int LL_len = countLength(head);
    if (temp != NULL && pos <= LL_len)
    {
        // pos==1
        if (pos == 1)
        {
            deletetionAtHead(head);
        }
        // pos=len-last node
        else if (pos == LL_len)
        {
            deletionAtTail(head);
        }
        else // any node in between
        {
            int i = 1;
            while (i < pos - 1)
            {
                temp = temp->Next;
                i++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    // LL is empty or pos in undefined-out of range
    else
    {
        if (temp == NULL)
        {
            cout << "LL is empty" << endl;
        }
        else if (pos > LL_len)
        {
            cout << "position out of range" << endl;
        }
    }
}

// delettion by value(unique LL)-delete the given value
void deletionByValueUnique(Node *&head, int val)
{
    // find the position of the node
    int pos;
    pos = searchValueUnique(head, val);
    if (pos == -1) // LL is empty or not found
    {
        cout << "not present in LL" << endl;
    }
    else
    {
        deleteAtSpecificPosition(head, pos);
    }
    // delete the node at that position
}

int main()
{
    Node *head = NULL;
    { // choiches
        cout << "choice 1:Insert at head" << endl;
        cout << "choice 2:Insert at tail" << endl;
        cout << "choice 3:insert at a specific position" << endl;
        cout << "choice 4:search value-no duplicate" << endl;
        cout << "choice 5:search value-contains duplicate" << endl;
        cout << "choice 6:insertion after a specific value(unique value list)" << endl;
        cout << "choice 7:Deletion at Head" << endl;
        cout << "choice 8:Deletion at Tail" << endl;
        cout << "choice 9:Deletion at a specific position" << endl;
        cout << "choice 10:Deletion by value(unique LL)" << endl;
        cout << "choise 20: to display current LL" << endl;
        cout << "choice 0 for exit" << endl;
    }
    cout << endl
         << "enter choice: ";
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
            cout << "enter your value: ";
            cin >> value;
            cout << "enter position: ";
            cin >> pos;
            insertAtSpecificPosition(head, pos, value);
            break;
        case 4:
            cout << "enter value to search-find the position-(unique values in LL): ";
            cin >> value;
            position = searchValueUnique(head, value);
            if (position != -1)
            {
                cout << "found at position: " << position << endl;
            }
            else
            { // not present
                cout << "not found" << endl;
            }
            break;
        case 5:
            cout << "enter value to search-find the position- (duplicate values in LL): ";
            cin >> value;
            cout << "way 1: searched value(without returning):";
            searchValueDuplicate(head, value);

            // part 2: return searched value using structure
            cout << "way 2: searched value(returning to main())" << endl;
            Test T;
            T = searchValueDuplicateReturn(head, value);
            if (T.position[0] == 1)
            {
                cout << "not found" << endl;
            }
            else
            {
                cout << "found at position: ";
                int size = T.position[0];
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i] << " ";
                }
            }
            cout << endl;
            break;
        case 6:
            cout << "insert value after a specific value/search value (unique LL))" << endl;
            cout << "enter a value to insert: ";
            cin >> value;
            cout << "enter the value after which to insert (searchValue): ";
            int searchValue;
            cin >> searchValue;
            insertByValueUnique(head, searchValue, value);
            break;
        case 7:
            deletetionAtHead(head);
            break;
        case 8:
            deletionAtTail(head);
            break;
        case 9:
            cout << "enter the position to delete: ";
            cin >> pos;
            deleteAtSpecificPosition(head, pos);
            break;
        case 10:
            cout << "enter the value to delete(unique LL): ";
            cin >> value;
            deletionByValueUnique(head, value);
            break;

        case 20:
            display(head);
            break;

        default:
            break;
        }
        cout << "next choice: ";
        cin >> choice;
    }
    display(head);
    len = countLength(head);
    cout << "length: " << len;
}