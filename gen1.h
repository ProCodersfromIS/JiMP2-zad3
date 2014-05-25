/**
*\file gen1.h
*\author Beata Gie�baga
*\date 23.05.2014
*\brief Definicja klasy gen1 - generator wbudowany
*/
// -----------------------------------------------------------------------------

#ifndef GEN1_H
#define GEN1_H
#include "genM.h"

// -----------------------------------------------------------------------------
/**
*\class gen1
*\author Beata Gie�baga
*\date 23.05.2014
*\brief Definicja klasy gen1 - generator wbudowany
*/
class gen1 : public genM {

public:
	/// \brief Konstruktor domy�lny
	gen1();

	/// \brief Konstruktor klasy, domy�lnie ustawia s = time(NULL)
	/// \param _b - b, pocz�tek zakresu losowania
	/// \param _e - e, koniec przedzia�u losowania
	gen1(int,int);

	/// \brief Destruktor klasy
	~gen1(){}

	/// \brief Metoda losuj�ca pseudolosow� liczbe
	/// \return - nic nie zwraca
	void generate();
};
// -----------------------------------------------------------------------------
#endif /// GEN1_H_