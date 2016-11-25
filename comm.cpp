#include "comm.hpp"
#include <mpi.h>


Communicator::Communicator
(
   int* argc,
   char*** argv
)
{
   MPI_Init( &argc, &argv );

   MPI_Comm_rank( MPI_COMM_WORLD, &_rank );

   MPI_Comm_size( MPI_COMM_WORLD, &_size );

}



Communicator::~Communicator
(
   void
)
{
   MPI_Finalize();
}



const multi_index_t&
Communicator::ThreadIdx
(
   void
) const
{

}



const multi_index_t&
Communicator::ThreadDim
(
   void
) const
{

}



 const int& Communicator::ThreadNum   () const
 {

 }



 const int& Communicator::ThreadCnt() const
 {

 }

 const bool& Communicator::EvenOdd() const
 {

 }

 real_t  Communicator::geatherSum(const real_t& val) const
 {

 }



real_t  Communicator::geatherMin( const real_t& val ) const
{

}

real_t  Communicator::geatherMax( const real_t& val ) const
{

}



void  Communicator::copyBoundary( Grid* grid ) const
{

}



const bool Communicator::isLeft() const
{

}



const bool Communicator::isRight () const
{

}



const bool Communicator::isTop() const
{

}



const bool Communicator::isBottom() const
{

}




bool Communicator::copyLeftBoundary(Grid* grid) const
{

}



bool cCommunicator::opyRightBoundary(Grid* grid) const
{

}



bool Communicator::copyTopBoundary(Grid* grid) const
{

}



bool Communicator::copyBottomBoundary(Grid* grid) const
{

}



