# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @autor José Lozano Armas alu0101392561@ull.edu.es
# @date 
# @brief El siguiente archivo es el makefile de esta practica.

CXX = g++						            
CXXFLAGS = -std=c++14 -g -Wall					            


all: fibonacci_sum

fibonacci_sum: fibonacci_sum.o fibonacci_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# hello_world.o: hello_world.cc
#
	$(CXX) $(CXXFLAGS) -c $<


clean :
	rm -rf *.o fibonacci_sum ../doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;