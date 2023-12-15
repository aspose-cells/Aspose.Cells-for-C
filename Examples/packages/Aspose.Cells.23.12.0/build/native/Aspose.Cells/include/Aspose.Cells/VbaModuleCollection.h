// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VBA_VBAMODULECOLLECTION_H
#define ASPOSE_CELLS_VBA_VBAMODULECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/VbaModuleType.h"

namespace Aspose { namespace Cells {
    class Worksheet;
} }

namespace Aspose { namespace Cells { namespace Vba {
    class VbaModule;
} } }

namespace Aspose { namespace Cells { namespace Vba {

using namespace Aspose::Cells;

class VbaModuleCollection_Impl;

/// <summary>
/// Represents the list of <see cref="VbaModule"/>
/// </summary>
class VbaModuleCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VbaModuleCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VbaModuleCollection(VbaModuleCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VbaModuleCollection(const VbaModuleCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VbaModuleCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VbaModuleCollection& operator=(const VbaModuleCollection& src);
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
    /// <param name="name"></param>
    /// <param name="data"></param>
    ASPOSE_CELLS_API void AddDesignerStorage(const U16String& name, const Vector<uint8_t>& data);
    /// <summary>
    /// </summary>
    /// <param name="name"></param>
    /// <param name="data"></param>
    ASPOSE_CELLS_API void AddDesignerStorage(const char16_t* name, const Vector<uint8_t>& data);
    /// <summary>
    /// Represents the data of Designer.
    /// </summary>
    /// <remarks>
    /// We do not support to parse them. Just only for copying.
    /// </remarks>
    ASPOSE_CELLS_API Vector<uint8_t> GetDesignerStorage(const U16String& name);
    /// <summary>
    /// Represents the data of Designer.
    /// </summary>
    /// <remarks>
    /// We do not support to parse them. Just only for copying.
    /// </remarks>
    ASPOSE_CELLS_API Vector<uint8_t> GetDesignerStorage(const char16_t* name);
    /// <summary>
    /// Adds module for a worksheet.
    /// </summary>
    /// <param name="sheet">The worksheet</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const Worksheet& sheet);
    /// <summary>
    /// Adds module.
    /// </summary>
    /// <param name="type">The type of module.</param>
    /// <param name="name">The name of module.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(VbaModuleType type, const U16String& name);
    /// <summary>
    /// Adds module.
    /// </summary>
    /// <param name="type">The type of module.</param>
    /// <param name="name">The name of module.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(VbaModuleType type, const char16_t* name);
    /// <summary>
    /// Inser user form into VBA Project.
    /// </summary>
    /// <param name="name">The name of user form</param>
    /// <param name="codes">The codes for the user form</param>
    /// <param name="designerStorage">the designer setting about the user form</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddUserForm(const U16String& name, const U16String& codes, const Vector<uint8_t>& designerStorage);
    /// <summary>
    /// Inser user form into VBA Project.
    /// </summary>
    /// <param name="name">The name of user form</param>
    /// <param name="codes">The codes for the user form</param>
    /// <param name="designerStorage">the designer setting about the user form</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t AddUserForm(const char16_t* name, const char16_t* codes, const Vector<uint8_t>& designerStorage);
    /// <summary>
    /// Gets <see cref="VbaModule"/> in the list by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API VbaModule Get(int32_t index);
    /// <summary>
    /// Removes module for a worksheet.
    /// </summary>
    /// <param name="sheet">The worksheet</param>
    /// <returns></returns>
    ASPOSE_CELLS_API void Remove(const Worksheet& sheet);
    /// <summary>
    /// Remove the module by the name
    /// </summary>
    /// <param name="name"></param>
    ASPOSE_CELLS_API void Remove(const U16String& name);
    /// <summary>
    /// Remove the module by the name
    /// </summary>
    /// <param name="name"></param>
    ASPOSE_CELLS_API void Remove(const char16_t* name);
    /// <summary>
    /// Gets <see cref="VbaModule"/> in the list by the name.
    /// </summary>
    /// <param name="name">The name of module.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API VbaModule Get(const U16String& name);
    /// <summary>
    /// Gets <see cref="VbaModule"/> in the list by the name.
    /// </summary>
    /// <param name="name">The name of module.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API VbaModule Get(const char16_t* name);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
