class LinkedList {
public:
    LinkedList() {
        head = tail = nullptr;
    }

    int get(int index) {
        Node* start = head;
        int i = 0;
        while(i<index){
            start = start->next;
            if (!start){
                return -1;
            }
            i++;
        }
        if(!start){
            return -1;
        }
        return start->value;
    }

    void insertHead(int val) {
        Node* neww = new Node();
        neww->value = val;
        if(!head){ 
            head = tail = neww;
            return;
            //ovo znaci da je lista prazna;
        }
        else{
            neww->next = head;
            head = neww;
            return;

        }
    }
    
    void insertTail(int val) {
        Node* neww = new Node();
        neww->value = val;
        if(!tail){ 
            head = tail = neww;
            return;
            //ovo znaci da je lista prazna;
        }
        else{
            tail->next = neww;
            tail = neww;
            return;

        }
    }

    bool remove(int index) {
        if(!head){
            return false;
        }
        if(index==0 && head){
            Node* newHead = head->next;
            Node* oldHead = head;
            if (head == tail){
                tail = nullptr;
            }
            delete oldHead;
            head = newHead;
            return true;

        }
        Node* start = head;
        Node* prev = nullptr;
        int i = 0;
        while(i<index){
            prev = start;
            start = start->next;
            if (!start){
                return false;
            }
            i++;
        }
        
        if (start == tail){
            delete tail;
            tail = prev;
            prev->next = nullptr;
            
        }
        else{
            prev->next = start->next;
            delete start;
        }
        return true;

        
        
        
    }

    vector<int> getValues() {
        std::vector<int> ret;
        Node* start = head;
        while(start){
            ret.push_back(start->value);
            start = start->next;
        }
        return ret;

    }

private:
    struct Node{
        Node* next;
        int value;
    };
    Node* head;
    Node* tail;
};
