#pragma once

#pragma once
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <algorithm>


using namespace std;

template <typename T>

class nodo {
public:
	nodo(const T& v) {
		dato = v;
	}

	const T& getValue() {
		return dato;
	}

	void push(const T& v) {
		if (v > dato) {
			if (derecha == NULL) {
				derecha = new nodo(v);
			}
			else
			{
				derecha->push(v);
			}
		}


		if (v < dato) {
			if (izquierda == NULL) {
				izquierda = new nodo(v);
			}
			else
			{
				izquierda->push(v);
			}
		}
	}
	const T& postOrder() {
		if (dato)
		{
			if (izquierda)
			{
				izquierda->postOrder();
			}
			if (derecha)
			{
				derecha->postOrder();
			}
			cout << dato << endl;
		}
			return dato;
	}

	const T& preOrder() {
		if (dato)
		{
			cout << dato << endl;
			if (izquierda)
			{
				izquierda->preOrder();
			}
			if (derecha)
			{
				derecha->preOrder();
			}
			
		}
			return dato;
	}

	const T& enOrder() {
		if (dato)
		{
			if (izquierda)
			{
				izquierda->enOrder();
			}
			cout << dato << endl;
			if (derecha)
			{
				derecha->enOrder();
			}

		}
			return dato;
	}

	int altura(nodo *n) {
		if (n == NULL)
		{
			return -1;
		}
		else
		{
			int AltIzq, AltDer;

			AltDer = altura(n->derecha);
			AltIzq = altura(n->izquierda);

			if (AltIzq > AltDer)
				return AltIzq + 1;
			else
				return AltDer + 1;
		}
	}

private:
	T dato;
	nodo<T> *izquierda;
	nodo<T> *derecha;
	//int altura;
};

