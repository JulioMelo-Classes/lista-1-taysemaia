#include "function.h"
using namespace std;

/*
ok
*/
vector<unsigned int> fib_below_n(unsigned int n)
{

    vector<unsigned int> fibonacci;

    unsigned inicio = 1, inicio2 = 1, soma;

    if (n > 1)
    {
        fibonacci.push_back(inicio);
        fibonacci.push_back(inicio2);

        for (soma = 0; (inicio + inicio2) < n; soma++)
        {
            soma = inicio + inicio2;
            fibonacci.push_back(soma);

            inicio = inicio2;
            inicio2 = soma;
        }
    }

    return vector<unsigned int>{fibonacci};
}
