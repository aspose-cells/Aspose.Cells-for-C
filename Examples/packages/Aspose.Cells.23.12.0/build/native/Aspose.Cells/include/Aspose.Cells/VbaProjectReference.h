// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VBA_VBAPROJECTREFERENCE_H
#define ASPOSE_CELLS_VBA_VBAPROJECTREFERENCE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/VbaProjectReferenceType.h"

namespace Aspose { namespace Cells { namespace Vba {

using namespace Aspose::Cells;

class VbaProjectReference_Impl;

/// <summary>
/// Represents the reference of VBA project.
/// </summary>
class VbaProjectReference {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VbaProjectReference_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReference(VbaProjectReference_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReference(const VbaProjectReference& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VbaProjectReference();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReference& operator=(const VbaProjectReference& src);
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
    /// </summary>
    /// <param name="source"></param>
    ASPOSE_CELLS_API void Copy(const VbaProjectReference& source);
    /// <summary>
    /// Gets the type of this reference.
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReferenceType GetType();
    /// <summary>
    /// Gets and sets the name of the reference.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the reference.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the reference.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets and sets the Libid of the reference.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLibid();
    /// <summary>
    /// Gets and sets the Libid of the reference.
    /// </summary>
    ASPOSE_CELLS_API void SetLibid(const U16String& value);
    /// <summary>
    /// Gets and sets the Libid of the reference.
    /// </summary>
    ASPOSE_CELLS_API void SetLibid(const char16_t* value);
    /// <summary>
    /// Gets and sets the twiddled Libid of the reference.
    /// </summary>
    /// <remarks>
    /// Only for control reference.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetTwiddledlibid();
    /// <summary>
    /// Gets and sets the twiddled Libid of the reference.
    /// </summary>
    /// <remarks>
    /// Only for control reference.
    /// </remarks>
    ASPOSE_CELLS_API void SetTwiddledlibid(const U16String& value);
    /// <summary>
    /// Gets and sets the twiddled Libid of the reference.
    /// </summary>
    /// <remarks>
    /// Only for control reference.
    /// </remarks>
    ASPOSE_CELLS_API void SetTwiddledlibid(const char16_t* value);
    /// <summary>
    /// Gets and sets the extended Libid of the reference.
    /// </summary>
    /// <remarks>
    /// Only for control reference.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetExtendedLibid();
    /// <summary>
    /// Gets and sets the extended Libid of the reference.
    /// </summary>
    /// <remarks>
    /// Only for control reference.
    /// </remarks>
    ASPOSE_CELLS_API void SetExtendedLibid(const U16String& value);
    /// <summary>
    /// Gets and sets the extended Libid of the reference.
    /// </summary>
    /// <remarks>
    /// Only for control reference.
    /// </remarks>
    ASPOSE_CELLS_API void SetExtendedLibid(const char16_t* value);
    /// <summary>
    /// Gets and sets the referenced VBA project's identifier with an relative path.
    /// </summary>
    /// <remarks>
    /// Only for project reference.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetRelativeLibid();
    /// <summary>
    /// Gets and sets the referenced VBA project's identifier with an relative path.
    /// </summary>
    /// <remarks>
    /// Only for project reference.
    /// </remarks>
    ASPOSE_CELLS_API void SetRelativeLibid(const U16String& value);
    /// <summary>
    /// Gets and sets the referenced VBA project's identifier with an relative path.
    /// </summary>
    /// <remarks>
    /// Only for project reference.
    /// </remarks>
    ASPOSE_CELLS_API void SetRelativeLibid(const char16_t* value);
    
};

} } }

#endif
