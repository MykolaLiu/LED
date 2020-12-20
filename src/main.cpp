#include <iostream>
#include "persister.h"
#include "utils.h"

using namespace std;

int main() {
    Persister<2> persister;
    persister.set(0, 0xBBCCDDU);
    //persister.dump();
    cout << std::hex << persister.get(0) << endl;
	return 0;
}
