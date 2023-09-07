#include <iostream>
#include <vector>
#include "_Singly_Linked_List_Boiler_Plate.cpp"
using namespace std;

//* Check Linked List is Palindrome or not
//? Method1 -> Convert LL to array and check on that => T.C = O(n), S.C = O(n)

bool checkPalindrome(vector<int> arr) {

    int size = arr.size();
    int s = 0;
    int e = size - 1;

    while(s <= e) {
        if (arr[s] != arr[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool isPalindrome(Node* head) {
    vector<int> arr;

    Node* temp = head;
    while(temp != NULL) {
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    return checkPalindrome(arr);
}

//? Method2 -> find middle -> reverse LL after middle -> compare both halves => T.C = O(n), S.C = O(1)

Node* getMid(Node* head) {
    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

Node* reverse(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome2(Node* head) {
    if (head -> next == NULL) {
        return true;
    }

    //step 1 -> find middle
    Node* middle = getMid(head);

    //step2 -> reverse list after middle
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    //step3 -> compare both halves
    Node* head1 = head;
    Node* head2 = middle -> next;

    while(head2 != NULL) {
        if (head1 -> data != head2 -> data) {
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    //step4 -> repeat step2 (Optional)
    temp = middle -> next;
    middle -> next = reverse(temp);

    return true;
}


int main()
{
    
    
    return 0;
}