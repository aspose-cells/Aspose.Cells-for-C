// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEGUIDECOLLECTION_H
#define ASPOSE_CELLS_DRAWING_SHAPEGUIDECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapeGuide;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class ShapeGuideCollection_Impl;

/// <summary>
/// Encapsulates a collection of shape guide
/// </summary>
class ShapeGuideCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapeGuideCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeGuideCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapeGuideCollection(ShapeGuideCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeGuideCollection(const ShapeGuideCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapeGuideCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapeGuideCollection& operator=(const ShapeGuideCollection& src);
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
    /// Adds a shape guide.(Important: This feature is currently only available for Excel07 and above)
    /// </summary>
    /// <param name="name">the name of adjust. It's as "adj(Used when there is only one adjustment value)", "adj1", "adj2", "adj3" and so on.</param>
    /// <param name="val">the value of adjust</param>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, double val);
    /// <summary>
    /// Adds a shape guide.(Important: This feature is currently only available for Excel07 and above)
    /// </summary>
    /// <param name="name">the name of adjust. It's as "adj(Used when there is only one adjustment value)", "adj1", "adj2", "adj3" and so on.</param>
    /// <param name="val">the value of adjust</param>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, double val);
    /// <summary>
    /// Gets a shape guide by index
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    ASPOSE_CELLS_API ShapeGuide Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
