#include<iostream>
#define MAX 5
using namespace std;



class list{

    private:
    int n;
    int item;
    int data[MAX];
    int index;

    public:
    list()
    {
         n=0;
         index=0;

    }

    void insert_at_beginning()
    {
        cout<<"Enter item:"<<endl;
        cin>>item;
        for(int i=n; i>0; i--)
        {
            data[i]=data[i-1];

        }
        data[0]=item;
        n++;
    }

    void insert_at_between(){

    }

    void display()
    {
        for(int i=0; i<n; i++)
        {
            cout<<data[i];
        }
    }
};


int main()
{list li;
    int choice;
    do{
        cout<<"\n1.INSERT AT BEGINNING\n2.INSERT IN BETWEEN\n3.INSERT AT THE END\n4.DISPLAY\n5.EXIT"<<endl;
        cout<<"Enter choice:"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
li.insert_at_beginning();
break;







case 4:
li.display();
break;

case 5:
return 0;


            }        }while(choice!=4);
    }
