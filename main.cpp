#include <cstdlib>
#include <iostream>

bool true_function(){
    std::cout<<"This is our true function"<<std::endl;
    return true;
}

bool false_function(){
    std::cout<<"This is our false function"<<std::endl;
    return false;
}

int main(){

    // while, do while, for

    /*int i = 0;
    for(;;){
        if(i < 10){
        std::cout<<i<<std::endl;
        }
        else{
            break;
        }
        ++i;
    }*/

    int i = 0;
    while(i<10){
        std::cout<<i<<std::endl;
        ++i;
    }
    std::cout<<std::endl;

    i = 0;
    do{
        std::cout<<i<<std::endl;
        ++i;
    }while(i<10);

    std::cout<<std::endl;
    i = 0;
    do{
        std::cout<<i<<std::endl;
        ++i;
    }while(i>100);

    std::cout<<std::endl;
    for(int i = 0, j=1; j==1 || i>100; ++i, j=0){
         std::cout<<i<<std::endl;
    }

    //break, continue

    std::cout<<"Loop start"<<std::endl;
    for(int i = 0; i < 10; ++i){
        break;
        std::cout<<i<<std::endl;
    }
    std::cout<<"Loop end"<<std::endl;

    std::cout<<"Loop start"<<std::endl;
    for(int i = 0; i < 10; ++i){
        std::cout<<i<<std::endl;
        continue;
        std::cout<<"Invisible line"<<std::endl;
    }
    std::cout<<"Loop end"<<std::endl;

    if(true_function() | false_function()){
        std::cout<<"Inside if"<<std::endl;
    }

    if(true_function() || false_function()){
        std::cout<<"Inside if"<<std::endl;
    }

    //const constexpr
    constexpr int a = 10;
    //a=20;

    int input = 0;
    std::cout<<"Please, enter the input >";
    //std::cin>>input;
    //const int b = input;
    //std::cout<<"b="<<b<<std::endl;

    std::cout<<std::endl;
    int empty_variable;
    //empty_variable=0;
    std::cout<<"empty_variable "<<empty_variable<<std::endl;

    //arrays
    int array_size = 10;
    //std::cin>>array_size;
    int array_1[array_size]={-1,1,2,3,4,5,6,7,8,9};
    //int array_1[array_size];
    int array_2[10]={};

    for(int i = 0; i<array_size; ++i){
        std::cout<<array_1[i]<<" ";
    }

    std::cout<<std::endl;
    for(int i = 0; i<10; ++i){
        std::cout<<array_2[i]<<" ";
    }

    std::cout<<std::endl;
    //array_1[0] = *((array_1) + (0))
    std::cout<<array_1[0]<<" "<<0[array_1]<<std::endl;

    std::cout<<sizeof(array_2)<<std::endl;


    return 0;
}
