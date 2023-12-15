// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SAVING_SQLSCRIPTSAVEOPTIONS_H
#define ASPOSE_CELLS_SAVING_SQLSCRIPTSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/SqlScriptOperatorType.h"

namespace Aspose { namespace Cells { namespace Saving {
    class SqlScriptColumnTypeMap;
} } }

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells { namespace Saving {

using namespace Aspose::Cells;

class SqlScriptSaveOptions_Impl;

/// <summary>
/// Represents the options of saving sql.
/// </summary>
class SqlScriptSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SqlScriptSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving sql file.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptSaveOptions(SqlScriptSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptSaveOptions(const SqlScriptSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SqlScriptSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SqlScriptSaveOptions& operator=(const SqlScriptSaveOptions& src);
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
    /// Check if the table name exists before creating
    /// </summary>
    ASPOSE_CELLS_API bool GetCheckIfTableExists();
    /// <summary>
    /// Check if the table name exists before creating
    /// </summary>
    ASPOSE_CELLS_API void SetCheckIfTableExists(bool value);
    /// <summary>
    /// Gets and sets the map of column type for different database.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptColumnTypeMap GetColumnTypeMap();
    /// <summary>
    /// Gets and sets the map of column type for different database.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnTypeMap(const SqlScriptColumnTypeMap& value);
    /// <summary>
    /// Check all data to find columns' data type.
    /// </summary>
    /// <remarks>
    /// The default value is false, we only check the first row for performance.
    /// If this property is true and the columns contains mixed value type, the columns' type will be text.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCheckAllDataForColumnType();
    /// <summary>
    /// Check all data to find columns' data type.
    /// </summary>
    /// <remarks>
    /// The default value is false, we only check the first row for performance.
    /// If this property is true and the columns contains mixed value type, the columns' type will be text.
    /// </remarks>
    ASPOSE_CELLS_API void SetCheckAllDataForColumnType(bool value);
    /// <summary>
    /// Insert blank line between each data.
    /// </summary>
    /// <remarks>
    /// If <see cref="Separator"/> is '\n' , it's better to set this property as true to increase readability.
    /// </remarks>
    ASPOSE_CELLS_API bool GetAddBlankLineBetweenRows();
    /// <summary>
    /// Insert blank line between each data.
    /// </summary>
    /// <remarks>
    /// If <see cref="Separator"/> is '\n' , it's better to set this property as true to increase readability.
    /// </remarks>
    ASPOSE_CELLS_API void SetAddBlankLineBetweenRows(bool value);
    /// <summary>
    /// Gets and sets character separator of sql script.
    /// </summary>
    /// <remarks>
    /// Only can be ' ' or '\n'.
    /// If the
    /// </remarks>
    ASPOSE_CELLS_API char16_t GetSeparator();
    /// <summary>
    /// Gets and sets character separator of sql script.
    /// </summary>
    /// <remarks>
    /// Only can be ' ' or '\n'.
    /// If the
    /// </remarks>
    ASPOSE_CELLS_API void SetSeparator(char16_t value);
    /// <summary>
    /// Gets and sets the operator type of sql.
    /// </summary>
    ASPOSE_CELLS_API SqlScriptOperatorType GetOperatorType();
    /// <summary>
    /// Gets and sets the operator type of sql.
    /// </summary>
    ASPOSE_CELLS_API void SetOperatorType(SqlScriptOperatorType value);
    /// <summary>
    /// Represents which column is primary key of the data table.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPrimaryKey();
    /// <summary>
    /// Represents which column is primary key of the data table.
    /// </summary>
    ASPOSE_CELLS_API void SetPrimaryKey(int32_t value);
    /// <summary>
    /// Indicates whether exporting sql of creating table.
    /// </summary>
    ASPOSE_CELLS_API bool GetCreateTable();
    /// <summary>
    /// Indicates whether exporting sql of creating table.
    /// </summary>
    ASPOSE_CELLS_API void SetCreateTable(bool value);
    /// <summary>
    /// Gets and sets the name of id column.
    /// </summary>
    /// <remarks>
    /// If this property is set , a column will be inserted with automatical increment int value.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetIdName();
    /// <summary>
    /// Gets and sets the name of id column.
    /// </summary>
    /// <remarks>
    /// If this property is set , a column will be inserted with automatical increment int value.
    /// </remarks>
    ASPOSE_CELLS_API void SetIdName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of id column.
    /// </summary>
    /// <remarks>
    /// If this property is set , a column will be inserted with automatical increment int value.
    /// </remarks>
    ASPOSE_CELLS_API void SetIdName(const char16_t* value);
    /// <summary>
    /// Gets and sets the start id.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="IdName"/> is set.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetStartId();
    /// <summary>
    /// Gets and sets the start id.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="IdName"/> is set.
    /// </remarks>
    ASPOSE_CELLS_API void SetStartId(int32_t value);
    /// <summary>
    /// Gets and sets the table name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTableName();
    /// <summary>
    /// Gets and sets the table name.
    /// </summary>
    ASPOSE_CELLS_API void SetTableName(const U16String& value);
    /// <summary>
    /// Gets and sets the table name.
    /// </summary>
    ASPOSE_CELLS_API void SetTableName(const char16_t* value);
    /// <summary>
    /// Indicates whether exporting all data as string value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportAsString();
    /// <summary>
    /// Indicates whether exporting all data as string value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportAsString(bool value);
    /// <summary>
    /// Represents the indexes of exported sheets.
    /// </summary>
    ASPOSE_CELLS_API Vector<int32_t> GetSheetIndexes();
    /// <summary>
    /// Represents the indexes of exported sheets.
    /// </summary>
    ASPOSE_CELLS_API void SetSheetIndexes(const Vector<int32_t>& value);
    /// <summary>
    /// Gets or sets the exporting range.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetExportArea();
    /// <summary>
    /// Gets or sets the exporting range.
    /// </summary>
    ASPOSE_CELLS_API void SetExportArea(const CellArea& value);
    /// <summary>
    /// Indicates whether the range contains header row.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasHeaderRow();
    /// <summary>
    /// Indicates whether the range contains header row.
    /// </summary>
    ASPOSE_CELLS_API void SetHasHeaderRow(bool value);
    
};

} } }

#endif
