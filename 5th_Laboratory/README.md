# Programming Language I - Lab 5

This algorithm was developed for the Programming Language I class (<b>IMD/UFRN - 2017.2</b>), in order to meet the goal of solving the 5th Laboratory.

<b>Lucas Gomes Dantas</b> - 2016046926 - (dantaslucas@ufrn.edu.br)

## How to compile project

* On command line, go to the directory where you've cloned this repository;
* Type <code><b>make init</b></code>;
* Type <code><b>make</b></code>;
* If you want to execute question 1, type <code><b>./bin/closest_to_mean</b></code>;
* If you want to execute question 2, type <code><b>./bin/print_elements</b></code>;

To execute question 3, you <b>must</b> provide parameters by prompt. The code will only accept one additional parameter, and it must be an integer. Unexpected behaviour will happen if another type of parameter is given.

A simple example of execution is:

* <code><b>./show_primos 50</b></code>

This will print all prime numbers between 1 and 50.

There's also a question 4, with a code provided by prof. Silvio Costa Sampaio. You can execute its file, but the purpose was only to discuss what does the code do. You can do that by typing:

* <code><b>./bin/task_four</b></code>;

You can also generate the Doxygen's documentation typing <code><b>make doxy</b></code> and clean the project with  <code><b>make clean</b></code>.
