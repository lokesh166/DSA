#include<iostream>
using namespace std;

void reachHome(int src, int des){
    cout << src << "to" << des << endl;;
    if(src == des){
        cout << "reach destination";
        return;
    }
    src++;
    reachHome(src,des);
}

int main(){
    
    int src = 1;
    int des = 10;
    
    reachHome(src, des);
    
    return 0;
}
