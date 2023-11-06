#include "Minit.h"
#include <iostream>
using namespace std;
Minit::Minit(int a, int b)
:regMinit(a),constMinit(b)
{

}
void Minit::print(){
cout << "Regular Variable = " << regMinit << " ---- " << "Constant Variable = " << constMinit << endl;
}
