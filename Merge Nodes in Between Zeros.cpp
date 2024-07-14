#include<iostream>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode *next;

        ListNode(int x) {
            this->val = x;
            this->next = nullptr;
        }
};



void singleList(ListNode*& head, ListNode*& tail) {

    int Uinput;
    cout << "Enter the value: ";
    cin >> Uinput;
    // Create the new linked List
    ListNode *newList = new ListNode(Uinput);

    if(head == nullptr) {
        head = newList;
        tail = newList;
    } 
    else {
        tail->next = newList;
        tail = newList;
    }
}

ListNode* mergeNodes(ListNode* head) {

    ListNode *current = head->next; // skip the first 0 node
    ListNode *s = new ListNode(0);  // dummy head for the new list
    ListNode *tail = s;
    int sum = 0;

    while(current != nullptr) {

        if(current->val == 0) {
            tail->next = new ListNode(sum);
            tail = tail->next;
            sum = 0;
        } 

        else {
            sum += current->val;
        }

        current = current->next;
    }

    // skip the dummy head
    return s->next;
}

void displayList(ListNode* head) {
    ListNode *curr = head;
    while(curr != nullptr) {
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;  // indicate end of list
}

int main() {

    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    
    int size;
    cout << "Enter the size of the Linked list: ";
    cin >> size;

    for(int i = 0; i < size; i++) {
        // build the single linked list
        singleList(head, tail);
    }

    // display the single linked list
    cout << "Original list: ";
    displayList(head);

    head = mergeNodes(head);

    // display the merged linked list
    cout << "Merged list: ";
    displayList(head);

    return 0;
}
