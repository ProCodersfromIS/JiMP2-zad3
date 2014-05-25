/**
*\file genM.h
*\author Beata Gie�baga
*\date 23.05.2014
*\brief Deklaracja klasy abstrakcyjnej genM
*/
// -----------------------------------------------------------------------------

#ifndef GENM_H
#define GENM_H
#include <iostream>
using namespace std;
// -----------------------------------------------------------------------------

/**
*\ class genM
*\ author Beata Gie�baga
*\ date 23.05.2014
*\ brief Definicja klasy abstrakcyjnej genM
*/
class genM {

protected:
	int b, e; /// b-pocz�tek i e-koniec przedzia�u 
	int s; /// ziarno losowania
	int val; /// wylosowana liczba
	char* genName; /// nazwa generatora

public:
	/// \brief Konstruktor domy�lny
	genM();

	/// \brief Konstruktor klasy
	///
	/// \param _b - pocz�tek przedzia�u
	/// \param _e - koniec przedzia�u
	genM(int, int);

	/// \brief Destruktor klasy
	~genM();

	/// \brief Metoda losuj�ca pseudolosow� liczbe
	void virtual generate() = 0;

	/// \brief Metoda zwracaj�ca wylosowan� liczbe
	/// \return val - liczbe wylosowan�
	int getval();

	/// \brief Metoda pozwalaj�ca na zmian� ziarna losowania
	/// \param _s - ziarno losowania
	/// \return - nic nie zwraca
	void virtual setseed(int);

	/// \brief Metoda zwracaj�ca warto�� ziarna
	/// \return s - ziarno losowania
	int getseed();

	/// \brief Metoda pozwalaj�ca na zmian� pocz�tku przedzia�u losowania
	/// \param _b - b, pocz�tek przedzia�u losowania
	/// \retrun - nic nie zwraca
	void setbegin(int);

	/// \brief Metoda zwracaj�ca warto�� pocz�tku przedzia�u losowania
	/// \return b - pocz�tek przedzia�u losowania
	int getbegin();

	/// \brief Metoda pozwalaj�ca na zmian� ko�ca przedzia�u losowania
	/// \param _e - e, koniec przedzia�u losowania
	/// \return - nic nie zwraca
	void setend(int);

	/// \brief Metoda zwracaj�ca warto�� ko�ca przedzia�u losowania
	/// \return e - koniec przedzia�u losowania
	int getend();

	/// \brief Metoda obliczaj�ca i zwracaj�ca zakres przedzia�u losowania
	/// \return zakres przedzia�u
	int range();

	/// \brief Metoda wy�wietlaj�ca warto�� val na strumie� wyj�ciowy
	/// \param output - strumie� wyj�ciowy, domy�lnie: cout
	/// \return - nic nie zwraca
	void show(ostream& = cout);

	/// \brief Metoda wy�wietlaj�ca nazw� generatora na strumie� wyj�ciowy
	/// \param output - strumie� wyj�ciowy, domyslnie: cout
	/// \return - nic nie zwraca
	void getgenName(ostream& = cout);

	/// \brief Metoda zwracaj�ca �a�cuch znak�w b�d�cych nazw� generatora
	/// \return genName - �a�cuch znak�w, nazw� generatora
	char* name();
};
// -----------------------------------------------------------------------------
#endif /// GENM_H_