#include <iostream>

using namespace std;

int main(void){

    int array[40]={3,2,9,4,9,3,4,0,1,9,2,4,1,8,4,7,5,9,3,2,7,5,9,7,5,9,7,1,2,7,4,1,8,7,5,0,3,9,6};

    int tmp_val=5, counter=0;
    for (int it=0;it<10;it++){
        int tmp_val=it;

        for (int i=0;i<40;i++){
            if (tmp_val == array[i]){
                counter++;
            }
        }
        cout << "Number of occurrences:"<<tmp_val<<" ,is: "<< counter<<endl;  
        counter=0;     
    }            
    return 0;
}