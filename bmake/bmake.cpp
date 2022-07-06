#include <iostream>
// Boost
#include <boost/program_options/options_description.hpp>

namespace po = boost::program_options;

int main (int argc, char* argv[])
{
  po::options_description desc{"Allowed options"};
  desc.add_options()
    ("help", "produce help message")

  ;
}
