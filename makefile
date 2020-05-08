CXX = g++
CXXFLAGS = -Wall -g

CFILES = PFHelper.o 

pathfinderHelper: $(CFILES)
	$(CXX) $(CXXFLAGS) -o $(CFILES)

PFHelper.o: PFHelper.h

clean:
	rm *.o
