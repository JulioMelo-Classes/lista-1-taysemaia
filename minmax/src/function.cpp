#include "function.h"
using namespace std;


/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
Ok
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{   
       
    int i, menor, maior, ind1 = 0, ind2 = 0;

    menor = V[0];
    maior = V[0];

    if(n == 0){
        return {-1, -1};
    }

    for(i = 0; i < n; i++){         

        if(V[i] < menor){
            menor = V[i];
            ind1 = i;
        }
        else{
            menor = menor;
        }
        if(V[i] >= maior){
            maior = V[i];
            ind2 = i;
        }
        else{ //desnecessário, bem como o de cima...
            maior = maior;
        }
    }

    return { ind1, ind2 };
}
