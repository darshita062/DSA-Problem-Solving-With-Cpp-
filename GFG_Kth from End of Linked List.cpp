int getKthFromLast(Node *head, int k) {
        // Your code here
        int size = 0;
        Node* curr = head;
        while (curr!=nullptr){
            size++;
            curr = curr->next;
        }
        if(size==0||size<k){
            return -1;
        }
        Node* res = head;
        for (int j=0;j<size-k;j++){
            res = res->next;
        }
        return res->data;
    }