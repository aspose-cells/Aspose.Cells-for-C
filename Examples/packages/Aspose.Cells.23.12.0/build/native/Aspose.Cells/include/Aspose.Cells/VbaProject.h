// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VBA_VBAPROJECT_H
#define ASPOSE_CELLS_VBA_VBAPROJECT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/EncodingType.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace DigitalSignatures {
    class DigitalSignature;
} } }

namespace Aspose { namespace Cells { namespace Vba {
    class VbaModuleCollection;
    class VbaProjectReferenceCollection;
} } }

namespace Aspose { namespace Cells { namespace Vba {

using namespace Aspose::Cells;
using namespace Aspose::Cells::DigitalSignatures;

class VbaProject_Impl;

/// <summary>
/// Represents the VBA project.
/// </summary>
class VbaProject {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VbaProject_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VbaProject(VbaProject_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VbaProject(const VbaProject& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VbaProject();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VbaProject& operator=(const VbaProject& src);
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
    /// Sign this VBA project by a DigitalSignature
    /// </summary>
    /// <param name="digitalSignature">DigitalSignature</param>
    ASPOSE_CELLS_API void Sign(const DigitalSignature& digitalSignature);
    /// <summary>
    /// Indicates whether the signature of VBA project is valid or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsValidSigned();
    /// <summary>
    /// Gets certificate raw data if this VBA project is signed.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetCertRawData();
    /// <summary>
    /// Gets and sets the encoding of VBA project.
    /// </summary>
    ASPOSE_CELLS_API EncodingType GetEncoding();
    /// <summary>
    /// Gets and sets the encoding of VBA project.
    /// </summary>
    ASPOSE_CELLS_API void SetEncoding(EncodingType value);
    /// <summary>
    /// Gets and sets the name of the VBA project.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the VBA project.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the VBA project.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Indicates whether VBAcode is signed or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsSigned();
    /// <summary>
    /// Protects or unprotects this VBA project.
    /// </summary>
    /// <param name="islockedForViewing">indicates whether locks project for viewing.</param>
    /// <param name="password">
    /// If the value is null, unprotects this VBA project, otherwise projects the this VBA project.
    /// </param>
    /// <remarks>
    /// If islockedForViewing is true, the password could not be null.
    /// </remarks>
    ASPOSE_CELLS_API void Protect(bool islockedForViewing, const U16String& password);
    /// <summary>
    /// Protects or unprotects this VBA project.
    /// </summary>
    /// <param name="islockedForViewing">indicates whether locks project for viewing.</param>
    /// <param name="password">
    /// If the value is null, unprotects this VBA project, otherwise projects the this VBA project.
    /// </param>
    /// <remarks>
    /// If islockedForViewing is true, the password could not be null.
    /// </remarks>
    ASPOSE_CELLS_API void Protect(bool islockedForViewing, const char16_t* password);
    /// <summary>
    /// Indicates whether this VBA project is protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsProtected();
    /// <summary>
    /// Indicates whether this VBA project is locked for viewing.
    /// </summary>
    ASPOSE_CELLS_API bool GetIslockedForViewing();
    /// <summary>
    /// Copy VBA project from other file.
    /// </summary>
    /// <param name="source"></param>
    ASPOSE_CELLS_API void Copy(const VbaProject& source);
    /// <summary>
    /// Gets all <see cref="VbaModule"/> objects.
    /// </summary>
    ASPOSE_CELLS_API VbaModuleCollection GetModules();
    /// <summary>
    /// Gets all references of VBA project.
    /// </summary>
    ASPOSE_CELLS_API VbaProjectReferenceCollection GetReferences();
    /// <summary>
    /// Validates protection password.
    /// </summary>
    /// <param name="password">the password</param>
    /// <returns>Whether password is the protection password of this VBA project</returns>
    ASPOSE_CELLS_API bool ValidatePassword(const U16String& password);
    /// <summary>
    /// Validates protection password.
    /// </summary>
    /// <param name="password">the password</param>
    /// <returns>Whether password is the protection password of this VBA project</returns>
    ASPOSE_CELLS_API bool ValidatePassword(const char16_t* password);
    
};

} } }

#endif
