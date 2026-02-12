class MyCircularQueue {
public:
    int front;
    int rear;
    int size;
    int count;
    vector<int> data;

    MyCircularQueue(int k) {
        front = 0;        // FIXED: Start at 0 so data[front] is valid
        rear = k - 1;     // FIXED: Start behind 0 so first enqueue moves to 0
        count = 0;
        size = k;
        data.clear();
        data.resize(k);
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        rear = (rear + 1) % size;
        data[rear] = value;
        count++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        front = (front + 1) % size; // FIXED: Changed % 1 to + 1
        count--;
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return data[front];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return data[rear];
    }
    
    bool isEmpty() {
        return (count == 0);
    }
    
    bool isFull() {
        return (count == size);
    }
};