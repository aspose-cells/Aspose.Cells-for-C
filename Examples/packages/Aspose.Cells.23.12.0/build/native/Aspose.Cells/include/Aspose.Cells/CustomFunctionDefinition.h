// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CUSTOMFUNCTIONDEFINITION_H
#define ASPOSE_CELLS_CUSTOMFUNCTIONDEFINITION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {

class CustomFunctionDefinition_Bridge;

/// <summary>
/// Definition of custom function for calculating with user's custom engine.
/// </summary>
class ASPOSE_CELLS_API2 CustomFunctionDefinition {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomFunctionDefinition_Bridge* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomFunctionDefinition();
    ASPOSE_CELLS_API CustomFunctionDefinition(const CustomFunctionDefinition& src) = delete;
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomFunctionDefinition();
    ASPOSE_CELLS_API CustomFunctionDefinition& operator=(const CustomFunctionDefinition& src) = delete;
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets the indices of given custom function's parameters that need to be calculated in array mode.
    /// </summary>
    /// <param name="functionName">Name of the custom function.</param>
    /// <returns>Indices of the parameters that need to be calculated in array mode for given custom function.
    /// Default is null, there is no parameter which needs to be calculated in array mode for the custom function.</returns>
    /// <remarks>For an expression that needs to be calculated, taking A:A+B:B as an example:
    /// Generally in value mode it will be calculated to a single value according to current cell base.
    /// But in array mode, all values of A1+B1,A2+B2,A3+B3,... will be calculated and used for the calculation.
    /// </remarks>
    ASPOSE_CELLS_API Vector<int32_t> GetArrayModeParameters(const U16String& functionName);
    /// <summary>
    /// Gets the indices of given custom function's parameters that need to be calculated in array mode.
    /// </summary>
    /// <param name="functionName">Name of the custom function.</param>
    /// <returns>Indices of the parameters that need to be calculated in array mode for given custom function.
    /// Default is null, there is no parameter which needs to be calculated in array mode for the custom function.</returns>
    /// <remarks>For an expression that needs to be calculated, taking A:A+B:B as an example:
    /// Generally in value mode it will be calculated to a single value according to current cell base.
    /// But in array mode, all values of A1+B1,A2+B2,A3+B3,... will be calculated and used for the calculation.
    /// </remarks>
    ASPOSE_CELLS_API Vector<int32_t> GetArrayModeParameters(const char16_t* functionName);
    
};

} }

#endif
