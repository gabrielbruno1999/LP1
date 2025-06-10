# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -O0 -g -Wall -pedantic -std=c++11

# Nome do executável
PROG = programa

# Arquivos objeto (derivados dos .cpp)
OBJS = main.o funcionario.o desenvolvedor.o gerente.o estagiario.o

# Regra padrão: gera o executável a partir dos objetos
$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(PROG) $(OBJS)

# Regras para compilar cada arquivo .cpp em .o
main.o: main.cpp funcionario.h desenvolvedor.h gerente.h estagiario.h
	$(CXX) $(CXXFLAGS) -c main.cpp

funcionario.o: funcionario.cpp funcionario.h
	$(CXX) $(CXXFLAGS) -c funcionario.cpp

desenvolvedor.o: desenvolvedor.cpp desenvolvedor.h
	$(CXX) $(CXXFLAGS) -c desenvolvedor.cpp

gerente.o: gerente.cpp gerente.h
	$(CXX) $(CXXFLAGS) -c gerente.cpp

estagiario.o: estagiario.cpp estagiario.h
	$(CXX) $(CXXFLAGS) -c estagiario.cpp

# Regra para limpar os arquivos gerados (executável e objetos)
clean:
	rm -f $(PROG) $(OBJS)