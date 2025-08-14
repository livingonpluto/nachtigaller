# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g -std=c++11

# Target executable
TARGET = getArticle

# Source files
SRCS = lexikon_out.cpp 

OBJS = $(SRCS:.cpp=.o)


all: $(TARGET) 


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


run: $(TARGET)
	$(TARGET)

# clean:
# 	del $(TARGET) $(OBJS)