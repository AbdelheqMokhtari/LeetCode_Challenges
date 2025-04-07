#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};
bool hasCycle(ListNode* head) {
	ListNode* fast = head;
	ListNode* slow = head;

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;


		if (fast == slow)
			return true;
	}

	return false;
}

ListNode* detectCycle(ListNode* head) {
	ListNode* fast = head;
	ListNode* slow = head;

	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;


		if (fast == slow) {
			slow = head;
			while (slow != fast) {
				slow = slow->next;
				fast = fast->next;
			}
			return slow;
		}
	}

	return nullptr;
}

// Function to print the linked list
void printLinkedList(ListNode* head) {
	int i = 0;
	while (head != nullptr && i < 10 ) {
		std::cout << head->val << " ";
		head = head->next;
		i++;
	}
	std::cout << std::endl;
}

int main() {
	ListNode* head = new ListNode(3);
	head->next = new ListNode(2);
	head->next->next = new ListNode(0);
	head->next->next->next = new ListNode(-4);
	head->next->next->next->next = head->next;
	printLinkedList(head);
}	


