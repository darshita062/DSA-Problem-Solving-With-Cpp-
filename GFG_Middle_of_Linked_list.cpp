int getMiddle(Node* head) {
        // code here
        int size = 0;
        Node* curr = head;
        while(curr!=nullptr){
            size++;
            curr = curr->next;
        }
        int mid = size/2;
        if (mid%2==0){
            Node* res = head;
            for (int i=0;i<mid;i++){
                res = res->next;
            }
            return res->data;
        }else{
            Node* res = head;
            for (int i=0;i<=mid-1;i++){
                res = res->next;
            }
            return res->data;
        }
    }