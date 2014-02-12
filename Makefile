CC=g++
CFLAGS=-Wall
LDFLAGS=-lboost_program_options
SOURCES_DIRECTORY=src
SOURCES=$(wildcard $(SOURCES_DIRECTORY)/*.cpp)
OBJECTS_DIRECTORY=obj
OBJECTS=$(addprefix $(OBJECTS_DIRECTORY)/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE=asci+
EXECUTABLE_DIRECTORY=bin

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(EXECUTABLE_DIRECTORY)/$@

$(OBJECTS): | $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY):
	@mkdir -p $@

$(OBJECTS_DIRECTORY)/%.o: $(SOURCES_DIRECTORY)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE_DIRECTORY)/$(EXECUTABLE)
