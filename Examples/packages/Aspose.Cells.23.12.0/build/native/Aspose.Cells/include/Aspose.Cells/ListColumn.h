// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_LISTCOLUMN_H
#define ASPOSE_CELLS_TABLES_LISTCOLUMN_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TotalsCalculation.h"

namespace Aspose { namespace Cells {
    class Range;
    class Style;
} }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class ListColumn_Impl;

/// <summary>
/// Represents a column in a Table.
/// </summary>
class ListColumn {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ListColumn_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ListColumn(ListColumn_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ListColumn(const ListColumn& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ListColumn();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ListColumn& operator=(const ListColumn& src);
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
    /// Gets and sets the name of the column.
    /// </summary>
    /// <remarks>
    /// If sets the name of the column, the according cell' value will be changed too.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the column.
    /// </summary>
    /// <remarks>
    /// If sets the name of the column, the according cell' value will be changed too.
    /// </remarks>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the column.
    /// </summary>
    /// <remarks>
    /// If sets the name of the column, the according cell' value will be changed too.
    /// </remarks>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets and sets the type of calculation in the Totals row of the list column.
    /// </summary>
    ASPOSE_CELLS_API TotalsCalculation GetTotalsCalculation();
    /// <summary>
    /// Gets and sets the type of calculation in the Totals row of the list column.
    /// </summary>
    ASPOSE_CELLS_API void SetTotalsCalculation(TotalsCalculation value);
    /// <summary>
    /// Gets the range of this list column.
    /// </summary>
    ASPOSE_CELLS_API Range GetRange();
    /// <summary>
    /// Gets the formula of totals row of this list column.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The formula of this list column.</returns>
    ASPOSE_CELLS_API U16String GetCustomTotalsRowFormula(bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the formula of totals row of this list column.
    /// </summary>
    /// <param name="formula">the formula for this list column.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetCustomTotalsRowFormula(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the formula of totals row of this list column.
    /// </summary>
    /// <param name="formula">the formula for this list column.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetCustomTotalsRowFormula(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets and sets the formula of the list column.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormula();
    /// <summary>
    /// Gets and sets the formula of the list column.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula(const U16String& value);
    /// <summary>
    /// Gets and sets the formula of the list column.
    /// </summary>
    ASPOSE_CELLS_API void SetFormula(const char16_t* value);
    /// <summary>
    /// Gets the formula of this list column.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The formula of this list column.</returns>
    ASPOSE_CELLS_API U16String GetCustomCalculatedFormula(bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the formula for this list column.
    /// </summary>
    /// <param name="formula">the formula for this list column.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetCustomCalculatedFormula(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the formula for this list column.
    /// </summary>
    /// <param name="formula">the formula for this list column.</param>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    ASPOSE_CELLS_API void SetCustomCalculatedFormula(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets and sets the display labels of total row.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTotalsRowLabel();
    /// <summary>
    /// Gets and sets the display labels of total row.
    /// </summary>
    ASPOSE_CELLS_API void SetTotalsRowLabel(const U16String& value);
    /// <summary>
    /// Gets and sets the display labels of total row.
    /// </summary>
    ASPOSE_CELLS_API void SetTotalsRowLabel(const char16_t* value);
    /// <summary>
    /// Gets the style of the data in this column of the table.
    /// </summary>
    ASPOSE_CELLS_API Style GetDataStyle();
    /// <summary>
    /// Sets the style of the data in this column of the table.
    /// </summary>
    ASPOSE_CELLS_API void SetDataStyle(const Style& style);
    
};

} } }

#endif
