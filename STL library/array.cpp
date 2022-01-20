#include<iostream>
#include<array>

using namespace std;
int main(){

    //basic array implementation
    int basicarray[5] = {2,3,4,6,5};

    // using stl fuction
    array<int, 5> a = {2,3,4,6,5};

    int size = a.size();

    for(int i=0; i<size; i++){
        cout << a[i] << endl;
    }

    cout << endl;

    cout << a.at(2) << endl;

    cout << a.front() << endl;
    cout << a.back()<< endl;
    cout << a.empty() << endl;


    return 0;
}
