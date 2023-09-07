#include <iostream>
#include <vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertNode(Node* &head, vector<int> arr) {
    Node* h = head;
    for (auto x : arr) {
        Node* temp = new Node(x);
        h -> next = temp;
        h = h -> next;
    }
}

void print(Node* head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

//* Middle of Linked List
//? Method 1 -> T.C = O(n)
int getLength(Node* head) {
    int len = 0;
    while(head != NULL) {
        len++;
        head = head -> next;
    }
    return len;
}

Node* getMiddle1(Node* head) {
    int len = getLength(head);
    int mid = len / 2;

    Node* temp = head;
    int cnt = 0;

    while(cnt < mid) {
        temp = temp -> next;
        cnt++;
    }
    return temp;
}

//? Method 2 -> T.C = O(n/2)
Node* getMiddle2(Node* head) {
    if (head == NULL || head -> next == NULL) {
        return head;
    }

    Node* slow = head;
    Node* fast = head -> next;

    while(fast != NULL) {
        fast = fast -> next;
        if (fast != NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
}

int main()
{
    Node* head = new Node(2);
    vector<int> arr = {3, 5, 7, 9};

    insertNode(head, arr);
    print(head);

    Node* mid1 = getMiddle2(head);
    cout << "Middle element: " << mid1 -> data << endl;
    
    return 0;
}