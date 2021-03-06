#include "sage3basic.h"
#include "LVAstAttribute.h"

#include <sstream>

using namespace std;
SPRAY::LVAstAttribute::LVAstAttribute(SPRAY::LVLattice* elem):_elem(elem) {
}

bool SPRAY::LVAstAttribute::isLive(SPRAY::VariableId variableId) {
  return _elem->exists(variableId);
}

void SPRAY::LVAstAttribute::toStream(ostream& os, SPRAY::VariableIdMapping* vim) {
  os<<"LV:";
  _elem->toStream(os,vim);
}

string SPRAY::LVAstAttribute::toString() {
  stringstream ss; 
  toStream(ss,0);
  return ss.str();
}

bool SPRAY::LVAstAttribute::isBottomElement() {
  return _elem->isBot();
}

SPRAY::VariableIdSet SPRAY::LVAstAttribute::allVariableIds() {
  SPRAY::VariableIdSet set;
  for(SPRAY::LVLattice::iterator i=begin();i!=end();++i) {
    set.insert(*i);
  }
  return set;
}
SPRAY::LVLattice::iterator
SPRAY::LVAstAttribute::begin() {
  return _elem->begin();
}
SPRAY::LVLattice::iterator
SPRAY::LVAstAttribute::end() {
  return _elem->end();
}
SPRAY::LVAstAttribute::~LVAstAttribute() {
}
