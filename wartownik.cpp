#include <iostream>

int main(){

    int *array=NULL, len, number, searched;
    
    std::cout << "Podaj wielkosc tablicy: ";
    std::cin >> len;

    array = new int[len+1];

    for(int i=0;i<len;i++){

        std::cout << "Liczba: ";
        std::cin >> number;
        array[i]= number;
        std::cout << std::endl;

    }

    std::cout << "Jaiej Liczby szukasz?: ";
    std::cin >> searched;
    bool Flag = true;
    int i=0;

    while (Flag)
    {
        if (searched == array[i] or i==len ){
            Flag=false;
            std::cout <<"Wartosc odnaleziona na: "<< i+1 << " indeksie."<<std::endl;
        }
        i++;
    }
    

}