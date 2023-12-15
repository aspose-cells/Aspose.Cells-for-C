// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLSHELPER_H
#define ASPOSE_CELLS_CELLSHELPER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {
    class Font;
    class Workbook;
} }

namespace Aspose { namespace Cells {

class CellsHelper_Impl;

/// <summary>
/// Provides helper functions.
/// </summary>
class CellsHelper {
public:
    /// <summary>
    /// Gets and sets the number of significant digits.
    /// The default value is 17.
    /// </summary>
    /// <remarks>
    /// Only could be 15 or 17 now.
    /// </remarks>
    ASPOSE_CELLS_API static int32_t GetSignificantDigits();
    /// <summary>
    /// Gets and sets the number of significant digits.
    /// The default value is 17.
    /// </summary>
    /// <remarks>
    /// Only could be 15 or 17 now.
    /// </remarks>
    ASPOSE_CELLS_API static void SetSignificantDigits(int32_t value);
    /// <summary>
    /// Gets the DPI of the machine.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API static double GetDPI();
    /// <summary>
    /// Gets the DPI of the machine.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API static void SetDPI(double value);
    /// <summary>
    /// Get width of text in unit of points.
    /// </summary>
    /// <param name="text">The text.</param>
    /// <param name="font">The font of the text.</param>
    /// <param name="scaling">The scaling of text.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static double GetTextWidth(const U16String& text, const Aspose::Cells::Font& font, double scaling);
    /// <summary>
    /// Get width of text in unit of points.
    /// </summary>
    /// <param name="text">The text.</param>
    /// <param name="font">The font of the text.</param>
    /// <param name="scaling">The scaling of text.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static double GetTextWidth(const char16_t* text, const Aspose::Cells::Font& font, double scaling);
    /// <summary>
    /// Get the release version.
    /// </summary>
    /// <returns>The release version.</returns>
    ASPOSE_CELLS_API static U16String GetVersion();
    /// <summary>
    /// Gets the cell row and column indexes according to its name.
    /// </summary>
    /// <param name="cellName">Name of cell.</param>
    /// <param name="row">Output row index</param>
    /// <param name="column">Output column index</param>
    ASPOSE_CELLS_API static void CellNameToIndex(const U16String& cellName, int32_t& row, int32_t& column);
    /// <summary>
    /// Gets the cell row and column indexes according to its name.
    /// </summary>
    /// <param name="cellName">Name of cell.</param>
    /// <param name="row">Output row index</param>
    /// <param name="column">Output column index</param>
    ASPOSE_CELLS_API static void CellNameToIndex(const char16_t* cellName, int32_t& row, int32_t& column);
    /// <summary>
    /// Gets cell name according to its row and column indexes.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="column">Column index.</param>
    /// <returns>Name of cell.</returns>
    ASPOSE_CELLS_API static U16String CellIndexToName(int32_t row, int32_t column);
    /// <summary>
    /// Gets column name according to column index.
    /// </summary>
    /// <param name="column">Column index.</param>
    /// <returns>Name of column.</returns>
    ASPOSE_CELLS_API static U16String ColumnIndexToName(int32_t column);
    /// <summary>
    /// Gets column index according to column name.
    /// </summary>
    /// <param name="columnName">Column name.</param>
    /// <returns>Column index.</returns>
    ASPOSE_CELLS_API static int32_t ColumnNameToIndex(const U16String& columnName);
    /// <summary>
    /// Gets column index according to column name.
    /// </summary>
    /// <param name="columnName">Column name.</param>
    /// <returns>Column index.</returns>
    ASPOSE_CELLS_API static int32_t ColumnNameToIndex(const char16_t* columnName);
    /// <summary>
    /// Gets row name according to row index.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <returns>Name of row.</returns>
    ASPOSE_CELLS_API static U16String RowIndexToName(int32_t row);
    /// <summary>
    /// Gets row index according to row name.
    /// </summary>
    /// <param name="rowName">Row name.</param>
    /// <returns>Row index.</returns>
    ASPOSE_CELLS_API static int32_t RowNameToIndex(const U16String& rowName);
    /// <summary>
    /// Gets row index according to row name.
    /// </summary>
    /// <param name="rowName">Row name.</param>
    /// <returns>Row index.</returns>
    ASPOSE_CELLS_API static int32_t RowNameToIndex(const char16_t* rowName);
    /// <summary>
    /// Convert the double value to the date time value.
    /// </summary>
    /// <param name="doubleValue">The double value.</param>
    /// <param name="date1904">Date 1904 system.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static Date GetDateTimeFromDouble(double doubleValue, bool date1904);
    /// <summary>
    /// Convert the date time to double value.
    /// </summary>
    /// <param name="dateTime">The date time.</param>
    /// <param name="date1904">Date 1904 system.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static double GetDoubleFromDateTime(const Date& dateTime, bool date1904);
    /// <summary>
    /// Gets or sets the startup path, which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static U16String GetStartupPath();
    /// <summary>
    /// Gets or sets the startup path, which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static void SetStartupPath(const U16String& value);
    /// <summary>
    /// Gets or sets the startup path, which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static void SetStartupPath(const char16_t* value);
    /// <summary>
    /// Gets or sets the alternate startup path, which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static U16String GetAltStartPath();
    /// <summary>
    /// Gets or sets the alternate startup path, which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static void SetAltStartPath(const U16String& value);
    /// <summary>
    /// Gets or sets the alternate startup path, which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static void SetAltStartPath(const char16_t* value);
    /// <summary>
    /// Gets or sets the library path which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static U16String GetLibraryPath();
    /// <summary>
    /// Gets or sets the library path which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static void SetLibraryPath(const U16String& value);
    /// <summary>
    /// Gets or sets the library path which is referred to by some external formula references.
    /// </summary>
    ASPOSE_CELLS_API static void SetLibraryPath(const char16_t* value);
    /// <summary>
    /// Gets all used colors in the workbook.
    /// </summary>
    /// <param name="workbook">The workbook object.</param>
    /// <returns>The used colors.</returns>
    ASPOSE_CELLS_API static Vector<Aspose::Cells::Color> GetUsedColors(const Workbook& workbook);
    /// <summary>
    /// Merges some large xls files to a xls file.
    /// </summary>
    /// <param name="files">The files.</param>
    /// <param name="cachedFile">The cached file.</param>
    /// <param name="destFile">The dest file.</param>
    /// <remarks>
    /// This method only supports merging data, style and formulas to the new file.
    /// The cached file is used to store some temporary data.
    /// </remarks>
    ASPOSE_CELLS_API static void MergeFiles(const Vector<U16String>& files, const U16String& cachedFile, const U16String& destFile);
    /// <summary>
    /// Merges some large xls files to a xls file.
    /// </summary>
    /// <param name="files">The files.</param>
    /// <param name="cachedFile">The cached file.</param>
    /// <param name="destFile">The dest file.</param>
    /// <remarks>
    /// This method only supports merging data, style and formulas to the new file.
    /// The cached file is used to store some temporary data.
    /// </remarks>
    ASPOSE_CELLS_API static void MergeFiles(const Vector<U16String>& files, const char16_t* cachedFile, const char16_t* destFile);
    /// <summary>
    /// Checks given sheet name and create a valid one when needed.
    /// If given sheet name conforms to the rules of excel sheet name, then return it.
    /// Otherwise string will be truncated if length exceeds the limit
    /// and invalid characters will be replaced with ' ', then return the rebuilt string value.
    /// </summary>
    /// <param name="nameProposal">sheet name to be used</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static U16String CreateSafeSheetName(const U16String& nameProposal);
    /// <summary>
    /// Checks given sheet name and create a valid one when needed.
    /// If given sheet name conforms to the rules of excel sheet name, then return it.
    /// Otherwise string will be truncated if length exceeds the limit
    /// and invalid characters will be replaced with ' ', then return the rebuilt string value.
    /// </summary>
    /// <param name="nameProposal">sheet name to be used</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static U16String CreateSafeSheetName(const char16_t* nameProposal);
    /// <summary>
    /// Checks given sheet name and create a valid one when needed.
    /// If given sheet name conforms to the rules of excel sheet name, then return it.
    /// Otherwise string will be truncated if length exceeds the limit
    /// and invalid characters will be replaced with given character, then return the rebuilt string value.
    /// </summary>
    /// <param name="nameProposal">sheet name to be used</param>
    /// <param name="replaceChar">character which will be used to replace invalid characters in given sheet name</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static U16String CreateSafeSheetName(const U16String& nameProposal, char16_t replaceChar);
    /// <summary>
    /// Checks given sheet name and create a valid one when needed.
    /// If given sheet name conforms to the rules of excel sheet name, then return it.
    /// Otherwise string will be truncated if length exceeds the limit
    /// and invalid characters will be replaced with given character, then return the rebuilt string value.
    /// </summary>
    /// <param name="nameProposal">sheet name to be used</param>
    /// <param name="replaceChar">character which will be used to replace invalid characters in given sheet name</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static U16String CreateSafeSheetName(const char16_t* nameProposal, char16_t replaceChar);
    /// <summary>
    /// Indicates whether the name of the sheet should be enclosed in single quotes
    /// </summary>
    /// <param name="sheetName">The name of the sheet</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static bool NeedQuoteInFormula(const U16String& sheetName);
    /// <summary>
    /// Indicates whether the name of the sheet should be enclosed in single quotes
    /// </summary>
    /// <param name="sheetName">The name of the sheet</param>
    /// <returns></returns>
    ASPOSE_CELLS_API static bool NeedQuoteInFormula(const char16_t* sheetName);
    /// <summary>
    /// Please set this property True when running on a cloud platform, such as: Azure, AWSLambda, etc,
    /// </summary>
    ASPOSE_CELLS_API static bool IsCloudPlatform();
    /// <summary>
    /// Please set this property True when running on a cloud platform, such as: Azure, AWSLambda, etc,
    /// </summary>
    ASPOSE_CELLS_API static void SetIsCloudPlatform(bool value);
    
};

} }

#endif
