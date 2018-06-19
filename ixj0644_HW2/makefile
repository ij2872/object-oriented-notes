CXXFLAGS = -std=c++11

all: executable

executable: main.o Allele.o Genotype.o Trait.o
	$(CXX) $(CXXFLAGS) -o a.out main.o ixj0644_Allele.o ixj0644_Genotype.o ixj0644_Trait.o

main.o: main.cpp ixj0644_Allele.h ixj0644_Genotype.h  ixj0644_Trait.h
	$(CXX) $(CXXFLAGS) -c main.cpp 

Allele.o: ixj0644_Allele.cpp ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Allele.cpp

Genotype.o: ixj0644_Genotype.cpp ixj0644_Genotype.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Genotype.cpp

Trait.o: ixj0644_Trait.cpp ixj0644_Trait.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Trait.cpp

clean:
	rm -f *.o a.out