// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FORMULAPARSEOPTIONS_H
#define ASPOSE_CELLS_FORMULAPARSEOPTIONS_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class CustomFunctionDefinition;
} }

namespace Aspose { namespace Cells {

class FormulaParseOptions_Impl;

/// <summary>
/// Represents options when parsing formula.
/// </summary>
class FormulaParseOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FormulaParseOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API FormulaParseOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FormulaParseOptions(FormulaParseOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FormulaParseOptions(const FormulaParseOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FormulaParseOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FormulaParseOptions& operator=(const FormulaParseOptions& src);
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
    /// Whether the formula is locale formatted. Default is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetLocaleDependent();
    /// <summary>
    /// Whether the formula is locale formatted. Default is false.
    /// </summary>
    ASPOSE_CELLS_API void SetLocaleDependent(bool value);
    /// <summary>
    /// Whether the formula is R1C1 reference style. Default is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetR1C1Style();
    /// <summary>
    /// Whether the formula is R1C1 reference style. Default is false.
    /// </summary>
    ASPOSE_CELLS_API void SetR1C1Style(bool value);
    /// <summary>
    /// Whether check addins in existing external links of current workbook for user defined function without external link.
    /// Default is true(if user defined function matches one addin in existing external links, then take it as the addin).
    /// </summary>
    ASPOSE_CELLS_API bool GetCheckAddIn();
    /// <summary>
    /// Whether check addins in existing external links of current workbook for user defined function without external link.
    /// Default is true(if user defined function matches one addin in existing external links, then take it as the addin).
    /// </summary>
    ASPOSE_CELLS_API void SetCheckAddIn(bool value);
    /// <summary>
    /// Whether parse given formula. Default is true.
    /// If it is false, then given formula string will be kept as it is for the cell until user call other methods to parse them
    /// or parsed formula data is required by other operations such as calculating formulas.
    /// </summary>
    ASPOSE_CELLS_API bool GetParse();
    /// <summary>
    /// Whether parse given formula. Default is true.
    /// If it is false, then given formula string will be kept as it is for the cell until user call other methods to parse them
    /// or parsed formula data is required by other operations such as calculating formulas.
    /// </summary>
    ASPOSE_CELLS_API void SetParse(bool value);
    /// <summary>
    /// Definition for parsing custom functions.
    /// </summary>
    /// <remarks>For some special requirements, such as when calculating custom function in user's custom engine,
    /// some parameters of it need to be caculated in array mode, using this property can mark those parameters
    /// as array mode when parsing the formula. Otherwise user needs to update those custom functions later by
    /// <see cref="Workbook.UpdateCustomFunctionDefinition(CustomFunctionDefinition)"/> to get the same result.
    /// </remarks>
    ASPOSE_CELLS_API CustomFunctionDefinition* GetCustomFunctionDefinition();
    /// <summary>
    /// Definition for parsing custom functions.
    /// </summary>
    /// <remarks>For some special requirements, such as when calculating custom function in user's custom engine,
    /// some parameters of it need to be caculated in array mode, using this property can mark those parameters
    /// as array mode when parsing the formula. Otherwise user needs to update those custom functions later by
    /// <see cref="Workbook.UpdateCustomFunctionDefinition(CustomFunctionDefinition)"/> to get the same result.
    /// </remarks>
    ASPOSE_CELLS_API void SetCustomFunctionDefinition(CustomFunctionDefinition* value);
    
};

} }

#endif
