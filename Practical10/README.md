# PRACTICAL 10

## tower_of_hanoi.c

- This is a c program to find the solution for tower of honoi 
- The program prompt for input `number of disk` from the user during run time
- It uses recursive function hanoi()

## Genreal Solution 
* Let

* Rod 1 = A
* Rod 2 = B
* Rod 3 = C

* n disks = 2

* Disk 1 from A to B
* Disk 2 from A      to C
* Disk 3 from      B to C

*  Shift 'n-1' disks from Source (A) to Middle (B)
*  Shift one disk from Source(A) to Destination (C)
*  Shift 'n-1' disks from Middle (B) to Destination (C)
