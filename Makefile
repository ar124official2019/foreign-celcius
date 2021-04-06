run: link
	./foreign_to_celcius
link: comp
	g++ -o foreign_to_celcius *.o
comp: clean
	g++ -c *.c
clean:
	rm *.o