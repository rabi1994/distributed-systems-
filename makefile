build:
	mpicc -o exec main.c

clean:
	rm -f *.o exec

run:
	mpiexec -n 4 ./exec