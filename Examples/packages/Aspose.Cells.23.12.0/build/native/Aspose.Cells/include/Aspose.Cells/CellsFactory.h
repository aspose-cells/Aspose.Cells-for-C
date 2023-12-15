// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLSFACTORY_H
#define ASPOSE_CELLS_CELLSFACTORY_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells {

class CellsFactory_Impl;

/// <summary>
/// Utility for instantiating classes of Cells model.
/// </summary>
class CellsFactory {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CellsFactory_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API CellsFactory();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CellsFactory(CellsFactory_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CellsFactory(const CellsFactory& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CellsFactory();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CellsFactory& operator=(const CellsFactory& src);
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
    /// Creates a new style.
    /// </summary>
    /// <returns>Returns a style object.</returns>
    ASPOSE_CELLS_API Style CreateStyle();
    
};

} }

#endif
