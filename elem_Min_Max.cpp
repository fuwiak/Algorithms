// ELEMENT MINIMALNY
#include <iostream>
using std::cin, std::cout, std::endl;

int main(){

    const int len=40;
    int min_elem, min_v=0, array[len] = {30,21,9,43,98,37,41,20,9,200,444,11,8,43,7,51,9,37,24,87,59,69,75,15,9,7,12,20,72,48,21,8,7,25,21,34,9,6,10};
    
    for(int index=1; index < len ; index++){
        min_elem = array[min_v];
        cout << min_elem << endl;
        if(min_elem > array[index])
            min_v = index;
    
    
    } 
    cout << "Element minimalny to: " << min_elem << endl;
   
}