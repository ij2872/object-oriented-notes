#ifndef ALLELEH
#define ALLELE_H

#include <iostream>

class Allele
{
	public:
		Allele() {};
		Allele(char l, bool d) : letter(l), dominance(d) {};
		char get_letter() const;
		bool get_dominance() const;
		friend std::ostream& operator<<(std::ostream&, const Allele&);
		
	protected:
		char letter;
		bool dominance;
};
#endif
