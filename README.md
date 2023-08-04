
# PCC CS302/391 Programs

[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](https://makeapullrequest.com)
![License](https://badgen.net/github/license/micromatch/micromatch)


This repository contains programs for PCC-CS302 and PCC-CS391 under MAKAUT.

All programs must follow the syllabus  given below (as of 2023).


## Syllabus

![Screenshot 2023-08-05 000034](https://github.com/ArchismwanChatterjee/DSA_Programs/assets/115975340/5615348e-c88d-4f11-85db-ec3cfe9eaeca)


## Getting started

To get a copy of these programs up and running on your local machine, simply clone this repository:
```bash
git clone https://github.com/ArchismwanChatterjee/DSA_Programs
```
[if you are scared of CLI don't worry we got you covered](https://www.youtube.com/watch?v=PvUexC0-D2s)
## Prerequisites

You will need the following tools installed on your system to run these programs:

* Any Code Editor you like we prefer [VS Code](https://code.visualstudio.com/download)

* setup C compiler, we prefer [MinGW](https://sourceforge.net/projects/mingw/)    

    [You can follow this tutorial to install gcc in vscode for windows](https://www.youtube.com/watch?v=Ubfgi4NoTPk)

* Lastly make sure you have prettier extension installed in vscode for formatting
    [here is how you can do it](https://www.youtube.com/watch?v=__eiQumLOEo)

    you are now ready to contribute ;)
## Contributing

- Navigate to the specified folder the format is section name and then day name
    
    (any extra programs should be written in the extra folder under the specified concept)

    Example:
    ```
     A/D1 would contain Section A Day 1 programs
    ```
-   Write the question using comment lines and then code 
    if possible display the result in comment lines.

     Example

```C
// WAP to implement tower of hanoi

#include <stdio.h>

int towers(int n, char beg, char end, char aux)
{

    if (n == 1)
    {
        printf("\n Move disk %d from the peg %c to the peg %c", n, beg, end);
        return 0;
    }
    else
    {
        towers(n - 1, beg, aux, end);
        printf("\n Move disk %d from the peg %c to the peg %c", n, beg, end);
        towers(n - 1, aux, end, beg);
    }
}

int main()
{
    int n;
    printf("Enter the number of disks to be operated\n");
    scanf("%d", &n);
    towers(n, 'A', 'B', 'C');
    return 0;
}

/*
A beginning peg/from peg
B end peg/to peg
C auxilliary peg

OUTPUT:

Enter the number of disks to be operated
3

 Move disk 1 from the peg A to the peg B
 Move disk 2 from the peg A to the peg C
 Move disk 1 from the peg B to the peg C
 Move disk 3 from the peg A to the peg B
 Move disk 1 from the peg C to the peg A
 Move disk 2 from the peg C to the peg B
 Move disk 1 from the peg A to the peg B

*/
```
-   Navigate to the concepts folder to add concepts regarding data structures and algorithms 

-   Use suitable comment lines.

-   There's no restriction on your approach to solve.

-   Maintain readability(use appropriate variable names and comments)

-   Try to keep a note of the time and space complexity 

## Documentation and Concepts

check out 

[Documentation](https://github.com/ArchismwanChatterjee/DSA_Programs/blob/main/Documentation.md) to know more about C/C++

[Concepts](https://github.com/ArchismwanChatterjee/DSA_Programs/tree/main/concepts) to know about the concepts related to various data structures and algorithms


