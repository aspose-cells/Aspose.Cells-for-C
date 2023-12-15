// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VBA_VBAMODULE_H
#define ASPOSE_CELLS_VBA_VBAMODULE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/VbaModuleType.h"

namespace Aspose { namespace Cells { namespace Vba {

using namespace Aspose::Cells;

class VbaModule_Impl;

/// <summary>
/// Represents the module in VBA project.
/// </summary>
class VbaModule {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    VbaModule_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API VbaModule(VbaModule_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API VbaModule(const VbaModule& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~VbaModule();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API VbaModule& operator=(const VbaModule& src);
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
    /// Gets and sets the name of Module.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of Module.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of Module.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the type of module.
    /// </summary>
    ASPOSE_CELLS_API VbaModuleType GetType();
    /// <summary>
    /// Gets and sets the codes of module.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCodes();
    /// <summary>
    /// Gets and sets the codes of module.
    /// </summary>
    ASPOSE_CELLS_API void SetCodes(const U16String& value);
    /// <summary>
    /// Gets and sets the codes of module.
    /// </summary>
    ASPOSE_CELLS_API void SetCodes(const char16_t* value);
    
};

} } }

#endif
