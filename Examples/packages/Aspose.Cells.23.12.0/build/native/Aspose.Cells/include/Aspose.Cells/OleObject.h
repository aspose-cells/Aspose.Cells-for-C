// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_OLEOBJECT_H
#define ASPOSE_CELLS_DRAWING_OLEOBJECT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FileFormatType.h"
#include "Aspose.Cells/ImageType.h"

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class OleObject_Impl;

/// <summary>
/// Represents an OleObject in a worksheet.
/// </summary>
class OleObject : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OleObject_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OleObject(OleObject_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OleObject(const OleObject& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API OleObject(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OleObject();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OleObject& operator=(const OleObject& src);
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
    /// Sets embedded object data.
    /// </summary>
    /// <param name="linkToFile">Indicates whether the object links to the file. If true, the parameter objectData is ignored.</param>
    /// <param name="objectData">The embedded object data. </param>
    /// <param name="sourceFileName">The file name.</param>
    /// <param name="displayAsIcon">Indicates whether diplaying object as an icon.
    /// If true, the orginal image data will be covered by icon.
    /// </param>
    /// <param name="label">The icon label. Only works when displayAsIcon as true.</param>
    ASPOSE_CELLS_API void SetEmbeddedObject(bool linkToFile, const Vector<uint8_t>& objectData, const U16String& sourceFileName, bool displayAsIcon, const U16String& label);
    /// <summary>
    /// Sets embedded object data.
    /// </summary>
    /// <param name="linkToFile">Indicates whether the object links to the file. If true, the parameter objectData is ignored.</param>
    /// <param name="objectData">The embedded object data. </param>
    /// <param name="sourceFileName">The file name.</param>
    /// <param name="displayAsIcon">Indicates whether diplaying object as an icon.
    /// If true, the orginal image data will be covered by icon.
    /// </param>
    /// <param name="label">The icon label. Only works when displayAsIcon as true.</param>
    ASPOSE_CELLS_API void SetEmbeddedObject(bool linkToFile, const Vector<uint8_t>& objectData, const char16_t* sourceFileName, bool displayAsIcon, const char16_t* label);
    /// <summary>
    /// Sets embedded object data.
    /// </summary>
    /// <param name="linkToFile">Indicates whether the object links to the file. If true, the parameter objectData is ignored.</param>
    /// <param name="objectData">The embedded object data. </param>
    /// <param name="sourceFileName">The file name.</param>
    /// <param name="displayAsIcon">Indicates whether diplaying object as an icon.
    /// If true, the orginal image data will be covered by icon.
    /// </param>
    /// <param name="label">The icon label. Only works when displayAsIcon as true.</param>
    /// <param name="updateIcon">Indicates whether automatically updating icon.</param>
    /// <remarks>
    /// As Aspose can update embedd all file icons, so it's better that you can add correct icon with <paramref name="updateIcon"/> as false.
    /// </remarks>
    ASPOSE_CELLS_API void SetEmbeddedObject(bool linkToFile, const Vector<uint8_t>& objectData, const U16String& sourceFileName, bool displayAsIcon, const U16String& label, bool updateIcon);
    /// <summary>
    /// Sets embedded object data.
    /// </summary>
    /// <param name="linkToFile">Indicates whether the object links to the file. If true, the parameter objectData is ignored.</param>
    /// <param name="objectData">The embedded object data. </param>
    /// <param name="sourceFileName">The file name.</param>
    /// <param name="displayAsIcon">Indicates whether diplaying object as an icon.
    /// If true, the orginal image data will be covered by icon.
    /// </param>
    /// <param name="label">The icon label. Only works when displayAsIcon as true.</param>
    /// <param name="updateIcon">Indicates whether automatically updating icon.</param>
    /// <remarks>
    /// As Aspose can update embedd all file icons, so it's better that you can add correct icon with <paramref name="updateIcon"/> as false.
    /// </remarks>
    ASPOSE_CELLS_API void SetEmbeddedObject(bool linkToFile, const Vector<uint8_t>& objectData, const char16_t* sourceFileName, bool displayAsIcon, const char16_t* label, bool updateIcon);
    /// <summary>
    /// True indicates that the size of the ole object will be auto changed as the size of snapshot of the embedded content
    /// when the ole object is activated.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSize();
    /// <summary>
    /// True indicates that the size of the ole object will be auto changed as the size of snapshot of the embedded content
    /// when the ole object is activated.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSize(bool value);
    /// <summary>
    /// Returns true if the OleObject links to the file.
    /// </summary>
    ASPOSE_CELLS_API bool IsLink();
    /// <summary>
    /// Returns true if the OleObject links to the file.
    /// </summary>
    ASPOSE_CELLS_API void Set_IsLink(bool value);
    /// <summary>
    /// True if the specified object is displayed as an icon
    /// and the image will not be auto changed.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayAsIcon();
    /// <summary>
    /// True if the specified object is displayed as an icon
    /// and the image will not be auto changed.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayAsIcon(bool value);
    /// <summary>
    /// Represents image of ole object as byte array.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData();
    /// <summary>
    /// Represents image of ole object as byte array.
    /// </summary>
    ASPOSE_CELLS_API void SetImageData(const Vector<uint8_t>& value);
    /// <summary>
    /// Represents embedded ole object data as byte array.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetObjectData();
    /// <summary>
    /// Represents embedded ole object data as byte array.
    /// </summary>
    ASPOSE_CELLS_API void SetObjectData(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets the full embedded ole object binary data in the template file.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetFullObjectBin();
    /// <summary>
    /// Gets or sets the path and name of the source file for the linked image.
    /// </summary>
    /// <remarks>
    /// The default value is an empty string.
    /// If SourceFullName is not an empty string, the image is linked.
    /// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetImageSourceFullName();
    /// <summary>
    /// Gets or sets the path and name of the source file for the linked image.
    /// </summary>
    /// <remarks>
    /// The default value is an empty string.
    /// If SourceFullName is not an empty string, the image is linked.
    /// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
    /// </remarks>
    ASPOSE_CELLS_API void SetImageSourceFullName(const U16String& value);
    /// <summary>
    /// Gets or sets the path and name of the source file for the linked image.
    /// </summary>
    /// <remarks>
    /// The default value is an empty string.
    /// If SourceFullName is not an empty string, the image is linked.
    /// If SourceFullName is not an empty string, but Data is null, then the image is linked and not stored in the file.
    /// </remarks>
    ASPOSE_CELLS_API void SetImageSourceFullName(const char16_t* value);
    /// <summary>
    /// Sets the ole native source full file name with path.
    /// </summary>
    /// <param name="sourceFullName">the ole native source full file name</param>
    ASPOSE_CELLS_API void SetNativeSourceFullName(const U16String& sourceFullName);
    /// <summary>
    /// Sets the ole native source full file name with path.
    /// </summary>
    /// <param name="sourceFullName">the ole native source full file name</param>
    ASPOSE_CELLS_API void SetNativeSourceFullName(const char16_t* sourceFullName);
    /// <summary>
    /// Gets or sets the ProgID of the OLE object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetProgID();
    /// <summary>
    /// Gets or sets the ProgID of the OLE object.
    /// </summary>
    ASPOSE_CELLS_API void SetProgID(const U16String& value);
    /// <summary>
    /// Gets or sets the ProgID of the OLE object.
    /// </summary>
    ASPOSE_CELLS_API void SetProgID(const char16_t* value);
    /// <summary>
    /// Gets and sets the file type of the embedded ole object data
    /// </summary>
    ASPOSE_CELLS_API FileFormatType GetFileFormatType();
    /// <summary>
    /// Gets and sets the file type of the embedded ole object data
    /// </summary>
    ASPOSE_CELLS_API void SetFileFormatType(FileFormatType value);
    /// <summary>
    /// Returns the source full name of the source file for the linked OLE object.
    /// </summary>
    /// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
    /// Such as wav file ,avi file..etc..
    /// </remarks>
    ASPOSE_CELLS_API U16String GetObjectSourceFullName();
    /// <summary>
    /// Returns the source full name of the source file for the linked OLE object.
    /// </summary>
    /// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
    /// Such as wav file ,avi file..etc..
    /// </remarks>
    ASPOSE_CELLS_API void SetObjectSourceFullName(const U16String& value);
    /// <summary>
    /// Returns the source full name of the source file for the linked OLE object.
    /// </summary>
    /// <remarks>Only supports setting the source full name when the file type is OleFileType.Unknown.
    /// Such as wav file ,avi file..etc..
    /// </remarks>
    ASPOSE_CELLS_API void SetObjectSourceFullName(const char16_t* value);
    /// <summary>
    /// Gets and sets the display label of the linked ole object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLabel();
    /// <summary>
    /// Gets and sets the display label of the linked ole object.
    /// </summary>
    ASPOSE_CELLS_API void SetLabel(const U16String& value);
    /// <summary>
    /// Gets and sets the display label of the linked ole object.
    /// </summary>
    ASPOSE_CELLS_API void SetLabel(const char16_t* value);
    /// <summary>
    /// Specifies whether the link to the OleObject is automatically updated or not.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoUpdate();
    /// <summary>
    /// Specifies whether the link to the OleObject is automatically updated or not.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoUpdate(bool value);
    /// <summary>
    /// Specifies whether the host application for the embedded object shall be called to load
    /// the object data automatically when the parent workbook is opened.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoLoad();
    /// <summary>
    /// Specifies whether the host application for the embedded object shall be called to load
    /// the object data automatically when the parent workbook is opened.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoLoad(bool value);
    /// <summary>
    /// Gets and sets the class identifier of the embedded object.
    /// It means which application opens the embedded file.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetClassIdentifier();
    /// <summary>
    /// Gets and sets the class identifier of the embedded object.
    /// It means which application opens the embedded file.
    /// </summary>
    ASPOSE_CELLS_API void SetClassIdentifier(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets the image format of the ole object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::ImageType GetImageType();
    
};

} } }

#endif
