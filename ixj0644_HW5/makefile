CXXFLAGS = -std=c++11

all: exec

exec: main.o Allele.o Genotype.o Trait.o Human.o Human_Trait_Maps.o Living_Thing.o Pea_Plant.o Plant_Man.o Pea_Plant_Map.o
	$(CXX) $(CXXFLAGS) -o a.out ixj0644_main.o ixj0644_Allele.o ixj0644_Genotype.o ixj0644_Human.o ixj0644_Human_Trait_Maps.o ixj0644_Living_Thing.o ixj0644_Trait.o ixj0644_Pea_Plant.o ixj0644_Plant_Man.o ixj0644_Pea_Plant_Trait_Maps.o

main.o: ixj0644_main.cpp 
	$(CXX) $(CXXFLAGS) -c ixj0644_main.cpp

Allele.o: ixj0644_Allele.cpp ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Allele.cpp

Genotype.o: ixj0644_Genotype.cpp ixj0644_Genotype.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Genotype.cpp

Human.o: ixj0644_Human.cpp ixj0644_Human.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Human.cpp

Human_Trait_Maps.o: ixj0644_Human_Trait_Maps.cpp ixj0644_Human_Trait_Maps.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Human_Trait_Maps.cpp

Living_Thing.o: ixj0644_Living_Thing.cpp ixj0644_Living_Thing.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Living_Thing.cpp


Trait.o: ixj0644_Trait.cpp ixj0644_Trait.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Trait.cpp

Pea_Plant.o: ixj0644_Pea_Plant.cpp ixj0644_Pea_Plant.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Pea_Plant.cpp

Plant_Man.o: ixj0644_Plant_Man.cpp ixj0644_Plant_Man.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Plant_Man.cpp


Pea_Plant_Map.o: ixj0644_Pea_Plant_Trait_Maps.cpp ixj0644_Pea_Plant_Trait_Maps.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Pea_Plant_Trait_Maps.cpp

clean:
	rm -f *.o a.out
