#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int age;
        virtual void getdata(){};
        virtual void putdata(){};
};

class Professor:public Person{
    public:
        int publication,id;
        static int cur_id;
        virtual void getdata(){
            cur_id++;
            cin>>name>>age>>publication;
            id=cur_id;
        }
        virtual void putdata(){
            cout<<name<<" "<<age<<" "<<publication<<" "<<id<<endl;
        }
}; 
//initializing professor cur_id
int Professor::cur_id=0;

class Student: public Person{
    public:
        int subject[6];
        static int cur_id;
        int id,sum=0;
        virtual void getdata(){
            cur_id++;
            cin>>name>>age;
            id=cur_id;
            for(int i=0;i<6;i++){
                cin>>subject[i];
                sum+=subject[i];
            }
        }
        virtual void putdata(){
            cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
        }
};
//initializing student cur_id
int Student::cur_id=0;



int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
