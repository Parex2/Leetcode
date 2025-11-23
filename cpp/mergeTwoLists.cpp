    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        std::vector<int> values;
        while(list1){
            values.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2){
            values.push_back(list2->val);
            list2 = list2->next;
        }
        if(values.empty()){
            return nullptr;
        }
        std::sort(values.begin(), values.end());
        ListNode* result = nullptr;
        ListNode* last_node;
        for(int i = 0; i < values.size(); ++i){
            ListNode* new_node = new ListNode(values[i]);
            if(result){
                last_node->next = new_node;
            }else{
                result = new_node;
            }
            last_node = new_node;
        }

        return result;
    }