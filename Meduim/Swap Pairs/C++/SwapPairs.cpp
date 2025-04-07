#include <iostream>
#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

// Function to display the linked list
void displayList(ListNode* head) {
    while (head->next != nullptr) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << head->val << std::endl;
}

ListNode* createLinkedList(int size) {
    if (size <= 0) {
        return nullptr;  // Return nullptr for an invalid size
    }

    ListNode* head = nullptr;
    ListNode* current = nullptr;

    std::cout << "Enter values for the linked list:" << std::endl;

    for (int i = 0; i < size; ++i) {
        int value;
        std::cout << "Node " << i + 1 << ": ";
        std::cin >> value;

        ListNode* newNode = new ListNode(value);

        if (current == nullptr) {
            // If it's the first node, set it as the head
            head = newNode;
            current = newNode;
        }
        else {
            // Link the current node to the new node
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}
void swapPairs(ListNode* head) {
    int temp;
    while (head != nullptr && head->next != nullptr) {
        temp = head->val;
        head->val = head->next->val;
        head->next->val = temp;
        head = head->next->next;
    }
}

int main() {

    // Created a linked list manually 
    // Creating nodes
    ListNode* node4 = new ListNode(8);
    ListNode* node3 = new ListNode(7, node4);
    ListNode* node2 = new ListNode(5, node3);
    ListNode* node1 = new ListNode(12, node2);

    // Linking nodes to form the linked list
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // Displaying the linked list
    displayList(node1);

    // Create a linked list using the user input
    ListNode* head = createLinkedList(3);

    // Displaying the linked list created
    displayList(head);

    // swap Pairs 
    swapPairs(head);

    // Display the linked list after swapping Pairs
    displayList(head);

    return 0;
}


