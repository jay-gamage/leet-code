# ----------------------------------------------------
#  724. Find Pivot Index (19/08/25); JDG - Py Solution
#  Time complexity : O(n)
#  Space complexity: O(1)
#  ----------------------------------------------------

class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def reverseList(self, head):
        prev = None
        curr = head
        next = None

        while(curr != None):
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next

        return prev

def printList(head):
    while(head != None):
        print(head.val, end=" -> ")
        head = head.next
    print("None")

def createList(values):
    if not values:
        return None
    head = ListNode(values[0])
    curr = head

    for v in values[1:]:
        curr.next = ListNode(v)
        curr = curr.next
    return head

if __name__ == "__main__":
    solution = Solution()

    head = createList([1, 2, 3, 4, 5])

    printList(head)
    head = solution.reverseList(head)
    printList(head)
