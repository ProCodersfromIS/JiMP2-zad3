/**
*\file gen2.h
*\author Beata Gie³baga
*\date 23.05.2014
*\brief Deklaracja klasy gen2 - generator L'Ecuyer-Fishmana
*/
// -----------------------------------------------------------------------------

#ifndef GEN2_H
#define GEN2_H
#include "genM.h"

// -----------------------------------------------------------------------------
/**
*\class gen2
*\author Beata Gie³baga
*\date 23.05.2014
*\brief Definicja klasy gen2 - generator L'Ecuyer-Fishmana
*/
class gen2 : public genM {

private:
	int s2; ///< drugie ziarno
	int w1, w2; ///< aktualne stany generatora

public:
	/// \brief Konstruktor domyœlny
	gen2();

	/// \brief Konstruktor klasy, domyœlnie ustawia: s,s2 = time(NULL) oraz w1=s,w2=s2
	/// \param _b - b, pocz¹tek przedzia³u losowania
	/// \param _e - e, koniec przedzia³u losowania
	gen2(int, int);

	/// \brief Destruktor klasy
	~gen2(){}

	/// \brief Metoda pozwalaj¹ca na zmianê drugiego ziarna losowania
	/// \param _s2 - s2, drugie ziarno losowania
	/// \return - nic nie zwraca
	void setseed2(int);

	/// \brief Metoda zwracaj¹ca drugie ziarno losowania
	/// \return s2 - drugie ziarno losowania
	int getseed2();

	/// \brief Metoda losuj¹ca pseudolosow¹ liczbe
	/// \return - nic nie zwraca
	void generate();

};
// -----------------------------------------------------------------------------
#endif /// GEN2_H_