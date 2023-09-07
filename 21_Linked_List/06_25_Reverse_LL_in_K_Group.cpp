#include <iostream>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* next;

    ListNode(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

ListNode* reverseKGroup(ListNode* head, int k) {
    // base case
    if (head == NULL) {
        return NULL;
    }

    // step1: reverse first k nodes
    ListNode* next = NULL;
    ListNode* curr = head;
    ListNode* prev = NULL;
    int count = 0;

    // count the number of nodes in the current group
    while(curr != NULL && count < k) {
        curr = curr -> next;
        count++;
    }

    if (count < k) {
        return head;
    }

    curr = head;
    count = 0;

    while(curr != NULL && count < k) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // setep2: Recursion call for the remaining linked list
    if (next != NULL) {
        head -> next = reverseKGroup(next, k);
    }

    // step3: return head of reversed ll
    return prev;
}

int main()
{
    
    
    return 0;
}