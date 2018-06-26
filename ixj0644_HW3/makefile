CXXFLAGS = -std=c++11

all: exec

exec: main.o Allele.o Genotype.o Trait.o Pea_Plant.o View.o Controller.o Pea_Plant_Map.o
	$(CXX) $(CXXFLAGS) -o a.out main.o ixj0644_Allele.o ixj0644_Genotype.o ixj0644_Trait.o ixj0644_Pea_Plant.o ixj0644_View.o ixj0644_Controller.o ixj0644_Pea_Plant_Trait_Maps.o

main.o: main.cpp 
	$(CXX) $(CXXFLAGS) -c main.cpp

Allele.o: ixj0644_Allele.cpp ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Allele.cpp

Genotype.o: ixj0644_Genotype.cpp ixj0644_Genotype.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Genotype.cpp

Trait.o: ixj0644_Trait.cpp ixj0644_Trait.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Trait.cpp

Pea_Plant.o: ixj0644_Pea_Plant.cpp ixj0644_Pea_Plant.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Pea_Plant.cpp

View.o: ixj0644_View.cpp ixj0644_View.h
	$(CXX) $(CXXFLAGS) -c ixj0644_View.cpp

Controller.o: ixj0644_Controller.cpp ixj0644_Controller.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Controller.cpp

Pea_Plant_Map.o: ixj0644_Pea_Plant_Trait_Maps.cpp ixj0644_Pea_Plant_Trait_Maps.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Pea_Plant_Trait_Maps.cpp

clean:
	rm -f *.o a.out
