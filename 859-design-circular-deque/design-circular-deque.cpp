class MyCircularDeque {
public:
    vector<int>q;
    int front;
    int rear;
    int capacity;
    int size;
    MyCircularDeque(int k) {
        capacity=k;
        front=0;
        rear=-1;
        size=0;
        q=vector<int>(k);
    }
    bool insertFront(int value) {
         if (isFull()) return false;
        front=(front-1+capacity)%capacity; 
        q[front]=value;
        size++;
        if(size==1) rear=front; 
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        rear=(rear+1+capacity)%capacity; 
        q[rear]=value;
        size++;
        if(size==1) front=rear;
        return true;
    }
    
    bool deleteFront() {
         if(isEmpty()){
            return 0;
        }
        front=(front+1)%capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
         if(isEmpty()){
            return 0;
        }
        rear=(rear-1+capacity)%capacity;
        size--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        else return q[front];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        else return q[rear];
    }
    
    bool isEmpty() {
        return (size==0);
    }
    
    bool isFull() {
        return (size==capacity);
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