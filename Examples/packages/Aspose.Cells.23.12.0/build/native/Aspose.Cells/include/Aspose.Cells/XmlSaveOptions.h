// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XMLSAVEOPTIONS_H
#define ASPOSE_CELLS_XMLSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells {

class XmlSaveOptions_Impl;

/// <summary>
/// Represents the options of saving the workbook as an xml file.
/// </summary>
class XmlSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XmlSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving xml file.
    /// </summary>
    ASPOSE_CELLS_API XmlSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XmlSaveOptions(XmlSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlSaveOptions(const XmlSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API XmlSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XmlSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XmlSaveOptions& operator=(const XmlSaveOptions& src);
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
    /// Represents the indexes of exported sheets.
    /// </summary>
    ASPOSE_CELLS_API Vector<int32_t> GetSheetIndexes();
    /// <summary>
    /// Represents the indexes of exported sheets.
    /// </summary>
    ASPOSE_CELLS_API void SetSheetIndexes(const Vector<int32_t>& value);
    /// <summary>
    /// Gets or sets the exporting range.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetExportArea();
    /// <summary>
    /// Gets or sets the exporting range.
    /// </summary>
    ASPOSE_CELLS_API void SetExportArea(const CellArea& value);
    /// <summary>
    /// Indicates whether the range contains header row.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasHeaderRow();
    /// <summary>
    /// Indicates whether the range contains header row.
    /// </summary>
    ASPOSE_CELLS_API void SetHasHeaderRow(bool value);
    /// <summary>
    /// Indicates whether exporting xml map in the file.
    /// </summary>
    ASPOSE_CELLS_API U16String GetXmlMapName();
    /// <summary>
    /// Indicates whether exporting xml map in the file.
    /// </summary>
    ASPOSE_CELLS_API void SetXmlMapName(const U16String& value);
    /// <summary>
    /// Indicates whether exporting xml map in the file.
    /// </summary>
    ASPOSE_CELLS_API void SetXmlMapName(const char16_t* value);
    /// <summary>
    /// Indicates whether exporting sheet's name as the name of the element.
    /// </summary>
    ASPOSE_CELLS_API bool GetSheetNameAsElementName();
    /// <summary>
    /// Indicates whether exporting sheet's name as the name of the element.
    /// </summary>
    ASPOSE_CELLS_API void SetSheetNameAsElementName(bool value);
    /// <summary>
    /// Indicates whether exporting data as attributes of element.
    /// </summary>
    ASPOSE_CELLS_API bool GetDataAsAttribute();
    /// <summary>
    /// Indicates whether exporting data as attributes of element.
    /// </summary>
    ASPOSE_CELLS_API void SetDataAsAttribute(bool value);
    
};

} }

#endif
