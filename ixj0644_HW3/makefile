CXXFLAGS = -std=c++11

all: exec

exec: main.o
	$(CXX) $(CXXFLAGS) main.o

main.o: main.cpp ixj0644_Controller.h ixj0644_View.h ixj0644_Allele.h ixj0644_Genotype.h ixj0644_Pea_Plant_Trait_Maps.h ixj0644_Trait.h ixj0644_Pea_Plant.h
	$(CXX) $(CXXFLAGS) -c main.cpp 

clean:
	rm *.o
