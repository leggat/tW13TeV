#include "config_parser.h"
#include <string>

int Parser::parse_datasets(char* conf, std::vector<Dataset>* datasetVec, std::vector<std::string>* plotsToFill, std::vector<std::string> * legOrder, std::vector<std::string> * plotOrder){
  libconfig::Config config;

  try {
    config.readFile(conf);
  }
  catch ( const libconfig::FileIOException &exep){
    std::cerr << "Error opening file" << std::endl;
    return 0;
  }
  catch (const libconfig::ParseException &e){
    std::cerr << "Parse error at " << e.getFile() << ":" << e.getLine() << " - " << e.getError() << std::endl;
    return 0;
  }

  libconfig::Setting &root = config.getRoot();
  
  libconfig::Setting& datasets = root["datasets"];

  std::string name;      
  std::string folderName;
  float lumi;            
  bool isMC;             
  float crossSection;    
  int totalEvents;      
  std::string channel;   
  std::string legName;   
  int colour;            
  std::string extraFlags;
  for (int i = 0; i < datasets.getLength(); i++){
    const libconfig::Setting &dSet = datasets[i];
    dSet.lookupValue("name",name);
    dSet.lookupValue("folderName",folderName);
    dSet.lookupValue("lumi",lumi);
    dSet.lookupValue("isMC",isMC);
    dSet.lookupValue("crossSection",crossSection);
    dSet.lookupValue("totalEvents",totalEvents);
    dSet.lookupValue("channel",channel);
    dSet.lookupValue("legName",legName);
    dSet.lookupValue("colour",colour);
    dSet.lookupValue("extraFlags",extraFlags);
    datasetVec->push_back(Dataset(name,folderName,lumi,isMC,crossSection,totalEvents,channel,legName,colour,extraFlags));
  }

  if (root.exists("plotOrder")){
    const libconfig::Setting &pOrder = root["plotOrder"];
    for (int i = 0; i < pOrder.getLength(); i++){
      plotOrder->push_back(pOrder[i]);
    }
  }

  if (root.exists("legOrder")){
    const libconfig::Setting &pOrder = root["legOrder"];
    for (int i = 0; i < pOrder.getLength(); i++){
      legOrder->push_back(pOrder[i]);
    }
  }

  return 1;
}
