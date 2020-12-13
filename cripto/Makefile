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
LDFLAGS =	

all: testeo

testeo: testeo.o 
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	
	$(CXX) $(CXXFLAGS) -c $<
