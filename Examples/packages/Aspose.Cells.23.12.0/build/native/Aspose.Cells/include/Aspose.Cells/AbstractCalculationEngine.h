// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ABSTRACTCALCULATIONENGINE_H
#define ASPOSE_CELLS_ABSTRACTCALCULATIONENGINE_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class CalculationData;
} }

namespace Aspose { namespace Cells {

class AbstractCalculationEngine_Bridge;

/// <summary>
/// Represents user's custom calculation engine to extend the default calculation engine of Aspose.Cells.
/// </summary>
/// <remarks>User should not modify any part of the Workbook directly in this implementation(except
/// the calculated result of the custom function, which can be set by CalculationData.CalculatedValue property).
/// Otherwise unexpected result or Exception may be caused.
/// If user needs to change other data than calculated result in the implementation for some custom functions,
/// for example, change cell's formula, style, ...etc., user should gather those data in this implementation
/// and change them out of the scope of formula calculation.</remarks>
class ASPOSE_CELLS_API2 AbstractCalculationEngine {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AbstractCalculationEngine_Bridge* _impl;
    
public:
    /// <summary>
    /// Calculates one function with given data.
    /// </summary>
    /// <param name="data">the required data to calculate function such as function name, parameters, ...etc.</param>
    /// <remarks>User should set the calculated value for given data for all functions(including excel native functions)
    /// that he wants to calculate by himself in this implementation.
    /// </remarks>
    virtual void Calculate(CalculationData& data) = 0;
    /// <summary>
    /// Indicates whether this engine needs the literal text of parameter while doing calculation. Default value is false.
    /// </summary>
    /// <remarks>If this custom calculation engine needs the parameter's literal text,
    /// more stacks will be required to cache the literal text for parameters
    /// and Calculate() method may be called recursively to calculate the parameter's value.
    /// Generally the literal text is not needed for calculating formulas
    /// and this property should be kept as false for most implementations to get better performance.
    /// </remarks>
    ASPOSE_CELLS_API virtual bool IsParamLiteralRequired();
    /// <summary>
    /// Indicates whether this engine needs the parameter to be calculated in array mode. Default value is false.
    /// If <see cref="CalculationData.GetParamValueInArrayMode(int, int, int)"/> is required when calculating custom
    /// functions and user has not updated the definition for them
    /// (by <see cref="Workbook.UpdateCustomFunctionDefinition(CustomFunctionDefinition)"/>),
    /// this property needs to be set as true.
    /// </summary>
    /// <remarks>If this custom calculation engine needs the parameter to be calculated in array mode,
    /// more stacks will be required to cache the tree for parameters
    /// and Calculate() method may be called recursively to calculate the parameter's value.
    /// For performance consideration, please keep this property as the default value(false)
    /// if there is no special requirement.
    /// </remarks>
    ASPOSE_CELLS_API virtual bool IsParamArrayModeRequired();
    /// <summary>
    /// Whether built-in functions that have been supported by the built-in engine
    /// should be checked and processed by this implementation.
    /// Default is false.
    /// </summary>
    /// <remarks>
    /// If user needs to change the calculation logic of some built-in functions, this property should be set as true.
    /// Otherwise please leave this property as false for performance consideration.
    /// </remarks>
    ASPOSE_CELLS_API virtual bool GetProcessBuiltInFunctions();
    
};

} }

#endif
