# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -Wextra -std=c++11

# Source files
SRCS = main.cpp pokemon.cpp firetype.cpp grasstype.cpp watertype.cpp 

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable
TARGET = pokemon

# Default target
all: $(TARGET)

# Compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)