#include <iostream>
#include "ixj0644_Controller.h"
#include "ixj0644_View.h"
#include "ixj0644_Pea_Plant.h"

using namespace std;

int main(){
	Pea_Plant pp{};

	View v{pp};
	Controller ctr(pp, v);
	ctr.cli();

    return 0;
}
