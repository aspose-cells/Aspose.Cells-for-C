// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MARKUP_SMARTTAGOPTIONS_H
#define ASPOSE_CELLS_MARKUP_SMARTTAGOPTIONS_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/SmartTagShowType.h"

namespace Aspose { namespace Cells { namespace Markup {

class SmartTagOptions_Impl;

/// <summary>
/// Represents the options of the smart tag.
/// </summary>
class SmartTagOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SmartTagOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SmartTagOptions(SmartTagOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SmartTagOptions(const SmartTagOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SmartTagOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SmartTagOptions& operator=(const SmartTagOptions& src);
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
    /// Indicates whether saving smart tags with the workbook.
    /// </summary>
    ASPOSE_CELLS_API bool GetEmbedSmartTags();
    /// <summary>
    /// Indicates whether saving smart tags with the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetEmbedSmartTags(bool value);
    /// <summary>
    /// Represents the show type of smart tag.
    /// </summary>
    ASPOSE_CELLS_API SmartTagShowType GetShowType();
    /// <summary>
    /// Represents the show type of smart tag.
    /// </summary>
    ASPOSE_CELLS_API void SetShowType(SmartTagShowType value);
    
};

} } }

#endif
