class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def addTwoNumbers(l1: ListNode, l2: ListNode) -> ListNode:
    l = ListNode()  
    current = l 
    carry = 0 

    while l1 or l2 or carry:
        if l1:
            val1 = l1.val
        else:
            val1 = 0
            
        if l2:
            val2 = l2.val
        else:
            val2 = 0

        total = val1 + val2 + carry
        carry = total // 10
        digit = total % 10

        current.next = ListNode(digit)
        current = current.next

        if l1:
            l1 = l1.next
        if l2:
            l2 = l2.next

    return l.next

if __name__ == "__main__":
    print("Add Two Numbers")