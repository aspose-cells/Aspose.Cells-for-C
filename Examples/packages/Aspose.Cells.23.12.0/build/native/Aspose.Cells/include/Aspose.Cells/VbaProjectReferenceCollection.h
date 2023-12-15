// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VBA_VBAPROJECTREFERENCECOLLECTION_H
#define ASPOSE_CELLS_VBA_VBAPROJECTREFERENCECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Vba {
    class VbaProjectReference;
} } }

namespace Aspose { namespace Cells { namespace Vba {

using namespace Aspose::Cells;

class VbaProjectReferenceCollection_Impl;

/// <summary>
/// Represents all references of VBA project.
/// </summary>
class VbaProjectReferenceCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VbaProjectReferenceCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReferenceCollection(VbaProjectReferenceCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReferenceCollection(const VbaProjectReferenceCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VbaProjectReferenceCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReferenceCollection& operator=(const VbaProjectReferenceCollection& src);
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
    /// Get the reference in the list by the index.
    /// </summary>
    /// <param name="i">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API VbaProjectReference Get(int32_t i);
    /// <summary>
    /// Add a reference to an Automation type library.
    /// </summary>
    /// <param name="name">The name of reference.</param>
    /// <param name="libid">The identifier of an Automation type library.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddRegisteredReference(const U16String& name, const U16String& libid);
    /// <summary>
    /// Add a reference to an Automation type library.
    /// </summary>
    /// <param name="name">The name of reference.</param>
    /// <param name="libid">The identifier of an Automation type library.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddRegisteredReference(const char16_t* name, const char16_t* libid);
    /// <summary>
    /// Add a reference to a twiddled type library and its extended type library.
    /// </summary>
    /// <param name="name">The name of reference.</param>
    /// <param name="libid">The identifier of an Automation type library.</param>
    /// <param name="twiddledlibid">The identifier of a twiddled type library</param>
    /// <param name="extendedLibid">The identifier of an extended type library</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddControlRefrernce(const U16String& name, const U16String& libid, const U16String& twiddledlibid, const U16String& extendedLibid);
    /// <summary>
    /// Add a reference to a twiddled type library and its extended type library.
    /// </summary>
    /// <param name="name">The name of reference.</param>
    /// <param name="libid">The identifier of an Automation type library.</param>
    /// <param name="twiddledlibid">The identifier of a twiddled type library</param>
    /// <param name="extendedLibid">The identifier of an extended type library</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddControlRefrernce(const char16_t* name, const char16_t* libid, const char16_t* twiddledlibid, const char16_t* extendedLibid);
    /// <summary>
    /// Adds a reference to an external VBA project.
    /// </summary>
    /// <param name="name">The name of reference.</param>
    /// <param name="absoluteLibid">The referenced VBA project's identifier with an absolute path.</param>
    /// <param name="relativeLibid">The referenced VBA project's identifier with an relative path.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddProjectRefrernce(const U16String& name, const U16String& absoluteLibid, const U16String& relativeLibid);
    /// <summary>
    /// Adds a reference to an external VBA project.
    /// </summary>
    /// <param name="name">The name of reference.</param>
    /// <param name="absoluteLibid">The referenced VBA project's identifier with an absolute path.</param>
    /// <param name="relativeLibid">The referenced VBA project's identifier with an relative path.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddProjectRefrernce(const char16_t* name, const char16_t* absoluteLibid, const char16_t* relativeLibid);
    /// <summary>
    /// Copies references from other VBA project.
    /// </summary>
    /// <param name="source">The source references.</param>
    ASPOSE_CELLS_API void Copy(const VbaProjectReferenceCollection& source);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
