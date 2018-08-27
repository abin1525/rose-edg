///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Stubs for EDG functions when neither the code nor the library is available.                             __THIS_HEADER_IS_USED__
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef ROSE_fake_EDG_H
#define ROSE_fake_EDG_H

int edg_main(int,char * * const,class SgSourceFile &) { return 0; }
SgScopeStatement* curr_sg_scope;

std::set<SgVariableDeclaration*> nodesAddedWithinFieldUseSet;

void FixupTypeReferencesOnMemoryPool::visit ( SgNode* node ) {}

#endif