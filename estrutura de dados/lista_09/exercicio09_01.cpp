#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node2 {
    int id;
    Node2(){
        id=0;
    }
    
    void setNode2(int i){
        id = i;
    }
    
    int getNode2(){
        return id;
    }
};

class Node3 {
    int id;
    public:
        Node3(){
            id=2;
        }
        void setNode3(int i){
            id = i;
        }
        int getNode3(){
            return id;
        }
}; 

main(){
    Node3 a1;
    a1.setNode3(4);
    Node3 b1;
    
	b1=a1;
    cout<<b1.getNode3()<<endl;
    
    b1.setNode3(5);
    
    cout<<"b1.getNode3() :"<<b1.getNode3()<<endl;
    cout<<"a1.getNode3():"<<a1.getNode3()<<endl;
}
