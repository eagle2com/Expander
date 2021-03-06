#pragma once
#include "LiteralElement.h"
#include <vector>
#include <string>

typedef std::vector<LiteralElement*> ElementVec;
typedef ElementVec::iterator ElementVecIt;

class TransferFunction
{
public:
	TransferFunction(void);
	~TransferFunction(void);
	void AddNum(void);
	void RemoveNum(int n);

	void AddDenom(void);
	void RemoveDenom(int n);
	
	void FindFactors(bool verbose = true);
	void PrintFactors(void);
	void NicePrintFactors(void);
	void LoadFromFile(std::string filename); // loads coefs and powers from a file
	void Clean(void);
	void Interactive(void); //asks for coefficients and powers
	void TextInput(void); //normal text interpretation

private:
	ElementVec numerator;
	ElementVec denominator;
	long double* factors;
	long double* correct_factors;
};

