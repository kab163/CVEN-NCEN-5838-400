#include <iostream>
#include <string>
#include <vector>

int main()
{
  const int nx = 5;
  const int ny = 5;
  std::vector<std::vector<double> > zValues;

  //Initializing vectors...
  zValues.resize(nx);
  for ( int i = 0 ; i < nx ; i++ ) 
    zValues[i].resize(ny);

  //Performing calculations...
  for ( int i = 0 ; i < nx ; i++ )
    for ( int j = 0 ; j < ny ; j++ )
      zValues[i][j] = (1-i) * (1+i) * (1-j) * (1+j);

  std::cout << std::endl << "Resulting vector of vectors:" << std::endl;
  for (int i = 0; i < nx; i++)
  {
    for (int j = 0; j < ny; j++)
      std::cout << i << " " << j  << " :" << zValues[i][j] << std::endl;
    std::cout << std::endl;
  }
  return 0;
}
