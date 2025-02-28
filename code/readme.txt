PROGRAM DESCRIPTION:
The vertices of graph are numbered from 1 to n.(n must be an even number otherwise the program gives erroneous output).
Number of vertices of the graph, edges of the graph and value of k is given as input.
The program prints "Partition not possible" if no k-bisection exists.
Otherwise the program prints all possible k-bisections.

INPUT FORMAT :
The first line of the input contains a single integer t, denoting the number of testcases.
The second line contains three space separated integers n, m and k,denoting the number of vertices of the graph, number of edges and value of k respectively.
The next m lines contains 2 space separated integers u and v representing an edge (u,v) of the graph.

SAMPLE INPUT: 
2
4 3 2
1 2
2 4
2 3

8 7 1
1 2
2 3
5 3
5 4
5 6
6 7
4 8

SAMPLE OUTPUT : 

TESTCASE 1 :

Set U : 1 2 
Set V : 3 4 
No. of edges from U to V : 2
Edges are : 
(2,4)
(2,3)

Set U : 1 3 
Set V : 2 4 
No. of edges from U to V : 2
Edges are : 
(1,2)
(2,3)

Set U : 1 4 
Set V : 2 3 
No. of edges from U to V : 2
Edges are : 
(1,2)
(2,4)
----------------------------------------------------------------
TESTCASE 2 :
Partition not possible.
----------------------------------------------------------------

More sample testcases are given in the file "in.txt".

COMMANDS USED :

1. To compile cpp source file (brute.cpp),use the command given below
   
   g++ brute.cpp -o brute.out 

2. To read the input from "in.txt" and print output to "out.txt", use the following command

   ./brute.out <in.txt >out.txt