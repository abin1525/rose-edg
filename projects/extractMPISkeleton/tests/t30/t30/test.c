#include "mpi.h"

int main(int argc, char *argv[])
{
  int x=0;
  int i;

  MPI_Init( &argc, &argv );

  for (i=0; x < 100 ; i++)
    x++;

  MPI_Send(&x, 1, MPI_INT, 0, 0, MPI_COMM_WORLD);

  return 0;
}
