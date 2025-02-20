#ifndef CLIENTE_H_ABERTO
#define CLIENTE_H_ABERTO
class Cliente {

	private:
		int id;
		int nif;

	public:
		Cliente();
		Cliente(int n, int i);
		Cliente(const Cliente& outro);
		void printDados();
		void setNif(int n);
		int getNif();

};

#endif //CLIENTE_H_ABERTO
