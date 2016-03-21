//The header for the config parser set of methods
#include<string>
#include<map>
#include<vector>
#include"dataset.h"
#include"libconfig.h++"
#include<iostream>

namespace Parser {
  int parse_datasets(char*,std::vector<Dataset>*,std::vector<std::string>*);
}
