#include <iostream>
using namespace std;
class MyVector
{
private:
    int length;
    int *arr;
    int cap;

public:
    MyVector(int capacity, int default_value)
    {
        length = cap = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = default_value;
        }
    }
    void pop_back()
    {
        if(length == 0){
            cout<<"vector is empty"<<endl;
        }
        length--;
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void push_back(int val){
        if(length== cap){
            cap = 2*cap;
            int* temp = new int[cap];
            for(int i=0; i<length ; i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;

        }

        arr[length++] = val;
    }

    void set(int idx, int val){
        arr[idx] = val;
    }
    int size()
    {
        return length;
    }
    int capacity(){
        return cap;
    }
    int get ( int idx){
        if(idx<0 || idx>=length){
            cout<<"Index Out of Bound";
            return -1;
        }

        return arr[idx];
    }
};

int main()
{
    MyVector v(5, -1);
    // int arr[5];
    // int* arr = new int[5];
    // arr[0]= 10;
    // arr[1]= 20;
    // int x = 10;
    //  int* p = new int(10);

    // int b[] = {67, 21};

    // int *arr = b;
    // cout << arr[0] << endl;

    v.display();
    v.pop_back();
    v.display();
}