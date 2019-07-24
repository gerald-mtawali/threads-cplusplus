/*
The structure of this code works like this:
  Loads an image to memory
  Split the image in a number of threads
  launch number of threads
  let the main thread deal with the last chunk of image
  wait until all threads have finished and join them with main thread
  save the processed image
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <exception>
#include <vector>
#include "ppm.h"

// init with default values

void ppm::init()
{
  width = 0;
  lenght = 0;
  max_col_val = 255;
}

/*default constructor
  creates a ppm object
  */
ppm::ppm()
{
  init();
}

// create a new ppm object and fill with data stored in fname
ppm::ppm(const std::string &fname)
{
  init();
  read(fname);
}
