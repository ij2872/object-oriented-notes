CXXFLAGS = -std=c++11

executable: main.o Allele.o Multiple_Allele.o Genotype.o
	$(CXX) $(CXXFLAGS) ixj0644_main.o ixj0644_Allele.o ixj0644_Multiple_Allele.o ixj0644_Genotype.o
main.o: ixj0644_main.cpp ixj0644_Allele.h ixj0644_Multiple_Allele.h ixj0644_Genotype.h
	$(CXX) $(CXXFLAGS) -c ixj0644_main.cpp
Multiple_Allele.o: ixj0644_Multiple_Allele.cpp ixj0644_Multiple_Allele.h ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Multiple_Allele.cpp
Allele.o: ixj0644_Allele.cpp ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Allele.cpp
Genotype.o: ixj0644_Genotype.cpp ixj0644_Genotype.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Genotype.cpp