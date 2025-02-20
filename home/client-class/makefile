# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Executable Name
TARGET = ex1

# Source Files
SRCS = Cliente.cpp ex1.cpp

# Object Files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Rule to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to create object files
%.o: %.cpp Cliente.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove compiled files
clean:
	rm -f $(TARGET) $(OBJS)
