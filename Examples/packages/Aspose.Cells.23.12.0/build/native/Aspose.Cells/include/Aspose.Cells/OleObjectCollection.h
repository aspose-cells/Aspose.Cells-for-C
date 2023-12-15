// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_OLEOBJECTCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_OLEOBJECTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class OleObject;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class OleObjectCollection_Impl;

/// <summary>
/// Represents embedded OLE objects.
/// </summary>
class OleObjectCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OleObjectCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OleObjectCollection(OleObjectCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OleObjectCollection(const OleObjectCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OleObjectCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OleObjectCollection& operator=(const OleObjectCollection& src);
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
    /// Adds an OleObject to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">Height of oleObject, in unit of pixel.</param>
    /// <param name="width">Width of oleObject, in unit of pixel.</param>
    /// <param name="imageData"> Image of ole object as byte array.</param>
    /// <returns><see cref="OleObject"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const Vector<uint8_t>& imageData);
    /// <summary>
    /// Adds a linked OleObject to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">Height of oleObject, in unit of pixel.</param>
    /// <param name="width">Width of oleObject, in unit of pixel.</param>
    /// <param name="imageData"> Image of ole object as byte array.</param>
    /// <param name="linkedFile"></param>
    /// <returns><see cref="OleObject"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const Vector<uint8_t>& imageData, const U16String& linkedFile);
    /// <summary>
    /// Adds a linked OleObject to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="height">Height of oleObject, in unit of pixel.</param>
    /// <param name="width">Width of oleObject, in unit of pixel.</param>
    /// <param name="imageData"> Image of ole object as byte array.</param>
    /// <param name="linkedFile"></param>
    /// <returns><see cref="OleObject"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t height, int32_t width, const Vector<uint8_t>& imageData, const char16_t* linkedFile);
    /// <summary>
    /// Gets the <see cref="OleObject"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API OleObject Get(int32_t index);
    /// <summary>
    /// Remove all embedded OLE objects.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Removes the element at the specified index.
    /// </summary>
    /// <param name="index">The specified index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
