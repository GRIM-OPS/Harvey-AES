#ifndef CPYMATRIX_H_
#define CPYMATRIX_H_

void cpyMatrix(unsigned char *ptr, unsigned char *pMatrix)
{
  for(int i = 0; i < 16; i++)
  {
    *(pMatrix + i) = *(ptr + i);
  }

}


#endif
