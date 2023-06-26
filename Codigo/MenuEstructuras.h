#ifndef __MENUESTRUCTURAS
#define __MENUESTRUCTURAS

#include "Ca�on.h"
#include "Torre.h"
#include "TerrenoEstructuras.h"

#include <deque>

class TerrenoEstructuras;

class MenuEstructuras {
private:
	igvPunto3D posicion;
	Ca�on* c;
	Torre* t;
	TerrenoEstructuras* myTerreno;

public:
	//Constructor y Destructor
	MenuEstructuras();
	MenuEstructuras(Ca�on* _c, Torre* _t);
	~MenuEstructuras();

	void mostrarMenu();

	Ca�on* getCa�on() {
		return c;
	}

	Torre* getTorre() {
		return t;
	}

	void setCa�on(Ca�on* _c) {
		c = _c;
	}

	void setTorre(Torre* _t) {
		t = _t;
	}

	void setTerreno(TerrenoEstructuras* _myTerreno) {
		myTerreno = _myTerreno;
	}

	TerrenoEstructuras* getTerreno() {
		return myTerreno;
	}
};

#endif
