// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONCOLLECTION_H
#define ASPOSE_CELLS_WEBEXTENSIONS_WEBEXTENSIONCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace WebExtensions {
    class WebExtension;
} } }

namespace Aspose { namespace Cells { namespace WebExtensions {

using namespace Aspose::Cells;

class WebExtensionCollection_Impl;

/// <summary>
/// Represents the list of web extension.
/// </summary>
class WebExtensionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebExtensionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionCollection(WebExtensionCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebExtensionCollection(const WebExtensionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebExtensionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebExtensionCollection& operator=(const WebExtensionCollection& src);
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
    /// Gets web extension by the specific index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The  web extension. </returns>
    ASPOSE_CELLS_API WebExtension Get(int32_t index);
    /// <summary>
    /// Adds a web extension.
    /// </summary>
    /// <returns>The index.</returns>
    ASPOSE_CELLS_API int32_t Add();
    /// <summary>
    /// Add a web video player into exel.
    /// </summary>
    /// <param name="url"></param>
    /// <param name="autoPlay">Indicates whether auto playing the video.</param>
    /// <param name="startTime">The start time in unit of seconds.</param>
    /// <param name="endTime">The end time in unit of seconds.</param>
    ASPOSE_CELLS_API int32_t AddWebVideoPlayer(const U16String& url, bool autoPlay, int32_t startTime, int32_t endTime);
    /// <summary>
    /// Add a web video player into exel.
    /// </summary>
    /// <param name="url"></param>
    /// <param name="autoPlay">Indicates whether auto playing the video.</param>
    /// <param name="startTime">The start time in unit of seconds.</param>
    /// <param name="endTime">The end time in unit of seconds.</param>
    ASPOSE_CELLS_API int32_t AddWebVideoPlayer(const char16_t* url, bool autoPlay, int32_t startTime, int32_t endTime);
    /// <summary>
    /// Remove web extension by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
