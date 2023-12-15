// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FONTSOURCEBASE_H
#define ASPOSE_CELLS_FONTSOURCEBASE_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/FontSourceType.h"

namespace Aspose { namespace Cells {

class FontSourceBase_Impl;

/// <summary>
/// This is an abstract base class for the classes that allow the user to specify various font sources
/// </summary>
class ASPOSE_CELLS_API2 FontSourceBase {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FontSourceBase_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FontSourceBase(FontSourceBase_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FontSourceBase(const FontSourceBase& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FontSourceBase();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FontSourceBase& operator=(const FontSourceBase& src);
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
    /// Returns the type of the font source.
    /// </summary>
    ASPOSE_CELLS_API virtual FontSourceType GetType();
    
};

} }

#endif
