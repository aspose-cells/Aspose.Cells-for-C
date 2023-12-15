// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VALIDATIONCOLLECTION_H
#define ASPOSE_CELLS_VALIDATIONCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class Validation;
} }

namespace Aspose { namespace Cells {

class ValidationCollection_Impl;

/// <summary>
/// Represents data validation collection.
/// </summary>
class ValidationCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ValidationCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ValidationCollection(ValidationCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ValidationCollection(const ValidationCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ValidationCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ValidationCollection& operator=(const ValidationCollection& src);
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
    /// Adds a data validation to the collection.
    /// </summary>
    /// <param name="ca">The area contains this validation.</param>
    /// <returns><see cref="Validation"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const CellArea& ca);
    /// <summary>
    /// Gets the <see cref="Validation"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Validation Get(int32_t index);
    /// <summary>
    /// Removes all validation setting on the cell.
    /// </summary>
    /// <param name="row">The row index of the cell.</param>
    /// <param name="column">The column index of the cell.</param>
    ASPOSE_CELLS_API void RemoveACell(int32_t row, int32_t column);
    /// <summary>
    /// Removes all validation setting on the range..
    /// </summary>
    /// <param name="ca">The range which contains the validations setting.</param>
    ASPOSE_CELLS_API void RemoveArea(const CellArea& ca);
    /// <summary>
    /// Gets the validation applied to given cell.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>Returns a <see cref="Validation"/> object or null if there is no validation for given cell</returns>
    ASPOSE_CELLS_API Validation GetValidationInCell(int32_t row, int32_t column);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
