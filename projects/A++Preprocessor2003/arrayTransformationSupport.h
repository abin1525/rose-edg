#ifndef ROSE_ARRAY_TRANSFORMATION_SUPPORT
#define ROSE_ARRAY_TRANSFORMATION_SUPPORT

// *********************************************************************************
// This header file defines support for the generation of strings and more general functions
// that are common to all of the nested transformations in the A++/P++ preprocessor.
// ***********************************************************************************

// forward declaration for data base class
class OperandDataBaseType;
class ArrayOperandDataBase;

class ArrayTransformationSupport
   {
     public:
          enum IndexingAccessEnumType
             {
               UnknownIndexingAccess      = 0,
               UniformSizeUnitStride      = 1,
               UniformSizeUniformStride   = 2,
               UniformSizeVariableStride  = 3,
               VariableSizeUnitStride     = 4,
               VariableSizeUniformStride  = 5,
               VariableSizeVariableStride = 6,
               scalarIndexingAccess       = 7,
               LAST_INDEXING_ACCESS_TYPE_TAG
             };

       // This function builds loop nests for support of the multidimensional array transformation
          static string buildLoopNest ( const OperandDataBaseType & operandDataBase, int dimensionOfArrayStatement );

       // Build global declarations associated with each operand of a statement being transformed
       // Note that the global declaration is separated from the local variable declarations and
       // initializations.
          static string buildOperandSpecificGlobalDeclarations (
                    const ArrayStatementQueryInheritedAttributeType & inheritedAttribute,
                    const OperandDataBaseType & operandDataBase );

       // Build declarations associated with each operand of a statement being transformed
       // Note that the declaration is separated from the initializations
          static string buildOperandSpecificVariableDeclarations (
                    const ArrayStatementQueryInheritedAttributeType & inheritedAttribute,
                    const OperandDataBaseType & operandDataBase );

       // Initializations of variables associated with each operand
       // Initializations occure before each transformation
          static string buildOperandSpecificVariableInitialization (
                    const ArrayStatementQueryInheritedAttributeType & inheritedAttribute,
                    const OperandDataBaseType & operandDataBase );

       // Support function for building macros
          static string buildChainedString ( int arrayDimension,
                                            const string firstDimensionString,
                                            const string nextDimensionString );

       // Details can be hidden in macros that are often easier 
       // to edit than the preprocessor source code
          static string buildOperandVariableDeclarationMacro (
               const ArrayOperandDataBase & arrayOperandDataBase,
               int operandIndex );

          static string buildOperandVariableInitializationMacro (
               const ArrayOperandDataBase & arrayOperandDataBase,
               int operandIndex );

          static string buildOperandSubscriptMacro (
               const ArrayOperandDataBase & arrayOperandDataBase,
               int operandIndex );

       // This function retrives the hints in the user's application
       // which permit control over the output of the preprocessor
          static IndexingAccessEnumType interpretTransformationOptions (
               const list<int> & transformationOptionList );

       // Used to computing types of loop nests to build (since they are specific to what sorts of indexing is used)
          static IndexingAccessEnumType typeOfIndexingAccessAcrossAllOperands (
               list<int> operandCodeList, int dimension = -1 );

          static string internalSupportingGlobalDeclarations ( SgNode* astNode );

          static void insertDeclarations (
               SgProject & project,
               SgNode* astNode,
               const SynthesizedAttributeBaseClassType & gatheredData );

          static void replaceStatement (
               SgProject & project,
               SgNode* astNode,
               const SynthesizedAttributeBaseClassType & gatheredData );
   };

// endif for ROSE_ARRAY_TRANSFORMATION_SUPPORT
#endif




















