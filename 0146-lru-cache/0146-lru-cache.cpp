class LRUCache {
public:
    class Node{
        public:
        int key;
        Node* prev;
        Node* next;
        int value;

        Node(int key,int value){
            this->key=key;
            this->value=value;
            prev=NULL;     
            next=NULL;
        }
    };
    unordered_map<int,Node*> cache;
    int capacity;
    Node* head;
    Node* tail;
    void addToFront(Node* node1){
        node1->next=head->next;
        node1->prev=head;
        head->next->prev=node1;
        head->next=node1;
    }
    void removeNode(Node* node1){
        Node* left= node1->prev;
        Node* right= node1->next;
        left->next=right;
        right->prev=left;
    }
    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(cache.find(key) ==cache.end()){
            return -1;
        }
        Node* node=cache[key];
        removeNode(node);
        addToFront(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(cache.find(key)!=cache.end()){
            Node*node=cache[key];
            node->value=value;
            removeNode(node);
            addToFront(node);
            return;
        }
        if(cache.size()==capacity){
            Node* toDel=tail->prev;
            cache.erase(toDel->key);
            removeNode(toDel);
            delete toDel;
        }
        Node* newNode=new Node(key,value);
        cache[key]=newNode;
        addToFront(newNode);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */