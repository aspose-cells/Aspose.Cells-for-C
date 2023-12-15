// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CALCULATIONDATA_H
#define ASPOSE_CELLS_CALCULATIONDATA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Workbook;
    class Worksheet;
    class Cell;
} }

namespace Aspose { namespace Cells {

class CalculationData_Impl;

/// <summary>
/// Represents the required data when calculating one function, such as function name, parameters, ...etc.
/// </summary>
/// <remarks>All objects provided by this class are for "read" purpose only.
/// User should not change any data in the Workbook during the formula calculation process,
/// Otherwise unexpected result or Exception may be caused.</remarks>
class CalculationData {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CalculationData_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CalculationData(CalculationData_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CalculationData(const CalculationData& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CalculationData();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CalculationData& operator=(const CalculationData& src);
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
    /// Gets the Workbook object where the function is in.
    /// </summary>
    ASPOSE_CELLS_API Workbook GetWorkbook();
    /// <summary>
    /// Gets the Worksheet object where the function is in.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetWorksheet();
    /// <summary>
    /// Gets the row index of the cell where the function is in.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCellRow();
    /// <summary>
    /// Gets the column index of the cell where the function is in.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCellColumn();
    /// <summary>
    /// Gets the Cell object where the function is in.
    /// </summary>
    /// <remarks>When calculating a formula without setting it to a cell,
    /// such as by <see cref="Worksheet.CalculateFormula(string, CalculationOptions)"/>,
    /// the formula will be calculated just like it has been set to cell A1,
    /// so both <see cref="CellRow"/> and <see cref="CellColumn"/> are 0.
    /// However, cell A1 in the worksheet may has not been instantiated.
    /// So for such kind of situation this property will be null.</remarks>
    ASPOSE_CELLS_API Cell GetCell();
    /// <summary>
    /// Gets the function name to be calculated.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFunctionName();
    /// <summary>
    /// Gets the count of parameters
    /// </summary>
    ASPOSE_CELLS_API int32_t GetParamCount();
    /// <summary>
    /// Gets the literal text of the parameter at given index.
    /// </summary>
    /// <param name="index">index of the parameter(0 based)</param>
    /// <returns>literal text of the parameter</returns>
    ASPOSE_CELLS_API U16String GetParamText(int32_t index);
    
};

} }

#endif
