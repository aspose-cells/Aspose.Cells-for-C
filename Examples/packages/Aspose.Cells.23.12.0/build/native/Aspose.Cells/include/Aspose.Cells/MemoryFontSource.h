// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MEMORYFONTSOURCE_H
#define ASPOSE_CELLS_MEMORYFONTSOURCE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/FontSourceBase.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/FontSourceType.h"

namespace Aspose { namespace Cells {

class MemoryFontSource_Impl;

/// <summary>
/// Represents the single TrueType font file stored in memory.
/// </summary>
class MemoryFontSource : public FontSourceBase {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MemoryFontSource_Impl* _impl;
    
public:
    /// <summary>
    /// Ctor.
    /// </summary>
    /// <param name="fontData">Binary font data.</param>
    ASPOSE_CELLS_API explicit MemoryFontSource(const Vector<uint8_t>& fontData);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MemoryFontSource(MemoryFontSource_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MemoryFontSource(const MemoryFontSource& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API MemoryFontSource(const FontSourceBase& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MemoryFontSource();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MemoryFontSource& operator=(const MemoryFontSource& src);
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
    /// Binary font data.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetFontData();
    /// <summary>
    /// Returns the type of the font source.
    /// </summary>
    ASPOSE_CELLS_API FontSourceType GetType();
    
};

} }

#endif
