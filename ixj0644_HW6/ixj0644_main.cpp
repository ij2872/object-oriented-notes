#include "ixj0644_Genotype.h"

int main()
{
	Allele* a1 = new Allele('T', true);
	Allele* a2 = new Allele('T', true);
	Allele* a3 = new Allele('T', true);
	Allele* ma4 = new Multiple_Allele('t', false, 'c');
	
	Genotype g1(a1, a2);
	Genotype g2(a3, ma4);

	// 1337
	std::cout << *g1.get_allele_one();
	std::cout << *g1.get_allele_two();
	std::cout << *g2.get_allele_one();
	std::cout << *(Multiple_Allele*) g2.get_allele_two();


	return 0;
}
