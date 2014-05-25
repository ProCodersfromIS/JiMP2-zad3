/**
*\file genM.h
*\author Beata Gie³baga
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
*\ author Beata Gie³baga
*\ date 23.05.2014
*\ brief Definicja klasy abstrakcyjnej genM
*/
class genM {

protected:
	int b, e; /// b-pocz¹tek i e-koniec przedzia³u 
	int s; /// ziarno losowania
	int val; /// wylosowana liczba
	char* genName; /// nazwa generatora

public:
	/// \brief Konstruktor domyœlny
	genM();

	/// \brief Konstruktor klasy
	///
	/// \param _b - pocz¹tek przedzia³u
	/// \param _e - koniec przedzia³u
	genM(int, int);

	/// \brief Destruktor klasy
	~genM();

	/// \brief Metoda losuj¹ca pseudolosow¹ liczbe
	void virtual generate() = 0;

	/// \brief Metoda zwracaj¹ca wylosowan¹ liczbe
	/// \return val - liczbe wylosowan¹
	int getval();

	/// \brief Metoda pozwalaj¹ca na zmianê ziarna losowania
	/// \param _s - ziarno losowania
	/// \return - nic nie zwraca
	void virtual setseed(int);

	/// \brief Metoda zwracaj¹ca wartoœæ ziarna
	/// \return s - ziarno losowania
	int getseed();

	/// \brief Metoda pozwalaj¹ca na zmianê pocz¹tku przedzia³u losowania
	/// \param _b - b, pocz¹tek przedzia³u losowania
	/// \retrun - nic nie zwraca
	void setbegin(int);

	/// \brief Metoda zwracaj¹ca wartoœæ pocz¹tku przedzia³u losowania
	/// \return b - pocz¹tek przedzia³u losowania
	int getbegin();

	/// \brief Metoda pozwalaj¹ca na zmianê koñca przedzia³u losowania
	/// \param _e - e, koniec przedzia³u losowania
	/// \return - nic nie zwraca
	void setend(int);

	/// \brief Metoda zwracaj¹ca wartoœæ koñca przedzia³u losowania
	/// \return e - koniec przedzia³u losowania
	int getend();

	/// \brief Metoda obliczaj¹ca i zwracaj¹ca zakres przedzia³u losowania
	/// \return zakres przedzia³u
	int range();

	/// \brief Metoda wyœwietlaj¹ca wartoœæ val na strumieñ wyjœciowy
	/// \param output - strumieñ wyjœciowy, domyœlnie: cout
	/// \return - nic nie zwraca
	void show(ostream& = cout);

	/// \brief Metoda wyœwietlaj¹ca nazwê generatora na strumieñ wyjœciowy
	/// \param output - strumieñ wyjœciowy, domyslnie: cout
	/// \return - nic nie zwraca
	void getgenName(ostream& = cout);

	/// \brief Metoda zwracaj¹ca ³añcuch znaków bêd¹cych nazw¹ generatora
	/// \return genName - ³añcuch znaków, nazwê generatora
	char* name();
};
// -----------------------------------------------------------------------------
#endif /// GENM_H_