// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WORKSHEETCOLLECTION_H
#define ASPOSE_CELLS_WORKSHEETCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/SheetType.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtensionTaskPaneCollection;
    class WebExtensionCollection;
} } }

namespace Aspose { namespace Cells {
    class ThreadedCommentAuthorCollection;
    class Range;
    class UnionRange;
    class NameCollection;
    class Worksheet;
    class DxfCollection;
    class XmlMapCollection;
    class ExternalLinkCollection;
} }

namespace Aspose { namespace Cells { namespace Properties {
    class BuiltInDocumentPropertyCollection;
    class CustomDocumentPropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Tables {
    class TableStyleCollection;
} } }

namespace Aspose { namespace Cells { namespace Revisions {
    class RevisionLogCollection;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Properties;
using namespace Aspose::Cells::Revisions;
using namespace Aspose::Cells::Tables;
using namespace Aspose::Cells::WebExtensions;

class WorksheetCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Worksheet"/> objects.
/// </summary>
class WorksheetCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WorksheetCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WorksheetCollection(WorksheetCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WorksheetCollection(const WorksheetCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WorksheetCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WorksheetCollection& operator=(const WorksheetCollection& src);
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
    /// Gets the list of task panes.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionTaskPaneCollection GetWebExtensionTaskPanes();
    /// <summary>
    /// Gets the list of task panes.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionCollection GetWebExtensions();
    /// <summary>
    /// Gets the list of threaded comment authors.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthorCollection GetThreadedCommentAuthors();
    /// <summary>
    /// Indicates whether refresh all connections on opening file in MS Excel.
    /// </summary>
    ASPOSE_CELLS_API bool IsRefreshAllConnections();
    /// <summary>
    /// Indicates whether refresh all connections on opening file in MS Excel.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRefreshAllConnections(bool value);
    /// <summary>
    /// Creates a <see cref="Range"/> object from an address of the range.
    /// </summary>
    /// <param name="address">The address of the range.</param>
    /// <param name="sheetIndex">The sheet index.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(const U16String& address, int32_t sheetIndex);
    /// <summary>
    /// Creates a <see cref="Range"/> object from an address of the range.
    /// </summary>
    /// <param name="address">The address of the range.</param>
    /// <param name="sheetIndex">The sheet index.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API Range CreateRange(const char16_t* address, int32_t sheetIndex);
    /// <summary>
    /// Creates a <see cref="Range"/> object from an address of the range.
    /// </summary>
    /// <param name="address">The address of the range.</param>
    /// <param name="sheetIndex">The sheet index.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API UnionRange CreateUnionRange(const U16String& address, int32_t sheetIndex);
    /// <summary>
    /// Creates a <see cref="Range"/> object from an address of the range.
    /// </summary>
    /// <param name="address">The address of the range.</param>
    /// <param name="sheetIndex">The sheet index.</param>
    /// <returns>A <see cref="Range"/> object</returns>
    ASPOSE_CELLS_API UnionRange CreateUnionRange(const char16_t* address, int32_t sheetIndex);
    /// <summary>
    /// Gets the collection of all the Name objects in the spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API NameCollection GetNames();
    /// <summary>
    /// Gets the <see cref="Worksheet"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Worksheet Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="Worksheet"/> element with the specified name.
    /// </summary>
    /// <param name="sheetName">Worksheet name</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API Worksheet Get(const U16String& sheetName);
    /// <summary>
    /// Gets the <see cref="Worksheet"/> element with the specified name.
    /// </summary>
    /// <param name="sheetName">Worksheet name</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API Worksheet Get(const char16_t* sheetName);
    /// <summary>
    /// Gets the worksheet by the code name.
    /// </summary>
    /// <param name="codeName">Worksheet code name.</param>
    /// <returns>The element with the specified code name.</returns>
    ASPOSE_CELLS_API Worksheet GetSheetByCodeName(const U16String& codeName);
    /// <summary>
    /// Gets the worksheet by the code name.
    /// </summary>
    /// <param name="codeName">Worksheet code name.</param>
    /// <returns>The element with the specified code name.</returns>
    ASPOSE_CELLS_API Worksheet GetSheetByCodeName(const char16_t* codeName);
    /// <summary>
    /// Represents the name of active worksheet when the spreadsheet is opened.
    /// </summary>
    ASPOSE_CELLS_API U16String GetActiveSheetName();
    /// <summary>
    /// Represents the name of active worksheet when the spreadsheet is opened.
    /// </summary>
    ASPOSE_CELLS_API void SetActiveSheetName(const U16String& value);
    /// <summary>
    /// Represents the name of active worksheet when the spreadsheet is opened.
    /// </summary>
    ASPOSE_CELLS_API void SetActiveSheetName(const char16_t* value);
    /// <summary>
    /// Represents the index of active worksheet when the spreadsheet is opened.
    /// </summary>
    /// <remarks>Sheet index is zero based.</remarks>
    ASPOSE_CELLS_API int32_t GetActiveSheetIndex();
    /// <summary>
    /// Represents the index of active worksheet when the spreadsheet is opened.
    /// </summary>
    /// <remarks>Sheet index is zero based.</remarks>
    ASPOSE_CELLS_API void SetActiveSheetIndex(int32_t value);
    /// <summary>
    /// Sorts the defined names.
    /// </summary>
    /// <remarks>If you create a large amount of named ranges in the Excel file,
    /// please call this method after all named ranges are created and before saving </remarks>
    ASPOSE_CELLS_API void SortNames();
    /// <summary>
    /// Insert a worksheet.
    /// </summary>
    /// <param name="index">The sheet index</param>
    /// <param name="sheetType">The sheet type.</param>
    /// <returns>Returns an inserted worksheet.</returns>
    ASPOSE_CELLS_API Worksheet Insert(int32_t index, SheetType sheetType);
    /// <summary>
    /// Insert a worksheet.
    /// </summary>
    /// <param name="index">The sheet index</param>
    /// <param name="sheetType">The sheet type.</param>
    /// <param name="sheetName">The sheet name.</param>
    /// <returns>Returns an inserted worksheet.</returns>
    ASPOSE_CELLS_API Worksheet Insert(int32_t index, SheetType sheetType, const U16String& sheetName);
    /// <summary>
    /// Insert a worksheet.
    /// </summary>
    /// <param name="index">The sheet index</param>
    /// <param name="sheetType">The sheet type.</param>
    /// <param name="sheetName">The sheet name.</param>
    /// <returns>Returns an inserted worksheet.</returns>
    ASPOSE_CELLS_API Worksheet Insert(int32_t index, SheetType sheetType, const char16_t* sheetName);
    /// <summary>
    /// Adds a worksheet to the collection.
    /// </summary>
    /// <param name="type">Worksheet type.</param>
    /// <returns><see cref="Worksheet"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(SheetType type);
    /// <summary>
    /// Swaps the two sheets.
    /// </summary>
    /// <param name="sheetIndex1">The first worksheet.</param>
    /// <param name="sheetIndex2">The second worksheet.</param>
    ASPOSE_CELLS_API void SwapSheet(int32_t sheetIndex1, int32_t sheetIndex2);
    /// <summary>
    /// Adds a worksheet to the collection.
    /// </summary>
    /// <returns><see cref="Worksheet"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add();
    /// <summary>
    /// Adds a worksheet to the collection.
    /// </summary>
    /// <param name="sheetName">Worksheet name</param>
    /// <returns><see cref="Worksheet"/> object.</returns>
    ASPOSE_CELLS_API Worksheet Add(const U16String& sheetName);
    /// <summary>
    /// Adds a worksheet to the collection.
    /// </summary>
    /// <param name="sheetName">Worksheet name</param>
    /// <returns><see cref="Worksheet"/> object.</returns>
    ASPOSE_CELLS_API Worksheet Add(const char16_t* sheetName);
    /// <summary>
    /// Adds addin function into the workbook
    /// </summary>
    /// <param name="addInFile">the file contains the addin functions</param>
    /// <param name="functionName">the addin function name</param>
    /// <param name="lib">whether the given addin file is in the directory or sub-directory of Workbook Add-In library.
    /// This flag takes effect and makes difference when given addInFile is of relative path:
    /// true denotes the path is relative to Add-In library and false denotes the path is relative to this Workbook.</param>
    /// <returns>ID of the data which contains given addin function</returns>
    ASPOSE_CELLS_API int32_t RegisterAddInFunction(const U16String& addInFile, const U16String& functionName, bool lib);
    /// <summary>
    /// Adds addin function into the workbook
    /// </summary>
    /// <param name="addInFile">the file contains the addin functions</param>
    /// <param name="functionName">the addin function name</param>
    /// <param name="lib">whether the given addin file is in the directory or sub-directory of Workbook Add-In library.
    /// This flag takes effect and makes difference when given addInFile is of relative path:
    /// true denotes the path is relative to Add-In library and false denotes the path is relative to this Workbook.</param>
    /// <returns>ID of the data which contains given addin function</returns>
    ASPOSE_CELLS_API int32_t RegisterAddInFunction(const char16_t* addInFile, const char16_t* functionName, bool lib);
    /// <summary>
    /// Adds addin function into the workbook
    /// </summary>
    /// <param name="id">ID of the data which contains addin functions,
    /// can be got by the first call of <see cref="RegisterAddInFunction(string, string, bool)"/> for the same addin file.</param>
    /// <param name="functionName">the addin function name</param>
    /// <returns>URL of the addin file which contains addin functions</returns>
    ASPOSE_CELLS_API U16String RegisterAddInFunction(int32_t id, const U16String& functionName);
    /// <summary>
    /// Adds addin function into the workbook
    /// </summary>
    /// <param name="id">ID of the data which contains addin functions,
    /// can be got by the first call of <see cref="RegisterAddInFunction(string, string, bool)"/> for the same addin file.</param>
    /// <param name="functionName">the addin function name</param>
    /// <returns>URL of the addin file which contains addin functions</returns>
    ASPOSE_CELLS_API U16String RegisterAddInFunction(int32_t id, const char16_t* functionName);
    /// <summary>
    /// Removes the element at a specified name.
    /// </summary>
    /// <param name="name">The name of the element to remove.</param>
    ASPOSE_CELLS_API void RemoveAt(const U16String& name);
    /// <summary>
    /// Removes the element at a specified name.
    /// </summary>
    /// <param name="name">The name of the element to remove.</param>
    ASPOSE_CELLS_API void RemoveAt(const char16_t* name);
    /// <summary>
    /// Removes the element at a specified index.
    /// </summary>
    /// <param name="index">The index value of the element to remove.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Clear all worksheets.
    /// </summary>
    /// <remarks>
    /// A workbook must contains a worksheet.
    /// </remarks>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Adds a worksheet to the collection and copies data from an existed worksheet.
    /// </summary>
    /// <param name="sheetName">Name of source worksheet.</param>
    /// <returns><see cref="Worksheet"/> object index.</returns>
    /// <exception cref="CellsException">Specifies an invalid worksheet name.</exception>
    ASPOSE_CELLS_API int32_t AddCopy(const U16String& sheetName);
    /// <summary>
    /// Adds a worksheet to the collection and copies data from an existed worksheet.
    /// </summary>
    /// <param name="sheetName">Name of source worksheet.</param>
    /// <returns><see cref="Worksheet"/> object index.</returns>
    /// <exception cref="CellsException">Specifies an invalid worksheet name.</exception>
    ASPOSE_CELLS_API int32_t AddCopy(const char16_t* sheetName);
    /// <summary>
    /// Adds a worksheet to the collection and copies data from an existed worksheet.
    /// </summary>
    /// <param name="sheetIndex">Index of source worksheet.</param>
    /// <returns><see cref="Worksheet"/> object index.</returns>
    ASPOSE_CELLS_API int32_t AddCopy(int32_t sheetIndex);
    /// <summary>
    /// Copy a group of worksheets.
    /// </summary>
    /// <param name="source">The source worksheets.</param>
    /// <param name="destSheetNames">The names of the copied sheets.</param>
    ASPOSE_CELLS_API void AddCopy(const Vector<Worksheet>& source, const Vector<U16String>& destSheetNames);
    /// <summary>
    /// Gets the master differential formatting records.
    /// </summary>
    ASPOSE_CELLS_API DxfCollection GetDxfs();
    /// <summary>
    /// Gets Range object by pre-defined name.
    /// </summary>
    /// <param name="rangeName">Name of range.</param>
    /// <returns>Range object.<p></p>Returns null if the named range does not exist.</returns>
    ASPOSE_CELLS_API Range GetRangeByName(const U16String& rangeName);
    /// <summary>
    /// Gets Range object by pre-defined name.
    /// </summary>
    /// <param name="rangeName">Name of range.</param>
    /// <returns>Range object.<p></p>Returns null if the named range does not exist.</returns>
    ASPOSE_CELLS_API Range GetRangeByName(const char16_t* rangeName);
    /// <summary>
    /// Gets <see cref="Range"/> by pre-defined name or table's name
    /// </summary>
    /// <param name="rangeName">Name of range or table's name.</param>
    /// <param name="currentSheetIndex">The sheet index. -1 represents global .</param>
    /// <param name="includeTable">Indicates whether checking all tables.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Range GetRangeByName(const U16String& rangeName, int32_t currentSheetIndex, bool includeTable);
    /// <summary>
    /// Gets <see cref="Range"/> by pre-defined name or table's name
    /// </summary>
    /// <param name="rangeName">Name of range or table's name.</param>
    /// <param name="currentSheetIndex">The sheet index. -1 represents global .</param>
    /// <param name="includeTable">Indicates whether checking all tables.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Range GetRangeByName(const char16_t* rangeName, int32_t currentSheetIndex, bool includeTable);
    /// <summary>
    /// Gets all pre-defined named ranges in the spreadsheet.
    /// </summary>
    /// <returns>An array of Range objects.
    /// If the defined Name's reference is external or has multiple ranges, no Range object will be returned for this Name.
    /// <p></p>Returns null if the named range does not exist.</returns>
    ASPOSE_CELLS_API Vector<Range> GetNamedRanges();
    /// <summary>
    /// Gets all pre-defined named ranges in the spreadsheet.
    /// </summary>
    /// <returns>An array of Range objects.<p></p>Returns null if the named range does not exist.</returns>
    ASPOSE_CELLS_API Vector<Range> GetNamedRangesAndTables();
    /// <summary>
    /// Gets and sets the XML maps in the workbook.
    /// </summary>
    ASPOSE_CELLS_API XmlMapCollection GetXmlMaps();
    /// <summary>
    /// Gets and sets the XML maps in the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetXmlMaps(const XmlMapCollection& value);
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> collection that represents all the built-in document properties of the spreadsheet.
    /// </summary>
    /// <remarks>A new property cannot be added to built-in document properties list. You can only get a built-in property and change its value.
    /// The following is the built-in properties name list:
    /// <p>Title</p>
    /// <p>Subject</p>
    /// <p>Author</p>
    /// <p>Keywords</p>
    /// <p>Comments</p>
    /// <p>Template</p>
    /// <p>Last Author</p>
    /// <p>Revision Number</p>
    /// <p>Application Name</p>
    /// <p>Last Print Date</p>
    /// <p>Creation Date</p>
    /// <p>Last Save Time</p>
    /// <p>Total Editing Time</p>
    /// <p>Number of Pages</p>
    /// <p>Number of Words</p>
    /// <p>Number of Characters</p>
    /// <p>Security</p>
    /// <p>Category</p>
    /// <p>Format</p>
    /// <p>Manager</p>
    /// <p>Company</p>
    /// <p>Number of Bytes</p>
    /// <p>Number of Lines</p>
    /// <p>Number of Paragraphs</p>
    /// <p>Number of Slides</p>
    /// <p>Number of Notes</p>
    /// <p>Number of Hidden Slides</p>
    /// <p>Number of Multimedia Clips</p></remarks>
    ASPOSE_CELLS_API BuiltInDocumentPropertyCollection GetBuiltInDocumentProperties();
    /// <summary>
    /// Returns a <see cref="DocumentProperty"/> collection that represents all the custom document properties of the spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API CustomDocumentPropertyCollection GetCustomDocumentProperties();
    /// <summary>
    /// Sets displayed size when Workbook file is used as an Ole object.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endColumn">End column index.</param>
    /// <remarks>This method is generally used to adjust display size in ppt file or doc file.</remarks>
    ASPOSE_CELLS_API void SetOleSize(int32_t startRow, int32_t endRow, int32_t startColumn, int32_t endColumn);
    /// <summary>
    /// Represents external links in a workbook.
    /// </summary>
    ASPOSE_CELLS_API ExternalLinkCollection GetExternalLinks();
    /// <summary>
    /// Gets <see cref="TableStyles"/> object.
    /// </summary>
    ASPOSE_CELLS_API TableStyleCollection GetTableStyles();
    /// <summary>
    /// Clears pivot tables from the spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API void ClearPivottables();
    /// <summary>
    /// Represents revision logs.
    /// </summary>
    ASPOSE_CELLS_API RevisionLogCollection GetRevisionLogs();
    /// <summary>
    /// Refresh all pivot tables and charts with pivot source.
    /// </summary>
    ASPOSE_CELLS_API void RefreshAll();
    /// <summary>
    /// Refreshes all the PivotTables in the WorksheetCollection.
    /// </summary>
    ASPOSE_CELLS_API void RefreshPivotTables();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
