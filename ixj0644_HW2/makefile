CXXFLAGS = -std=c++11

all: executable

executable: main.o Allele.o Genotype.o Monohybrid_Calculator.o Pea_Plant_Traits.o Trait.o
	$(CXX) $(CXXFLAGS) -c main.cpp ixj0644_Allele.cpp ixj0644_Genotype.cpp ixj0644_Monohybrid_Calculator.cpp ixj0644_Pea_Plant_Traits.cpp ixj0644_Trait.cpp

main.o: main.cpp ixj0644_Allele.h ixj0644_Genotype.h ixj0644_Monohybrid_Calculator.h ixj0644_Pea_Plant_Traits.h ixj0644_Trait.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Allele.o: ixj0644_Allele.cpp ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Allele.cpp

Genotype.o: ixj0644_Genotype.cpp ixj0644_Genotype.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Genotype.cpp

Monohybrid_Calculator.o: ixj0644_Monohybrid_Calculator.cpp ixj0644_Monohybrid_Calculator.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Monohybrid_Calculator.cpp

Pea_Plant_Traits.o: ixj0644_Pea_Plant_Traits.cpp ixj0644_Pea_Plant_Traits.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Pea_Plant_Traits.cpp

Trait.o: ixj0644_Trait.cpp ixj0644_Trait.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Trait.cpp

clean:
	rm -f *.o a.out