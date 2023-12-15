// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELL_H
#define ASPOSE_CELLS_CELL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/Enumerator.h"

#include "Aspose.Cells/CellValueFormatStrategy.h"
#include "Aspose.Cells/CellValueType.h"
#include "Aspose.Cells/NumberCategoryType.h"

namespace Aspose { namespace Cells {
    class CalculationOptions;
    class Worksheet;
    class Style;
    class FormatConditionCollection;
    class StyleFlag;
    class FormulaParseOptions;
    class ReferredAreaCollection;
    class ReferredArea;
    class CellArea;
    class FontSetting;
    class ReplaceOptions;
    class Range;
    class Comment;
    class ConditionalFormattingResult;
    class Validation;
} }

namespace Aspose { namespace Cells { namespace Tables {
    class ListObject;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Tables;

class Cell_Impl;

/// <summary>
/// Encapsulates the object that represents a single Workbook cell.
/// </summary>
class ASPOSE_CELLS_API2 Cell {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Cell_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Cell(Cell_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Cell(const Cell& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Cell();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Cell& operator=(const Cell& src);
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
    /// Calculates the formula of the cell.
    /// </summary>
    /// <param name="options">Options for calculation</param>
    ASPOSE_CELLS_API void Calculate(const CalculationOptions& options);
    /// <summary>
    /// Gets the parent worksheet.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetWorksheet();
    /// <summary>
    /// Puts a boolean value into the cell.
    /// </summary>
    /// <param name="boolValue"></param>
    ASPOSE_CELLS_API void PutValue(bool boolValue);
    /// <summary>
    /// Puts an integer value into the cell.
    /// </summary>
    /// <param name="intValue">Input value</param>
    ASPOSE_CELLS_API void PutValue(int32_t intValue);
    /// <summary>
    /// Puts a double value into the cell.
    /// </summary>
    /// <param name="doubleValue">Input value</param>
    ASPOSE_CELLS_API void PutValue(double doubleValue);
    /// <summary>
    /// Puts a value into the cell, if appropriate the value will be converted to other data type and cell's number format will be reset.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    /// <param name="isConverted">True: converted to other data type if appropriate.</param>
    /// <param name="setStyle">True: set the number format to cell's style when converting to other data type</param>
    ASPOSE_CELLS_API void PutValue(const U16String& stringValue, bool isConverted, bool setStyle);
    /// <summary>
    /// Puts a value into the cell, if appropriate the value will be converted to other data type and cell's number format will be reset.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    /// <param name="isConverted">True: converted to other data type if appropriate.</param>
    /// <param name="setStyle">True: set the number format to cell's style when converting to other data type</param>
    ASPOSE_CELLS_API void PutValue(const char16_t* stringValue, bool isConverted, bool setStyle);
    /// <summary>
    /// Puts a string value into the cell and converts the value to other data type if appropriate.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    /// <param name="isConverted">True: converted to other data type if appropriate.</param>
    ASPOSE_CELLS_API void PutValue(const U16String& stringValue, bool isConverted);
    /// <summary>
    /// Puts a string value into the cell and converts the value to other data type if appropriate.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    /// <param name="isConverted">True: converted to other data type if appropriate.</param>
    ASPOSE_CELLS_API void PutValue(const char16_t* stringValue, bool isConverted);
    /// <summary>
    /// Puts a string value into the cell.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    ASPOSE_CELLS_API void PutValue(const U16String& stringValue);
    /// <summary>
    /// Puts a string value into the cell.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    ASPOSE_CELLS_API void PutValue(const char16_t* stringValue);
    /// <summary>
    /// Puts a DateTime value into the cell.
    /// </summary>
    /// <param name="dateTime">Input value</param>
    /// <remarks>Setting a DateTime value for a cell dose not means the cell will be formatted as date time automatically.
    /// DateTime value was maintained as numeric value in the data model of both ms excel and Aspose.Cells.
    /// Whether the numeric value will be taken as the numeric value itself or date time
    /// depends on the number format applied on this cell. If this cell has not been formatted as date time,
    /// it will be displayed as a numeric value even though what you input is DateTime.
    /// </remarks>
    ASPOSE_CELLS_API void PutValue(const Date& dateTime);
    /// <summary>
    /// Gets the DateTime value contained in the cell.
    /// </summary>
    ASPOSE_CELLS_API Date GetDateTimeValue();
    /// <summary>
    /// Gets row number (zero based) of the cell.
    /// </summary>
    /// <value>Cell row number</value>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets column number (zero based) of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Represents if the specified cell contains formula.
    /// </summary>
    ASPOSE_CELLS_API bool IsFormula();
    /// <summary>
    /// Represents cell value type.
    /// </summary>
    ASPOSE_CELLS_API CellValueType GetType();
    /// <summary>
    /// Gets the name of the cell.
    /// </summary>
    /// <remarks>
    /// A cell name includes its column letter and row number. For example, the name of a cell in row 0 and column 0 is A1.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Checks if the value of this cell is an error.
    /// </summary>
    /// <remarks>Also applies to formula cell to check whether the calculated result is an error.</remarks>
    ASPOSE_CELLS_API bool IsErrorValue();
    /// <summary>
    /// Indicates whether the inner value of this cell is numeric(int, double and datetime)
    /// </summary>
    /// <remarks>Also applies to formula cell to check the calculated result</remarks>
    ASPOSE_CELLS_API bool IsNumericValue();
    /// <summary>
    /// Gets the string value by specific formatted strategy.
    /// </summary>
    /// <param name="formatStrategy">The formatted strategy.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetStringValue(CellValueFormatStrategy formatStrategy);
    /// <summary>
    /// Gets the string value contained in the cell. If the type of this cell is string, then return the string value itself.
    /// For other cell types, the formatted string value (formatted with the specified style of this cell) will be returned.
    /// The formatted cell value is same with what you can get from excel when copying a cell as text(such as
    /// copying cell to text editor or exporting to csv).
    /// </summary>
    ASPOSE_CELLS_API U16String GetStringValue();
    /// <summary>
    /// Represents the category type of this cell's number formatting.
    /// </summary>
    ASPOSE_CELLS_API NumberCategoryType GetNumberCategoryType();
    /// <summary>
    /// Gets the formatted string value of this cell by cell's display style.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDisplayStringValue();
    /// <summary>
    /// Gets the integer value contained in the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIntValue();
    /// <summary>
    /// Gets the double value contained in the cell.
    /// </summary>
    ASPOSE_CELLS_API double GetDoubleValue();
    /// <summary>
    /// Gets the float value contained in the cell.
    /// </summary>
    ASPOSE_CELLS_API float GetFloatValue();
    /// <summary>
    /// Gets the boolean value contained in the cell.
    /// </summary>
    ASPOSE_CELLS_API bool GetBoolValue();
    /// <summary>
    /// Gets the width of the value in unit of pixels.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetWidthOfValue();
    /// <summary>
    /// Gets the height of the value in unit of pixels.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHeightOfValue();
    /// <summary>
    /// Gets the display style of the cell.
    /// If this cell is also affected by other settings such as conditional formatting, list objects, etc.,
    /// then the display style may be different from cell.GetStyle().
    /// </summary>
    ASPOSE_CELLS_API Style GetDisplayStyle();
    /// <summary>
    /// Gets the display style of the cell.
    /// If the cell is conditional formatted, the display style is not same as the cell.GetStyle().
    /// </summary>
    /// <param name="includeMergedBorders">Indicates whether checking borders of the merged cells.</param>
    ASPOSE_CELLS_API Style GetDisplayStyle(bool includeMergedBorders);
    /// <summary>
    /// Gets format conditions which applies to this cell.
    /// </summary>
    /// <returns>Returns <see cref="FormatConditionCollection"/> object</returns>
    ASPOSE_CELLS_API Vector<FormatConditionCollection> GetFormatConditions();
    /// <summary>
    /// Gets the cell style.
    /// </summary>
    /// <returns>Style object.</returns>
    /// <remarks>
    /// To change the style of the cell, please call Cell.SetStyle() method after modifying the returned style object.
    /// This method is same with <see cref="GetStyle(bool)"/> with true value for the parameter.
    /// </remarks>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// If checkBorders is true, check whether other cells' borders will effect the style of this cell.
    /// </summary>
    /// <param name="checkBorders">Check other cells' borders</param>
    /// <returns>Style object.</returns>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API Style GetStyle(bool checkBorders);
    /// <summary>
    /// Sets the cell style.
    /// </summary>
    /// <param name="style">The cell style.</param>
    /// <remarks>
    /// If the border settings are changed, the border of adjust cells will be updated too.
    /// </remarks>
    ASPOSE_CELLS_API void SetStyle(const Style& style);
    /// <summary>
    /// Apply the cell style.
    /// </summary>
    /// <param name="style">The cell style.</param>
    /// <param name="explicitFlag">True, only overwriting formatting which is explicitly set.
    /// </param>
    ASPOSE_CELLS_API void SetStyle(const Style& style, bool explicitFlag);
    /// <summary>
    /// Apply the cell style.
    /// </summary>
    /// <param name="style">The cell style.</param>
    /// <param name="flag">The style flag.</param>
    ASPOSE_CELLS_API void SetStyle(const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Indicates whether this cell has custom style settings(different from the default one inherited
    /// from corresponding row, column, or workbook).
    /// </summary>
    ASPOSE_CELLS_API bool GetHasCustomStyle();
    /// <summary>
    /// Gets cell's shared style index in the style pool.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSharedStyleIndex();
    /// <summary>
    /// Gets or sets a formula of the <see cref="Cell"/>.
    /// </summary>
    /// <remarks>A formula string always begins with an equal sign (=).
    /// And please always use comma(,) as parameters delimiter, such as "=SUM(A1, E1, H2)".
    /// </remarks>
    ASPOSE_CELLS_API U16String GetFormula();
    /// <summary>
    /// Gets or sets a formula of the <see cref="Cell"/>.
    /// </summary>
    /// <remarks>A formula string always begins with an equal sign (=).
    /// And please always use comma(,) as parameters delimiter, such as "=SUM(A1, E1, H2)".
    /// </remarks>
    ASPOSE_CELLS_API void SetFormula(const U16String& value);
    /// <summary>
    /// Gets or sets a formula of the <see cref="Cell"/>.
    /// </summary>
    /// <remarks>A formula string always begins with an equal sign (=).
    /// And please always use comma(,) as parameters delimiter, such as "=SUM(A1, E1, H2)".
    /// </remarks>
    ASPOSE_CELLS_API void SetFormula(const char16_t* value);
    /// <summary>
    /// Get the locale formatted formula of the cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFormulaLocal();
    /// <summary>
    /// Get the locale formatted formula of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetFormulaLocal(const U16String& value);
    /// <summary>
    /// Get the locale formatted formula of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetFormulaLocal(const char16_t* value);
    /// <summary>
    /// Gets or sets a R1C1 formula of the <see cref="Cell"/>.
    /// </summary>
    ASPOSE_CELLS_API U16String GetR1C1Formula();
    /// <summary>
    /// Gets or sets a R1C1 formula of the <see cref="Cell"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetR1C1Formula(const U16String& value);
    /// <summary>
    /// Gets or sets a R1C1 formula of the <see cref="Cell"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetR1C1Formula(const char16_t* value);
    /// <summary>
    /// Get the formula of this cell.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>the formula of this cell.</returns>
    ASPOSE_CELLS_API U16String GetFormula(bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets an array formula(legacy array formula entered via CTRL+SHIFT+ENTER in ms excel) to a range of cells.
    /// </summary>
    /// <param name="arrayFormula">Array formula.</param>
    /// <param name="rowNumber">Number of rows to populate result of the array formula.</param>
    /// <param name="columnNumber">Number of columns to populate result of the array formula.</param>
    ASPOSE_CELLS_API void SetArrayFormula(const U16String& arrayFormula, int32_t rowNumber, int32_t columnNumber);
    /// <summary>
    /// Sets an array formula(legacy array formula entered via CTRL+SHIFT+ENTER in ms excel) to a range of cells.
    /// </summary>
    /// <param name="arrayFormula">Array formula.</param>
    /// <param name="rowNumber">Number of rows to populate result of the array formula.</param>
    /// <param name="columnNumber">Number of columns to populate result of the array formula.</param>
    ASPOSE_CELLS_API void SetArrayFormula(const char16_t* arrayFormula, int32_t rowNumber, int32_t columnNumber);
    /// <summary>
    /// Sets an array formula to a range of cells.
    /// </summary>
    /// <param name="arrayFormula">Array formula.</param>
    /// <param name="rowNumber">Number of rows to populate result of the array formula.</param>
    /// <param name="columnNumber">Number of columns to populate result of the array formula.</param>
    /// <param name="options">Options for parsing the formula.</param>
    ASPOSE_CELLS_API void SetArrayFormula(const U16String& arrayFormula, int32_t rowNumber, int32_t columnNumber, const FormulaParseOptions& options);
    /// <summary>
    /// Sets an array formula to a range of cells.
    /// </summary>
    /// <param name="arrayFormula">Array formula.</param>
    /// <param name="rowNumber">Number of rows to populate result of the array formula.</param>
    /// <param name="columnNumber">Number of columns to populate result of the array formula.</param>
    /// <param name="options">Options for parsing the formula.</param>
    ASPOSE_CELLS_API void SetArrayFormula(const char16_t* arrayFormula, int32_t rowNumber, int32_t columnNumber, const FormulaParseOptions& options);
    /// <summary>
    /// Sets shared formulas to a range of cells.
    /// </summary>
    /// <param name="sharedFormula">Shared formula.</param>
    /// <param name="rowNumber">Number of rows to populate the formula.</param>
    /// <param name="columnNumber">Number of columns to populate the formula.</param>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API void SetSharedFormula(const U16String& sharedFormula, int32_t rowNumber, int32_t columnNumber);
    /// <summary>
    /// Sets shared formulas to a range of cells.
    /// </summary>
    /// <param name="sharedFormula">Shared formula.</param>
    /// <param name="rowNumber">Number of rows to populate the formula.</param>
    /// <param name="columnNumber">Number of columns to populate the formula.</param>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API void SetSharedFormula(const char16_t* sharedFormula, int32_t rowNumber, int32_t columnNumber);
    /// <summary>
    /// Sets shared formulas to a range of cells.
    /// </summary>
    /// <param name="sharedFormula">Shared formula.</param>
    /// <param name="rowNumber">Number of rows to populate the formula.</param>
    /// <param name="columnNumber">Number of columns to populate the formula.</param>
    /// <param name="options">Options for parsing the formula.</param>
    ASPOSE_CELLS_API void SetSharedFormula(const U16String& sharedFormula, int32_t rowNumber, int32_t columnNumber, const FormulaParseOptions& options);
    /// <summary>
    /// Sets shared formulas to a range of cells.
    /// </summary>
    /// <param name="sharedFormula">Shared formula.</param>
    /// <param name="rowNumber">Number of rows to populate the formula.</param>
    /// <param name="columnNumber">Number of columns to populate the formula.</param>
    /// <param name="options">Options for parsing the formula.</param>
    ASPOSE_CELLS_API void SetSharedFormula(const char16_t* sharedFormula, int32_t rowNumber, int32_t columnNumber, const FormulaParseOptions& options);
    /// <summary>
    /// Indicates whether this cell contains an external link.
    /// Only applies when the cell is a formula cell.
    /// </summary>
    ASPOSE_CELLS_API bool GetContainsExternalLink();
    /// <summary>
    /// Gets all references appearing in this cell's formula.
    /// </summary>
    /// <returns>
    /// Collection of all references appearing in this cell's formula.
    /// </returns>
    /// <remarks><ul>
    /// <li>Returns null if this is not a formula cell.</li>
    /// <li>All references appearing in this cell's formula will be returned no matter they are referenced or not while calculating.
    /// For example, although cell A2 in formula "=IF(TRUE,A1,A2)" is not used while calculating,
    /// it is still taken as the formula's precedents.</li>
    /// <li>To get those references which influence the calculation only, please use <see cref="GetPrecedentsInCalculation()"/>.</li>
    /// </ul></remarks>
    ASPOSE_CELLS_API ReferredAreaCollection GetPrecedents();
    /// <summary>
    /// Get all cells whose formula references to this cell directly.
    /// </summary>
    /// <param name="isAll">Indicates whether check formulas in other worksheets</param>
    /// <remarks><ul>
    /// <li>If one reference containing this cell appears in one cell's formula, that cell will be taken as
    /// the dependent of this cell, no matter the reference or this cell is used or not while calculating.
    /// For example, although cell A2 in formula "=IF(TRUE,A1,A2)" is not used while calculating,
    /// this formula is still be taken as A2's dependent.
    /// </li>
    /// <li>To get those formulas whose calculated results depend on this cell, please use <see cref="GetDependentsInCalculation(bool)"/>.</li>
    /// <li>When tracing dependents for one cell, all formulas in the workbook or worksheet will be analized and checked.
    /// So it is a time consumed process. If user need to trace dependents for lots of cells, using this method will
    /// cause poor performance. For performance consideration, user should use <see cref="GetDependentsInCalculation(bool)"/> instead.
    /// Or, user may gather precedents map of all cells by <see cref="GetPrecedents()"/> firstly,
    /// and then build the dependents map according to the precedents map.</li>
    /// </ul></remarks>
    ASPOSE_CELLS_API Vector<Cell> GetDependents(bool isAll);
    /// <summary>
    /// Gets all precedents(reference to cells in current workbook) used by this cell's formula while calculating it.
    /// </summary>
    /// <returns>Enumerator to enumerate all references(ReferredArea)</returns>
    /// <remarks>
    /// This method can only work with the situation that <see cref="FormulaSettings.EnableCalculationChain"/>
    /// is true for the workbook and the workbook has been fully calculated.
    /// If this cell is not a formula or it does not reference to any other cells, null will be returned.
    /// </remarks>
    ASPOSE_CELLS_API Enumerator<ReferredArea> GetPrecedentsInCalculation();
    /// <summary>
    /// Gets all cells whose calculated result depends on this cell.
    /// </summary>
    /// <param name="recursive">Whether returns those dependents which do not reference to this cell directly
    /// but reference to other leafs of this cell </param>
    /// <returns>Enumerator to enumerate all dependents(Cell objects)</returns>
    /// <remarks>
    /// To use this method, please make sure the workbook has been set with true value for
    /// <see cref="FormulaSettings.EnableCalculationChain"/> and has been fully calculated with this setting.
    /// If there is no formula reference to this cell, null will be returned.
    /// </remarks>
    ASPOSE_CELLS_API Enumerator<Cell> GetDependentsInCalculation(bool recursive);
    /// <summary>
    /// Indicates the cell's formula is and array formula
    /// and it is the first cell of the array.
    /// </summary>
    ASPOSE_CELLS_API bool IsArrayHeader();
    /// <summary>
    /// Indicates whether the cell's formula is dynamic array formula(true) or legacy array formula(false).
    /// </summary>
    ASPOSE_CELLS_API bool IsDynamicArrayFormula();
    /// <summary>
    /// Gets the array range if the cell's formula is an array formula.
    /// </summary>
    /// <returns>
    /// The array range.
    /// </returns>
    /// <remarks>Only applies when the cell's formula is an array formula</remarks>
    ASPOSE_CELLS_API CellArea GetArrayRange();
    /// <summary>
    /// Indicates whether the cell formula is an array formula.
    /// </summary>
    ASPOSE_CELLS_API bool IsArrayFormula();
    /// <summary>
    /// Indicates whether the cell formula is part of shared formula.
    /// </summary>
    ASPOSE_CELLS_API bool IsSharedFormula();
    /// <summary>
    /// Indicates whether this cell is part of table formula.
    /// </summary>
    ASPOSE_CELLS_API bool IsTableFormula();
    /// <summary>
    /// Sets dynamic array formula and make the formula spill into neighboring cells if possible.
    /// </summary>
    /// <param name="arrayFormula">the formula expression</param>
    /// <param name="options">options to parse formula.
    /// "Parse" option will be ignored and the formula will always be parsed immediately</param>
    /// <param name="calculateValue">whether calculate this dynamic array formula for those cells in the spilled range.</param>
    /// <returns>the range that the formula should spill into.</returns>
    ASPOSE_CELLS_API CellArea SetDynamicArrayFormula(const U16String& arrayFormula, const FormulaParseOptions& options, bool calculateValue);
    /// <summary>
    /// Sets dynamic array formula and make the formula spill into neighboring cells if possible.
    /// </summary>
    /// <param name="arrayFormula">the formula expression</param>
    /// <param name="options">options to parse formula.
    /// "Parse" option will be ignored and the formula will always be parsed immediately</param>
    /// <param name="calculateValue">whether calculate this dynamic array formula for those cells in the spilled range.</param>
    /// <returns>the range that the formula should spill into.</returns>
    ASPOSE_CELLS_API CellArea SetDynamicArrayFormula(const char16_t* arrayFormula, const FormulaParseOptions& options, bool calculateValue);
    /// <summary>
    /// Remove array formula.
    /// </summary>
    /// <param name="leaveNormalFormula">True represents converting the array formula to normal formula.</param>
    ASPOSE_CELLS_API void RemoveArrayFormula(bool leaveNormalFormula);
    /// <summary>
    /// Copies data from a source cell.
    /// </summary>
    /// <param name="cell">Source <see cref="Cell"/> object.</param>
    ASPOSE_CELLS_API void Copy(const Cell& cell);
    /// <summary>
    /// Indicates if the cell's style is set. If return false, it means this cell has a default cell format.
    /// </summary>
    ASPOSE_CELLS_API bool IsStyleSet();
    /// <summary>
    /// Returns a Characters object that represents a range of characters within the cell text.
    /// </summary>
    /// <param name="startIndex">The index of the start of the character.</param>
    /// <param name="length">The number of characters.</param>
    /// <returns>Characters object.</returns>
    /// <remarks>This method only works on cell with string value.</remarks>
    ASPOSE_CELLS_API FontSetting Characters(int32_t startIndex, int32_t length);
    /// <summary>
    /// Replace text of the cell with options.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">String value to replace</param>
    /// <param name="options"> The replace options</param>
    ASPOSE_CELLS_API void Replace(const U16String& placeHolder, const U16String& newValue, const ReplaceOptions& options);
    /// <summary>
    /// Replace text of the cell with options.
    /// </summary>
    /// <param name="placeHolder">Cell placeholder</param>
    /// <param name="newValue">String value to replace</param>
    /// <param name="options"> The replace options</param>
    ASPOSE_CELLS_API void Replace(const char16_t* placeHolder, const char16_t* newValue, const ReplaceOptions& options);
    /// <summary>
    /// Insert some characters to the cell.
    /// If the cell is rich formatted, this method could keep the original formatting.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <param name="text">Inserted text.</param>
    ASPOSE_CELLS_API void InsertText(int32_t index, const U16String& text);
    /// <summary>
    /// Insert some characters to the cell.
    /// If the cell is rich formatted, this method could keep the original formatting.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <param name="text">Inserted text.</param>
    ASPOSE_CELLS_API void InsertText(int32_t index, const char16_t* text);
    /// <summary>
    /// Indicates whether the cell string value is a rich text.
    /// </summary>
    ASPOSE_CELLS_API bool IsRichText();
    /// <summary>
    /// Returns all Characters objects
    /// that represents a range of characters within the cell text.
    /// </summary>
    /// <returns>All Characters objects </returns>
    ASPOSE_CELLS_API Vector<FontSetting> GetCharacters();
    /// <summary>
    /// Returns all Characters objects
    /// that represents a range of characters within the cell text.
    /// </summary>
    /// <param name="flag">Indicates whether applying table style to the cell if the cell is in the table.</param>
    /// <returns>All Characters objects </returns>
    ASPOSE_CELLS_API Vector<FontSetting> GetCharacters(bool flag);
    /// <summary>
    /// Sets rich text format of the cell.
    /// </summary>
    /// <param name="characters">All Characters objects.</param>
    ASPOSE_CELLS_API void SetCharacters(const Vector<FontSetting>& characters);
    /// <summary>
    /// Checks if a cell is part of a merged range or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsMerged();
    /// <summary>
    /// Returns a <see cref="Range"/> object which represents a merged range.
    /// </summary>
    /// <returns><see cref="Range"/> object. Null if this cell is not merged.</returns>
    ASPOSE_CELLS_API Range GetMergedRange();
    /// <summary>
    /// Gets the comment of this cell.
    /// </summary>
    /// <remarks>
    /// If there is no comment applies to the cell, returns null.
    /// </remarks>
    ASPOSE_CELLS_API Comment GetComment();
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this cell.
    /// </summary>
    ASPOSE_CELLS_API U16String GetHtmlString();
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this cell.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlString(const U16String& value);
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this cell.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlString(const char16_t* value);
    /// <summary>
    /// Gets the html string which contains data and some formats in this cell.
    /// </summary>
    /// <param name="html5">Indicates whether the value is compatible for html5</param>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String GetHtmlString(bool html5);
    /// <summary>
    /// Returns a string represents the current Cell object.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToString();
    /// <summary>
    /// Convert <see cref="Cell"/> to JSON struct data.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToJson();
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for current Cell object.</returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    /// <summary>
    /// Checks whether this object refers to the same cell with another cell object.
    /// </summary>
    /// <param name="cell">another cell object</param>
    /// <returns>true if two cell objects refers to the same cell.</returns>
    ASPOSE_CELLS_API bool Equals(const Cell& cell);
    /// <summary>
    /// Get the result of the conditional formatting.
    /// </summary>
    /// <remarks>
    /// Returns null if no conditional formatting is applied to this cell,
    /// </remarks>
    ASPOSE_CELLS_API ConditionalFormattingResult GetConditionalFormattingResult();
    /// <summary>
    /// Gets the validation applied to this cell.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Validation GetValidation();
    /// <summary>
    /// Gets the value of validation which applied to this cell.
    /// </summary>
    /// <returns>
    /// </returns>
    ASPOSE_CELLS_API bool GetValidationValue();
    /// <summary>
    /// Gets the table which contains this cell.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API ListObject GetTable();
    /// <summary>
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    
};

} }

#endif
