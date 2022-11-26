#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    //First sequence taking input & listing them
    int n1, n2, item;
    cout << "Enter number of elements in the first sequence :";
    cin >> n1;
    while(n1%2 != 0){
        cout << "Enter Only Even Numbers. Try again! : ";
        cin >> n1;
    }
    UnsortedType <int> u1;
    cout << "Enter The Elements Of First Sequence: ";
    for(int i=0;i<n1;i++){
        cin >> item;
        u1.InsertItem(item);
    }
    cout << "Inputed Items are: ";
    u1.PrintList();
    cout << endl;
    cout << endl;
    //First sequence ENDs Here


    //Second sequence taking input & listing them
    cout << "Enter number of elements in the Second sequence :";
    cin >> n2;
    while(n2%2 != 0){
        cout << "Enter Only Even Numbers. Try again! : ";
        cin >> n2;
    }
    UnsortedType <int> u2;
    cout << "Enter The Elements Of Second Sequence: ";
    for(int i=0;i<n2;i++){
        cin >> item;
        u2.InsertItem(item);
    }
    cout << "Inputed Items are: ";
    u2.PrintList();
    //Second sequence ENDs Here


    //Sorting and Listing them into linked list object3
    UnsortedType <int> u3;
    int n3 = 1;
    int itemFromU2, itemFromU1;
    u1.GetNextItem(itemFromU1);
    u2.GetNextItem(itemFromU2);
    for(int i=0;i<(n1+n2)-2;i++){
        if(itemFromU2 > itemFromU1){
            u3.InsertItem(itemFromU2);
            u2.GetNextItem(itemFromU2);
        }else{
            u3.InsertItem(itemFromU1);
            u1.GetNextItem(itemFromU1);
        }
    }
    if(itemFromU2 > itemFromU1){
        u3.InsertItem(itemFromU2);
        u3.InsertItem(itemFromU1);
    }else{
        u3.InsertItem(itemFromU1);
        u3.InsertItem(itemFromU2);
    }

    cout << endl;
    cout << endl;
    cout << "New Combined & Sorted Linked List is : " << endl;
    u3.PrintList();
    //Sorting Ends

    return 0;
}















