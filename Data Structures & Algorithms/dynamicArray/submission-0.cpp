class DynamicArray {
public:

    DynamicArray(int capacity): cap(capacity) {
        arr = new int[capacity];
        size = 0;
    }

    int get(int i) {
        return *(arr+i);
    }

    void set(int i, int n) {
        
        arr[i] = n;
    }

    void pushback(int n) {
        if (size==cap){
            resize();
        }
        arr[size++] = n;
    }

    int popback() {
        return arr[--size];
    }

    void resize() {
        int* t = arr;
        cap *=2;
        arr = new int[cap];
        for (int i = 0 ; i < size ; i++){
            arr[i] = t[i];
        }
        delete []t;
        return;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }
    ~DynamicArray() {
        delete[] arr;
    }
private:
    int* arr;
    int cap;
    int size;
};
