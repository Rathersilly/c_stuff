//#define INFO cout << '\t' << __PRETTY_FUNCTION__ << " - " << __FILE__ << " - "<< __DATE__ << endl;
#define INFO cout << "\t" << __PRETTY_FUNCTION__ << endl;
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#include <iostream>
#include <fstream>

#include <iomanip>				// setw()
#include <stdexcept>			// std::out_of_range()
#include <string>
#include <string.h>
#include <vector>
using namespace std;

// ppp ch19 ex 12 - file handle class

// file handle class
struct FH {
	string fname;
	ofstream ofs;
	FH(string s) : fname(s) {
		ofs.open(fname);
	}
	~FH() {ofs.close();}



};

FH& operator<<(FH& fh, int x)
{
	fh.ofs << x;
	return fh;
}




int main() {
	FH fh("age_data.txt");
	int x = 5;
	fh << x;
	cout << x;


}

