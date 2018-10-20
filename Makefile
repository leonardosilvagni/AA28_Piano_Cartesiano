all: message build link execute clear_o
message:
	@echo "Please type 'make help' for further information\n"
clear: clear_o
	@rm -rf *.out
clear_o:
	@rm -rf *.o
build:
	@echo "\tBuilding...\n"
	@g++ -c main.cpp line_vector.cpp point.cpp retta.cpp
link:
	@echo "\n\tLinking\n"
	@g++ main.o line_vector.o point.o retta.o -o cartesiano.out
execute:
	@echo "\n\tExecuting...\n"
	@./cartesiano.out
help:
	@echo "\nAvailable arguments for Make:\
	\n\tclear : Removes both the program.out and the objects made from compiling;\
	\n\tclear_o : Removes ONLY the objects made from compiling;[**]\
	\n\tbuild : Call g++ to compie the source int objects;[**]\
	\n\tlink : Call g++ to link the objects into an executable;[**]\
	\n\texecute : Execute the program;[**]\
	\n\thelp : Show this message;[**]\n\n"
