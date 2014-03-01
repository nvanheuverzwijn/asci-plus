CC=g++
CFLAGS=-Wall
LDFLAGS=-lboost_program_options
SOURCES_DIRECTORY=src
SOURCES=$(wildcard $(SOURCES_DIRECTORY)/*.cpp) $(wildcard $(SOURCES_DIRECTORY)/**/*.cpp)
OBJECTS_DIRECTORY=obj
OBJECTS=$(addprefix $(OBJECTS_DIRECTORY)/,$(notdir $(SOURCES:.cpp=.o)))
EXECUTABLE=asci+
EXECUTABLE_DIRECTORY=bin

all: $(EXECUTABLE_DIRECTORY)/$(EXECUTABLE)

$(EXECUTABLE_DIRECTORY)/$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

$(OBJECTS): | $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY):
	@mkdir -p $@

# Compile subdirectories of src/DIR/*.cpp
$(OBJECTS_DIRECTORY)/%.o: $(SOURCES_DIRECTORY)/**/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
#Compile src/*.cpp
$(OBJECTS_DIRECTORY)/%.o: $(SOURCES_DIRECTORY)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJECTS) $(EXECUTABLE_DIRECTORY)/$(EXECUTABLE)
