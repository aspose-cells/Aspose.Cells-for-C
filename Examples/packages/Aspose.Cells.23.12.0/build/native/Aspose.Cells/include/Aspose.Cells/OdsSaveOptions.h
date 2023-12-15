// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ODSSAVEOPTIONS_H
#define ASPOSE_CELLS_ODSSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"

#include "Aspose.Cells/OdsGeneratorType.h"
#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Ods;

class OdsSaveOptions_Impl;

/// <summary>
/// Represents the options of saving ods file.
/// </summary>
class OdsSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    OdsSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options of saving ods file.
    /// </summary>
    ASPOSE_CELLS_API OdsSaveOptions();
    /// <summary>
    /// Creates the options of saving ods file.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be <see cref="SaveFormat.Ods"/>, <see cref="SaveFormat.Ots"/>,
    /// <see cref="SaveFormat.Fods"/> or <see cref="SaveFormat.Sxc"/>,
    /// otherwise the saved format will be set as <see cref="SaveFormat.Ods"/> automatically.</param>
    ASPOSE_CELLS_API explicit OdsSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API OdsSaveOptions(OdsSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API OdsSaveOptions(const OdsSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API OdsSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~OdsSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API OdsSaveOptions& operator=(const OdsSaveOptions& src);
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
    /// Gets and sets the generator of the ods file.
    /// </summary>
    ASPOSE_CELLS_API OdsGeneratorType GetGeneratorType();
    /// <summary>
    /// Gets and sets the generator of the ods file.
    /// </summary>
    ASPOSE_CELLS_API void SetGeneratorType(OdsGeneratorType value);
    /// <summary>
    /// Indicates whether the ods file should be saved as ODF format version 1.1. Default is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsStrictSchema11();
    /// <summary>
    /// Indicates whether the ods file should be saved as ODF format version 1.1. Default is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsStrictSchema11(bool value);
    
};

} }

#endif
