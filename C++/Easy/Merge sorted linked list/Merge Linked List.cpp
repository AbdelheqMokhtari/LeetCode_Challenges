#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	if (list1 == nullptr && list2 == nullptr) {
		return nullptr;
	}
	
	if (list1 == nullptr || list2 == nullptr) {

		if (list1 == nullptr) {
			return list2;
		}
		if (list2 == nullptr) {
			return list1;
		}
		return nullptr;
	}
	ListNode* newList = nullptr;
	if (list1->val <= list2->val) {
		newList = new ListNode(list1->val);
		list1 = list1->next;
	}
	else {
		newList = new ListNode(list2->val);
		list2 = list2->next;
	}
	ListNode* current = newList;
	while (list1 != nullptr && list2 != nullptr) {
		if (list1->val <= list2->val) {
			current->next = new ListNode(list1->val);
			current = current->next;
			list1 = list1->next;
		}
		else {
			current->next = new ListNode(list2->val);
			current = current->next;
			list2 = list2->next;
		}
		
	}
	if (list1 == nullptr && list2 == nullptr) {
		return newList;
	}

	while (list1 != nullptr) {
		current->next = new ListNode(list1->val);
		current = current->next;
		list1 = list1->next;
	}


	while (list2 != nullptr) {
		current->next = new ListNode(list2->val);
		current = current->next;
		list2 = list2->next;
	}

	return newList;

}

int main() {

	// Create linked list {1, 2, 4}
	ListNode* list1 = new ListNode(1);
	list1->next = new ListNode(2);
	list1->next->next = new ListNode(4);

	// Create linked list {1, 3, 4}
	ListNode* list2 = new ListNode(1);
	list2->next = new ListNode(3);
	list2->next->next = new ListNode(4);

	ListNode* MergedList = mergeTwoLists(list1, list2);

	while (MergedList != nullptr) {
		std::cout << MergedList->val << " ";
		MergedList = MergedList->next;
	}
	std::cout << std::endl;




}	


