#include <iostream>

using namespace std;

//#01: Definição da Classe 
class nomeClasse {
	//#02: Declaração de membros privados (dados e funções) da classe
	private:
		int valorPrivado;
		
	//#03: Declaração de membros plublicos (dados e funções) da classe
	public:
		int valorPublico;
		
		void funcaoPublica() {
			cout<<"Esta é  minha primeira função"<< endl;
			}
}; // fim da classe 'nomeClasse', com terminador';'

int main() {
	//#04: Criação de um objeto de tipo classe
	nomeClasse objectNovo;
	nomeClasse outroObjeto;
	
	//#05: Podemos aceder e modificar os dados de um objeto publico
	objectNovo.valorPublico = 10;
	
	//#06: E também podemos usar as funções definidas dentro da classe
	objectNovo.funcaoPublica();
	outroObjeto.funcaoPublica();
	
	return 0;
	
}