#include<stdio.h>
#include<stdlib.h>

//Defining hanoi function
void hanoi(int n, int source, int dest, int mid){
  if(n==1)
  {
    printf("Moved disk %d from %d to %d\n", n, source, dest);
  }
  else
  {
    hanoi(n-1, source, mid, dest);
    printf("Moved disk %d from %d to %d\n", n, source, dest);
    hanoi(n-1, mid, dest, source);
  }
}

void main()
{
  int disk_count;
  printf("Enter the number of disks : \n");
  scanf("%d", &disk_count); //get number of disk from the user
  printf("Tower of Hanoi solution for %d disks: \n", disk_count);
  hanoi(disk_count, 1, 3, 2); //call hanoi function
}
