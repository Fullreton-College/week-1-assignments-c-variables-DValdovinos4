[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/s81_octC)
# Week 1 Assignment

## Assignment 1
Write a program that uses the console to get the height and width of a rectangle from the user. Then, it calculates the area of rectangle and displays the results.

### Input
height and width

### Output
Area of the rectangle is: <<area_calculateed>>

## Assignment 2
Many treadmills output the speed of the treadmill in miles per hour (mph) on the console, but most runners think of speed in terms of a pace. A common pace is expressed in minutes and seconds per mile, rather than miles per hour (mph). Write a program that starts with a quantity in mph and converts the quantity into minutes and seconds per mile. As an example, the proper output for an input of 6.5 mph should be 9 minutes and 13.8 seconds per mile. If you need to convert a double to an int, which will discard any value after the decimal point, then you may use

```
intValue = static_cast<int>(dblVal);
```
## Assignment 3
Write a program that plays the game of Mad Lib. Your program should prompt the user to enter the following strings:
* The first or last name of your instructor
* Your name
* A food
* A number between 100 and 120
* An adjective
* A color
* An animal

After the strings are input, they should be substituted into the story below and output to the console.

Dear Instructor [Instructor Name],

I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten [Food], which made me turn [Color] and extremely ill. I came down with a fever of [Number 100-120]. Next, my [Adjective] pet [Animal] must have smelled the remains of the [Food] on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late.


Sincerely,

[Your Name]


## Assignment 4
Given 4 integers, output their product and their average using integer arithmetic.

Ex: If the input is:

8 10 5 4
the output is:

1600 6
Note: Integer division discards the fraction. Hence the average of 8 10 5 4 is output as 6, not 6.75.

Also output the product and average using floating-point arithmetic.

Output each floating-point value with three digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(3); once before all other cout statements.

Hint: Convert the input values from int to double.

Ex: If the input is:

8 10 5 4
the output is:

1600 6
1600.000 6.750
