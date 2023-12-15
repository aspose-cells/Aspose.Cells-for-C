// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_PICTURECOLLECTION_H
#define ASPOSE_CELLS_DRAWING_PICTURECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Picture;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class PictureCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Picture"/> objects.
/// </summary>
class PictureCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PictureCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PictureCollection(PictureCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PictureCollection(const PictureCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PictureCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PictureCollection& operator=(const PictureCollection& src);
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
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    /// <param name="stream">Stream object which contains the image data.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn, const Vector<uint8_t>& stream);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    /// <param name="fileName">Image filename.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn, const U16String& fileName);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="lowerRightRow">Lower right row index</param>
    /// <param name="lowerRightColumn">Lower right column index</param>
    /// <param name="fileName">Image filename.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, int32_t lowerRightRow, int32_t lowerRightColumn, const char16_t* fileName);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="stream">Stream object which contains the image data.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, const Vector<uint8_t>& stream);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="fileName">Image filename.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, const U16String& fileName);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="fileName">Image filename.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, const char16_t* fileName);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="stream">Stream object which contains the image data.</param>
    /// <param name="widthScale">Scale of image width, a percentage.</param>
    /// <param name="heightScale">Scale of image height, a percentage.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, const Vector<uint8_t>& stream, int32_t widthScale, int32_t heightScale);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="fileName">Image filename.</param>
    /// <param name="widthScale">Scale of image width, a percentage.</param>
    /// <param name="heightScale">Scale of image height, a percentage.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, const U16String& fileName, int32_t widthScale, int32_t heightScale);
    /// <summary>
    /// Adds a picture to the collection.
    /// </summary>
    /// <param name="upperLeftRow">Upper left row index.</param>
    /// <param name="upperLeftColumn">Upper left column index.</param>
    /// <param name="fileName">Image filename.</param>
    /// <param name="widthScale">Scale of image width, a percentage.</param>
    /// <param name="heightScale">Scale of image height, a percentage.</param>
    /// <returns><see cref="Picture"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t upperLeftRow, int32_t upperLeftColumn, const char16_t* fileName, int32_t widthScale, int32_t heightScale);
    /// <summary>
    /// Gets the <see cref="Picture"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::Picture Get(int32_t index);
    /// <summary>
    /// Clear all pictures.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Remove shapes at the specific index
    /// </summary>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
