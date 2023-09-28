#include <iostream>
using namespace std;

//* Circular Game
//? Finding the pattern
// n depends on n-1 by adding k and taking mod of it

int solve(int n, int k) {
    if (n == 1) {
        return 0;
    }

    return (solve(n-1, k) + k) % n;
}

int findTheWinner(int n, int k) {
    int ans = solve(n, k) + 1;
    return ans;
}

//* Without Recursion
int findTheWinner1(int n, int k) {
    int ans = 0;
    for (int i=1; i<=n; i++) {
        ans = (ans + k) % i;
    }
    return ans + 1;
}


//* Using Circular Linked List
class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* createList(int n) {
    Node* head = new Node(1);
    Node* temp = head;

    for (int i=2; i<=n; i++) {
        Node* t = new Node(i);
        temp -> next = t;
        temp = temp -> next;
    }

    temp -> next = head;
    return head;
}

int traverseList(int n, int k) {
    Node* head = createList(n);

    while(head -> next != head) {
        for (int i=0; i<k-2; i++) {
            head = head -> next;
        }
        head -> next = head -> next -> next;
        head = head -> next;
    }
    return head -> data;
}

int findTheWinner2(int n, int k) {
    if (k == 1) {
        return n;
    }
    int ans = traverseList(n, k);
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;

    cout << findTheWinner(n, k) << endl;
    
    return 0;
}