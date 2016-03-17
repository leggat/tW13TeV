#include <string>

class Dataset{
  std::string name_;
  std::string folderName_;
  float lumi_;
  bool isMC_;
  float crossSection_;
  long totalEvents_;
  std::string channel_;
  std::string legName_;
  int colour_;
  std::string extraFlags_;
 public:
  Dataset(std::string, std::string, float, bool, float, long, std::string, std::string, int, std::string);
  std::string getName() const {return name_;};
  std::string getFolderName() const {return folderName_;};
  bool isMC() const {return isMC_;};
  std::string getDir() const {return folderName_;};
  float getLumi() const {return lumi_;};
  float getCrossSection() const {return crossSection_;};
  long getTotalEvents() const {return totalEvents_;};
  std::string getChannel() const {return channel_;};
  std::string getLegName() const {return legName_;};
  int getColour() const {return colour_;};
  std::string exFlags() const {return extraFlags_;};
};
