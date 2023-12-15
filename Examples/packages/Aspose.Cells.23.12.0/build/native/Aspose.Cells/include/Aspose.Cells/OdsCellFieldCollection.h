// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ODS_ODSCELLFIELDCOLLECTION_H
#define ASPOSE_CELLS_ODS_ODSCELLFIELDCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/OdsCellFieldType.h"

namespace Aspose { namespace Cells { namespace Ods {
    class OdsCellField;
} } }

namespace Aspose { namespace Cells { namespace Ods {

using namespace Aspose::Cells;

class OdsCellFieldCollection_Impl;

/// <summary>
/// Represents the fields of ODS.
/// </summary>
class OdsCellFieldCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OdsCellFieldCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OdsCellFieldCollection(OdsCellFieldCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OdsCellFieldCollection(const OdsCellFieldCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OdsCellFieldCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OdsCellFieldCollection& operator=(const OdsCellFieldCollection& src);
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
    /// Gets the field by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API OdsCellField Get(int32_t index);
    /// <summary>
    /// Gets the field by row and column index.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API OdsCellField Get(int32_t row, int32_t column);
    /// <summary>
    /// Adds a field.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <param name="fieldType">The type of the field.</param>
    /// <param name="format">The number format of the field.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column, OdsCellFieldType fieldType, const U16String& format);
    /// <summary>
    /// Adds a field.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <param name="fieldType">The type of the field.</param>
    /// <param name="format">The number format of the field.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column, OdsCellFieldType fieldType, const char16_t* format);
    /// <summary>
    /// Update fields value to the cells.
    /// </summary>
    ASPOSE_CELLS_API void UpdateFieldsValue();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
