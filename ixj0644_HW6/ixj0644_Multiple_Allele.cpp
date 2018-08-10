#include "ixj0644_Multiple_Allele.h"

char Multiple_Allele::get_letter_two() const
{
	return letter_two;
}


std::ostream& operator<<(std::ostream& ost, const Multiple_Allele& rhs)
{
	ost << "Letter: " << rhs.get_letter() << rhs.get_letter_two() << "\nDominance: " << rhs.get_dominance() << "\n2nd Letter: " << rhs.get_letter_two() << std::endl;
	
	return ost;
}
