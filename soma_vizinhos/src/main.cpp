/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*
ok
*/
int main( void ){
    int i, n, m, somador = 0; 
  	
    while(cin >> std::ws >> n >> std::ws >> m){
        if (m > 0){
    		for(i = n; i < n + m; i++){          
        		somador += i;
        }
        
      cout << somador << std::endl; 
      somador = 0;
    }

    else if(m == 0){
      somador += n;
      cout << somador << std::endl;
      somador = 0;
    }

  	else if(m < 0){

    	for(i = n; i >= (n +(m +1)); i--){
    		somador += i;
    	}
      cout << somador << std::endl;
      somador = 0;
    }
    
  }

    return 0;
}
