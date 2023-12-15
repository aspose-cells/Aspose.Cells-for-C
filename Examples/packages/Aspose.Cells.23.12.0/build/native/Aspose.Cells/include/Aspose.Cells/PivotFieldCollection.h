// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFIELDCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTFIELDCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PivotFieldType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotField;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotFieldCollection_Impl;

/// <summary>
/// Represents a collection of all the PivotField objects
/// in the PivotTable's specific PivotFields type.
/// </summary>
class PivotFieldCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFieldCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection(PivotFieldCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection(const PivotFieldCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFieldCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection& operator=(const PivotFieldCollection& src);
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
    /// Gets the PivotFields type.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldType GetType();
    /// <summary>
    /// Gets the count of the pivotFields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets an enumerator over the elements in this collection in proper sequence.
    /// </summary>
    /// <returns>enumerator</returns>
    ASPOSE_CELLS_API Enumerator<PivotField> GetEnumerator();
    /// <summary>
    /// Gets the PivotField Object at the specific index.
    /// </summary>
    ASPOSE_CELLS_API PivotField Get(int32_t index);
    /// <summary>
    /// Gets the PivotField Object of the specific name.
    /// </summary>
    ASPOSE_CELLS_API PivotField Get(const U16String& name);
    /// <summary>
    /// Gets the PivotField Object of the specific name.
    /// </summary>
    ASPOSE_CELLS_API PivotField Get(const char16_t* name);
    /// <summary>
    /// Adds a PivotField Object to the specific type PivotFields.
    /// </summary>
    /// <param name="baseFieldIndex">field index in the base PivotFields.</param>
    /// <returns>the index of  the PivotField Object in this PivotFields.</returns>
    ASPOSE_CELLS_API int32_t AddByBaseIndex(int32_t baseFieldIndex);
    /// <summary>
    /// Adds a PivotField Object to the specific type PivotFields.
    /// </summary>
    /// <param name="pivotField">a PivotField Object.</param>
    /// <returns>the index of  the PivotField Object in this PivotFields.</returns>
    ASPOSE_CELLS_API int32_t Add(const PivotField& pivotField);
    /// <summary>
    /// clear all fields of PivotFieldCollection
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Moves the PivotField from current position to destination position
    /// </summary>
    /// <param name="currPos">Current position of PivotField based on zero</param>
    /// <param name="destPos">Destination position of PivotField based on zero</param>
    ASPOSE_CELLS_API void Move(int32_t currPos, int32_t destPos);
    
};

} } }

#endif
