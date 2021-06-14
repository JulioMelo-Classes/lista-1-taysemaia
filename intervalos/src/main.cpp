/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void){

  int x, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0, intervalo5 = 0;
  float i = 0, porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5;

	while(cin >> std::ws >> x){

		i++;

		if(x >= 0 && x < 25){
			intervalo1++;
		}
		else if(x >= 25 && x < 50){
			intervalo2++;
		}
		else if(x >= 50 && x < 75){
			intervalo3++;
		}
  		else if(x >= 75 && x < 100){
			intervalo4++;
		}
		else{
			intervalo5++;
		}
	}
  

  porcentagem1 = (intervalo1 / i) * 100.0;
  porcentagem2 = (intervalo2 / i) * 100.0;
  porcentagem3 = (intervalo3 / i) * 100.0;
  porcentagem4 = (intervalo4 / i) * 100.0;
  porcentagem5 = (intervalo5 / i) * 100.0;

  cout << std::setprecision(4) << porcentagem1 << std::endl;
  cout << std::setprecision(4) << porcentagem2 << std::endl;
  cout << std::setprecision(4) << porcentagem3 << std::endl;
  cout << std::setprecision(4) << porcentagem4 << std::endl;
  cout << std::setprecision(4) << porcentagem5 << std::endl;



  return 0;
}
