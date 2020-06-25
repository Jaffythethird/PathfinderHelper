CXX = g++
CXXFLAGS = -Wall -g -lreadline

CFILES = PFHelper.o 

pathfinderHelper: $(CFILES)
	$(CXX) $(CXXFLAGS) -o pfHelper $(CFILES)

PFHelper.o: PFHelper.h

clean:
	rm *.o
