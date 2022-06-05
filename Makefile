all: quad

quad: Person.o Info.o Lists.o Reminder.o Schedule.o Task.o
	g++ Person.o Info.o Lists.o Reminder.o Schedule.o Task.o -o quad

Person.o: Person.cpp
	g++ -c Person.cpp

Info.o: Info.cpp
	g++ -c Info.cpp

Lists.o: Lists.cpp
	g++ -c Lists.cpp

Reminder.o: Reminder.cpp
	g++ -c Reminder.cpp
Schedule.o: Schedule.cpp
	g++ -c Schedule.cpp
Task.o: Task.cpp
	g++ -c Task.cpp
clean: 
	rm -rf *o quad
