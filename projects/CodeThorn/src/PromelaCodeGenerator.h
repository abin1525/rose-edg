// Author: Marc Jasper, 2016.

#ifndef PROMELA_CODE_GENERATOR_H
#define PROMELA_CODE_GENERATOR_H

#include <iostream>
#include <fstream>

#include "sage3basic.h"

// SPRAY includes
#include "DotGraphCfgFrontend.h"
#include "Flow.h"

// CodeThorn includes

// BOOST includes
#include "boost/lexical_cast.hpp"
#include "boost/unordered_set.hpp"
#include "boost/regex.hpp"
#include "boost/algorithm/string.hpp"
#include "boost/algorithm/string/trim.hpp"
#include "boost/algorithm/string/regex.hpp"

namespace SPRAY {

  // Generates PROMELA code that implements the synchronsized product of the given automata
  class PromelaCodeGenerator {
  public:
    // parse the CFG contained in the "filename" .dot-file and return a Flow CFG.
    std::string generateCode(CfgsAndAnnotationMap& parallelComponents);

  private:
    std::string generateCode(Flow& automaton, int id, EdgeAnnotationMap edgeAnnotationMap, 
			     bool useTransitionIds, boost::unordered_map<std::string, int>& transitionIdMap);
    std::string communicationDetails(std::string edgeAnnotation, int currentAutomaton, EdgeAnnotationMap edgeAnnotationMap,
				     bool useTransitionIds, boost::unordered_map<std::string, int>& transitionIdMap);
    std::string generateActionListener(std::string messageType,
				       bool useTransitionIds, boost::unordered_map<std::string, int>& transitionIdMap);
    std::string ltlAtomicPropositions(EdgeAnnotationMap& annotationMap,
				      bool useTransitionIds, boost::unordered_map<std::string, int>& transitionIdMap);
  };

} // end of namespace SPRAY

#endif
