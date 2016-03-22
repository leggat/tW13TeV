#ifndef PLOTS_H
#define PLOTS_H

#include <string>
#include "TH1.h"
#include "tWEvent.h"
#include <vector>
#include <libconfig.h++>
#include <iostream>

typedef struct plot plot;

class Plots{
  std::vector<plot> plotsVec;

 public:
  Plots(std::string, std::string);
  ~Plots();
  void fillAllPlots(tWEvent*,float,int);
  std::vector<plot> getPlotsVec(){return plotsVec;};
};

struct plot{
  std::string name;
  std::string xAxisLabel;
  TH1F* hist;
};

#endif
