// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CALCULATIONOPTIONS_H
#define ASPOSE_CELLS_CALCULATIONOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/EncodingType.h"

#include "Aspose.Cells/CalculationPrecisionStrategy.h"

namespace Aspose { namespace Cells {
    class AbstractCalculationEngine;
    class Workbook;
} }

namespace Aspose { namespace Cells {

class CalculationOptions_Impl;

/// <summary>
/// Represents options for calculation.
/// </summary>
class CalculationOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CalculationOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CalculationOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CalculationOptions(CalculationOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CalculationOptions(const CalculationOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CalculationOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CalculationOptions& operator=(const CalculationOptions& src);
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
    /// Indicates whether errors encountered while calculating formulas should be ignored.
    /// The error may be unsupported function, external links, etc.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreError();
    /// <summary>
    /// Indicates whether errors encountered while calculating formulas should be ignored.
    /// The error may be unsupported function, external links, etc.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreError(bool value);
    /// <summary>
    /// Indicates whether calculate the dependent cells recursively when calculating one cell and it depends on other cells.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetRecursive();
    /// <summary>
    /// Indicates whether calculate the dependent cells recursively when calculating one cell and it depends on other cells.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetRecursive(bool value);
    /// <summary>
    /// The custom formula calculation engine to extend the default calculation engine of Aspose.Cells.
    /// </summary>
    ASPOSE_CELLS_API AbstractCalculationEngine* GetCustomEngine();
    /// <summary>
    /// The custom formula calculation engine to extend the default calculation engine of Aspose.Cells.
    /// </summary>
    ASPOSE_CELLS_API void SetCustomEngine(AbstractCalculationEngine* value);
    /// <summary>
    /// Specifies the stack size for calculating cells recursively.
    /// </summary>
    /// <remarks>
    /// When there are large amount of cells need to be calculated recursively in the dependency tree,
    /// StackOverflowException may be caused in the calculation process.
    /// If so, user should specify smaller value for this property.
    /// For such situation, user should determine the proper value for this property according to the actual formulas and data.
    /// Too small value may cause performance degradation for the formula calculation.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetCalcStackSize();
    /// <summary>
    /// Specifies the stack size for calculating cells recursively.
    /// </summary>
    /// <remarks>
    /// When there are large amount of cells need to be calculated recursively in the dependency tree,
    /// StackOverflowException may be caused in the calculation process.
    /// If so, user should specify smaller value for this property.
    /// For such situation, user should determine the proper value for this property according to the actual formulas and data.
    /// Too small value may cause performance degradation for the formula calculation.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalcStackSize(int32_t value);
    /// <summary>
    /// Specifies the strategy for processing precision of calculation.
    /// </summary>
    ASPOSE_CELLS_API CalculationPrecisionStrategy GetPrecisionStrategy();
    /// <summary>
    /// Specifies the strategy for processing precision of calculation.
    /// </summary>
    ASPOSE_CELLS_API void SetPrecisionStrategy(CalculationPrecisionStrategy value);
    /// <summary>
    /// Specifies the data sources for external links used in formulas.
    /// </summary>
    /// <remarks>
    /// Like <see cref="Workbook.UpdateLinkedDataSource(Workbook[])"/>, here you may specify
    /// data sources for external links used in formulas to be calculated, especially those
    /// used in INDIRECT function. For those external links used in INDIRECT function,
    /// they are not taken as part of the external links of the workbook and cannot be updated
    /// by <see cref="Workbook.UpdateLinkedDataSource(Workbook[])"/>.
    /// </remarks>
    ASPOSE_CELLS_API Vector<Workbook> GetLinkedDataSources();
    /// <summary>
    /// Specifies the data sources for external links used in formulas.
    /// </summary>
    /// <remarks>
    /// Like <see cref="Workbook.UpdateLinkedDataSource(Workbook[])"/>, here you may specify
    /// data sources for external links used in formulas to be calculated, especially those
    /// used in INDIRECT function. For those external links used in INDIRECT function,
    /// they are not taken as part of the external links of the workbook and cannot be updated
    /// by <see cref="Workbook.UpdateLinkedDataSource(Workbook[])"/>.
    /// </remarks>
    ASPOSE_CELLS_API void SetLinkedDataSources(const Vector<Workbook>& value);
    /// <summary>
    /// Specifies the encoding used for encoding/decoding characters when calculating formulas.
    /// For functions such as CHAR, CODE, the calculated result depends on the region settings and default charset of the environment.
    /// With this property user can specify the proper encoding used for those function to get the expected result.
    /// </summary>
    ASPOSE_CELLS_API EncodingType GetCharacterEncoding();
    /// <summary>
    /// Specifies the encoding used for encoding/decoding characters when calculating formulas.
    /// For functions such as CHAR, CODE, the calculated result depends on the region settings and default charset of the environment.
    /// With this property user can specify the proper encoding used for those function to get the expected result.
    /// </summary>
    ASPOSE_CELLS_API void SetCharacterEncoding(EncodingType value);
    
};

} }

#endif
