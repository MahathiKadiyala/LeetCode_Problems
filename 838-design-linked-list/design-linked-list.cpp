class Node{
  public:
  int data;
  Node* next;
  Node(int x){
    data=x;
    next=nullptr;
  }
};
class MyLinkedList {
public:
Node* head;
int size;
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    //get value at that particular index
    int get(int index) {
        if(index<0 || index>=size) return -1;
        Node* curr=head;
        for(int i=0;i<index;i++) curr=curr->next;
        return curr->data;
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(!head){
            head=newNode;
        }
        else{
            Node* curr=head;
            while(curr->next!=nullptr){
               curr=curr->next;
            }
           curr->next=newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return; 
        Node* newNode = new Node(val);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* curr = head;
            for (int i = 0; i < index - 1; i++) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;
        }
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index<0 || index>=size) return;
        if (index==0) {
            Node* temp=head;
            head=head->next;
            delete temp;
        } else {
            Node* curr=head;
            for (int i=0;i<index-1;i++) {
                curr = curr->next;
            }
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */