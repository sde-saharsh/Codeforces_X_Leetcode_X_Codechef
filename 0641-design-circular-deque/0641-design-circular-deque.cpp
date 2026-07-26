class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class MyCircularDeque {
public:
    int k;
    int n = 0;
    Node* head1;
    Node* head2;
    MyCircularDeque(int k) {
        this->k = k;
        this->head1 = nullptr;
        this->head2 = nullptr;
    }
    
    bool insertFront(int value) {
        if(n>=k) return false;
        else if(n==0 && n<k){
            Node* newNode = new Node(value);
            head1 = newNode;
            head2 = newNode;
            n++;
            return true;
        } else{
            Node* newNode = new Node(value);
            head1->prev = newNode;
            newNode->next = head1;
            head1 = newNode;
            n++;
            return true;
        }
        return false;
    }
    
    bool insertLast(int value) {
        if(n>=k) return false;
        else if(n==0 && n<k){
            Node* newNode = new Node(value);
            head1 = newNode;
            head2 = newNode;
            n++;
            return true;
        }
        else{
            Node* newNode = new Node(value);
            newNode->prev = head2;
            head2->next = newNode;
            head2 = newNode;
            n++;
            return true;
        }
        return false;
    }
    
    bool deleteFront() {
        if(head1==nullptr) return false;
        else if(n==1){
            head1 = nullptr;
            head2 = nullptr;
            n--;
            return true;
        }else{
            Node* nextNode = head1->next;
            nextNode->prev = nullptr;
            head1 = nextNode;
            n--;
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(head1==nullptr) return false;
        else if(n==1){
            head1 = nullptr;
            head2 = nullptr;
            n--;
            return true;
        } else{
            Node* prevNode = head2->prev;
            prevNode->next = nullptr;
            head2 = prevNode;
            n--;
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(n==0) return -1;
        return head1->data;
    }
    
    int getRear() {
        if(n==0) return -1;
        return head2->data;
    }
    
    bool isEmpty() {
        if(n==0) return true;
        return false;
    }
    
    bool isFull() {
        if(n==k) return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */