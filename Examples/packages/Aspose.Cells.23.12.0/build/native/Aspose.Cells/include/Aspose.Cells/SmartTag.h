// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_SMARTTAG_H
#define ASPOSE_CELLS_MARKUP_SMARTTAG_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Markup {
    class SmartTagPropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Markup {

using namespace Aspose::Cells;

class SmartTag_Impl;

/// <summary>
/// Represents a smart tag.
/// </summary>
class SmartTag {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartTag_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartTag(SmartTag_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTag(const SmartTag& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartTag();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartTag& operator=(const SmartTag& src);
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
    /// Indicates whether the smart tag is deleted.
    /// </summary>
    ASPOSE_CELLS_API bool GetDeleted();
    /// <summary>
    /// Indicates whether the smart tag is deleted.
    /// </summary>
    ASPOSE_CELLS_API void SetDeleted(bool value);
    /// <summary>
    /// Gets and set the properties of the smart tag.
    /// </summary>
    ASPOSE_CELLS_API SmartTagPropertyCollection GetProperties();
    /// <summary>
    /// Gets and set the properties of the smart tag.
    /// </summary>
    ASPOSE_CELLS_API void SetProperties(const SmartTagPropertyCollection& value);
    /// <summary>
    /// Gets the namespace URI of the smart tag.
    /// </summary>
    ASPOSE_CELLS_API U16String GetUri();
    /// <summary>
    /// Gets the name of the smart tag.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Change the name and  the namespace URI of the smart tag.
    /// </summary>
    /// <param name="uri">The namespace URI of the smart tag.</param>
    /// <param name="name">The name of the smart tag.</param>
    ASPOSE_CELLS_API void SetLink(const U16String& uri, const U16String& name);
    /// <summary>
    /// Change the name and  the namespace URI of the smart tag.
    /// </summary>
    /// <param name="uri">The namespace URI of the smart tag.</param>
    /// <param name="name">The name of the smart tag.</param>
    ASPOSE_CELLS_API void SetLink(const char16_t* uri, const char16_t* name);
    
};

} } }

#endif
