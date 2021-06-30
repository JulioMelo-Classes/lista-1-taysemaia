#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.
/*
ok
*/
int main(void)
{
    int i, num, cont_negativos = 0;

    for(i = 0; i < SIZE; i++){
    	
    	cin >> num;

    	if(num < 0){
    		cont_negativos++;
    	}
    }

    cout << cont_negativos << std::endl;

    return 0;
}
