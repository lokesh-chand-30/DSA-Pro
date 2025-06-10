#include <iostream>
#define MAX 5
using namespace std;

class queue
{
private:
    int arr[MAX];
    int front, rear, item;

public:
    queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue()
    {
        if (rear == MAX - 1)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            rear++;
            cout << "Enter the items of queue:" << endl;
            cin >> item;
            arr[rear] = item;
        }
    }

    int dequeue()
    {
        if (rear == -1)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            item = arr[front];
            for (int i = 0; i < rear; i++)
            {
                arr[i] = arr[i + 1];
            }
            rear--;
        }
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    queue q;
    int choice;
    do
    {
        cout << "Enter ur choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            return 0;
        }
    } while (choice != 4);
}