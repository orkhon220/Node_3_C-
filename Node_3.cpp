#include <iostream>

int main() {
    int h1, h2, h3;

    do{
        std::cout <<"Please specify a certain time from 0:00 to 23:00 : ";
        std::cin>> h1;
    } while ( h1 < 0 || h1 > 23 );

    std::cout <<"Please specify the start time : ";
    std::cin>> h2;

    std::cout <<"Please specify the end time : ";
    std::cin>> h3;

    if(h2 < h3){

        if(h1 >= h2 && h1 < h3)
            std::cout << h1 <<" is included between "<< h2 <<" to " << h3;
        else
            std::cout << h1 <<" is not included between " << h2 <<" to " <<h3;
    }

    else if(h2 > h3){
        h1+=24;
        h3+=24;

        if(h1 >= h2 && h1 < h2)
            std::cout << h1-24 <<" is Included " << h2 <<" to " << h3-24;
        else
            std::cout << h1-24 <<" is Not included " << h2 <<" to " <<h3-24;
    }

    else if(h2 == h3 && h1 == h3)
        std::cout << h1 <<" is Included  " << h2 <<" to " << h3;

    return 0;
}
