#include <OldMoney.hpp>

int main(void){
	OldMoney x;
	x.printValue();
	x.setValues(2,19, 11);
	x.printValue();
	x.setDecimal(3.81);
	x.printValue();
	return 0;
}
