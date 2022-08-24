#include "Arbol.h"

int main() {
	
	/*
	nodo a(5);
	a.push(4);
	a.push(8);
	a.push(6);
	a.push(7);
	
	a.postOrder();*/


	nodo prueba(5);
	prueba.push(3);
	prueba.push(1);
	prueba.push(2);
	prueba.push(10);
	prueba.push(11);
	prueba.push(8);
	prueba.push(9);
	prueba.push(7);

	//prueba.postOrder();
	prueba.preOrder();
	//prueba.enOrder();


	cout << "\n\n";
	system("pause");
	return 0;
}