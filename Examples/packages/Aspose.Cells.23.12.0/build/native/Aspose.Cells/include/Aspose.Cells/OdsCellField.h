// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ODS_ODSCELLFIELD_H
#define ASPOSE_CELLS_ODS_ODSCELLFIELD_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/OdsCellFieldType.h"

namespace Aspose { namespace Cells { namespace Ods {

using namespace Aspose::Cells;

class OdsCellField_Impl;

/// <summary>
/// Represents the cell field of ods.
/// </summary>
class OdsCellField {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OdsCellField_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OdsCellField(OdsCellField_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OdsCellField(const OdsCellField& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OdsCellField();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OdsCellField& operator=(const OdsCellField& src);
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
    /// Represents the custom format of the field's value.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCustomFormat();
    /// <summary>
    /// Represents the custom format of the field's value.
    /// </summary>
    ASPOSE_CELLS_API void SetCustomFormat(const U16String& value);
    /// <summary>
    /// Represents the custom format of the field's value.
    /// </summary>
    ASPOSE_CELLS_API void SetCustomFormat(const char16_t* value);
    /// <summary>
    /// Gets and sets the type of the field.
    /// </summary>
    ASPOSE_CELLS_API OdsCellFieldType GetFieldType();
    /// <summary>
    /// Gets and sets the type of the field.
    /// </summary>
    ASPOSE_CELLS_API void SetFieldType(OdsCellFieldType value);
    /// <summary>
    /// Get and sets the row index of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Get and sets the row index of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetRow(int32_t value);
    /// <summary>
    /// Get and sets the column index of the cell.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Get and sets the column index of the cell.
    /// </summary>
    ASPOSE_CELLS_API void SetColumn(int32_t value);
    
};

} } }

#endif
