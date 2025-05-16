# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -O0 -g -Wall -pedantic -std=c++11

# Nome do executável
PROG = programa

# Arquivos objeto (derivados dos .cpp)
OBJS = main.o cliente.o conta_bancaria.o

# Regra padrão: gera o executável a partir dos objetos
$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(PROG) $(OBJS)

# Regras para compilar cada arquivo .cpp em .o
main.o: main.cpp cliente.h conta_bancaria.h
	$(CXX) $(CXXFLAGS) -c main.cpp

cliente.o: cliente.cpp cliente.h
	$(CXX) $(CXXFLAGS) -c cliente.cpp

conta_bancaria.o: conta_bancaria.cpp conta_bancaria.h
	$(CXX) $(CXXFLAGS) -c conta_bancaria.cpp

# Regra para limpar os arquivos gerados (executável e objetos)
clean:
	rm -f $(PROG) $(OBJS)