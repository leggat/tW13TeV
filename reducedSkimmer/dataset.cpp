#include "dataset.h"

Dataset::Dataset(std::string name, std::string dir, float lumi, bool isMC, float crossSection, long totalEvents, std::string channel, std::string legName, int colour, std::string exFlag, int nFiles):
  name_(name),
  folderName_(dir),
  lumi_(lumi),
  isMC_(isMC),
  crossSection_(crossSection),
  totalEvents_(totalEvents),
  channel_(channel),
  legName_(legName),
  colour_(colour),
  extraFlags_(exFlag),
  nFiles_(nFiles)
{
  //Don't think anything needs to go in here.
}
