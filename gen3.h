/**
*\file gen3.h
*\author Beata Gie�baga
*\date 23.05.2014
*\brief Deklaracja klasy gen3 - generator Mersenne Twister
*/
// -----------------------------------------------------------------------------

#ifndef GEN3_H
#define GEN3_H
#include "genM.h"

// -----------------------------------------------------------------------------
/**
*\class gen3
*\author Beata Gie�baga
*\date 23.05.2014
*\brief Definicja klasy gen3 - generator Mersenne Twister
*/
class gen3 : public genM {

private:
	unsigned int state[624]; ///< tablica ze stanem generatora
	static int a; ///< licznik

	/// \brief Metoda ustawiaj�ca stan generatora
	/// \return - nic nie zwraca
	void setgen();

	/// \brief Metoda losuj�ca stan generatora
	/// \return - nic nie zwraca
	void genstate();

public:

	/// \brief Konstruktor domy�lny
	gen3();

	/// \brief Konstruktor klasy, domy��nie ustawia: s = time(NULL)
	/// \param _b - b, pocz�tek przedzia�u losowania
	/// \param _e - e, koniec przedzia�u losowania
	gen3(int, int);

	/// \brief Destruktor klasy
	~gen3(){}

	/// \brief Metoda losuj�ca pseudolosow� liczbe
	/// \return - nic nie zwraca
	void generate();

	/// \brief Metoda pozwalaj�ca na zmian� ziarna funkcji oraz uruchamia metode setgen
	/// \param _s - s, ziarno losowania
	/// \return - nic nie zwraca
	void setseed2(int);
};
// -----------------------------------------------------------------------------
#endif /// GEN3_H_