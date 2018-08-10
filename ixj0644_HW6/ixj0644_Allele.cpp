#include "ixj0644_Allele.h"

char Allele::get_letter() const
{
	return letter;
}
		
bool Allele::get_dominance() const
{
	return dominance;
}

std::ostream& operator<<(std::ostream& ost, const Allele& rhs)
{
	ost << "Letter: " << rhs.get_letter() << "\nDominance: " << rhs.get_dominance() << std::endl;
	return ost;
}
