! Trival example code from some project.

!========================================================================================
      subroutine ehsfid(integer1, text1, text2)
!========================================================================================
!     Dummy subroutine for routines to check underflow generated by Adifor.
!     Original Adifor-provided routine is in a library file.
!     Using the original routine would involve linking S3D to library, which is a
!       big hassle for many platforms.
!     Thus, we will not check for underflow. Historically, it has never been a problem.
!----------------------------------------------------------------------------------------
      implicit none

      integer integer1
      character*100 text1, text2
!----------------------------------------------------------------------------------------
!     do nothing
!----------------------------------------------------------------------------------------
      return
      end
