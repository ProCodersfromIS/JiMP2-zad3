/**
*\file gen3.h
*\author Beata Gie³baga
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
*\author Beata Gie³baga
*\date 23.05.2014
*\brief Definicja klasy gen3 - generator Mersenne Twister
*/
class gen3 : public genM {

private:
	unsigned int state[624]; ///< tablica ze stanem generatora
	static int a; ///< licznik

	/// \brief Metoda ustawiaj¹ca stan generatora
	/// \return - nic nie zwraca
	void setgen();

	/// \brief Metoda losuj¹ca stan generatora
	/// \return - nic nie zwraca
	void genstate();

public:

	/// \brief Konstruktor domyœlny
	gen3();

	/// \brief Konstruktor klasy, domyœ³nie ustawia: s = time(NULL)
	/// \param _b - b, pocz¹tek przedzia³u losowania
	/// \param _e - e, koniec przedzia³u losowania
	gen3(int, int);

	/// \brief Destruktor klasy
	~gen3(){}

	/// \brief Metoda losuj¹ca pseudolosow¹ liczbe
	/// \return - nic nie zwraca
	void generate();

	/// \brief Metoda pozwalaj¹ca na zmianê ziarna funkcji oraz uruchamia metode setgen
	/// \param _s - s, ziarno losowania
	/// \return - nic nie zwraca
	void setseed2(int);
};
// -----------------------------------------------------------------------------
#endif /// GEN3_H_