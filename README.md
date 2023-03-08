# Files-and-Strings
2# Assignment 1

Instructions
NOTE: THE ASSIGNMENT IS NOT TO SIMPLY COPY FILE A TO FILE B
Write a program that transfers the records of DATA in one file to a second file. The data is structured data.

This means that if you write a program to simply copy the contents of file A to file B, it will be incorrect.

The first file will contain an arbitrary (unknown) number of data groups.
A data group will consist of a person's:
Name (a string ** containing spaces **)
Student ID (a large integer)
GPA (a floating-point number)*
Letter grade (a single character).
You can design the order of the data within each group and the actual values to use. (It would be educational for you to experiment with different orders for the data values.)
Remember that your program cannot know how many data groups are in the file ahead of time!
You will read the files' names from the user.
Protect your program against any errors that may occur during the opening of the files.
Use classes to organize and improve your code. You must use classes to represent students.
Sample Data
Richard Grayson
123456
9.2
B
Lois Lane
123457 11.2 A
Bruce Wayne
123458
5.6 D
Clark Joseph Kent
110121 8.4
B
A run of your programmight look like:

Please enter the name of your data file:  bob.dat

I'm sorry, I could not open 'bob.dat'.  
Please enter another name: students

File 'students' opened successfully!

Please enter the name of the destination file:  /invalidname

I'm sorry, I could not open '/invalidname'.  
Please enter another name:students.bak

File 'students.bak' opened successfully!

Copying data from 'students' to 'students.bak'...

Done copying data!
The second file will be an exact data copy of the first. (Not a character-by-character copy, but a copy of the DATA from the file. The data types in the file are described as well as their meanings)

Your main should contain something like:

    in.peek();
    while (!in.eof())
    {
        student.read(in);
        student.write(out);
        in.peek();
    }
Note that this says SOMETHING like. Not exact. You may change it.

TIPS:

Make sure to follow the coding standards document in blackboard. You will lose points if you don't.
The input and output should match the sample executable precisely. No embellishments. Do what the problem description says, and do only that. Otherwise there will be point penalties.
