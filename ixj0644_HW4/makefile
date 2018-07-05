CXXFLAGS = -std=c++11

all: exec

exec: main.o allele.o multiple_alleles.o
	$(CXX) $(CXXFLAGS) -o a.out ixj0644_main.o ixj0644_Allele.o ixj0644_Multiple_Alleles.o

main.o: ixj0644_main.cpp 
	$(CXX) $(CXXFLAGS) -c ixj0644_main.cpp

allele.o: ixj0644_Allele.cpp ixj0644_Allele.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Allele.cpp

multiple_alleles.o: ixj0644_Multiple_Alleles.cpp ixj0644_Multiple_Alleles.h
	$(CXX) $(CXXFLAGS) -c ixj0644_Multiple_Alleles.cpp

clean:
	rm -f *.o a.out
	













