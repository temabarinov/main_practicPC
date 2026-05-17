#include "common.h"


struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next){}
};
class Solution {
public:
    std::vector<int>& addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::vector<int> a{};
        std::vector<int> b{};
        ListNode* a1;
        while (a1->next != nullptr) {
            a1 = l1;
            a.push_back(a1->val);
            a1 = a1->next;
            


        }
        return a;

        

    }
};


int main() {
    ListNode a;
    ListNode b;
    a.val = 10;
    b.val = 20;
    ListNode a1(20, a);
    Solution d;
    std::vector<int> arr = d.addTwoNumbers(&a, &b);


	return 0;
}