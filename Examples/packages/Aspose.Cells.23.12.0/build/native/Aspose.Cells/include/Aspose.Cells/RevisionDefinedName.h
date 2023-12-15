// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONDEFINEDNAME_H
#define ASPOSE_CELLS_REVISIONS_REVISIONDEFINEDNAME_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Revision.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/RevisionType.h"

namespace Aspose { namespace Cells { namespace Revisions {

using namespace Aspose::Cells;

class RevisionDefinedName_Impl;

/// <summary>
/// Represents a revision record of a defined name change.
/// </summary>
class RevisionDefinedName : public Revision {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RevisionDefinedName_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RevisionDefinedName(RevisionDefinedName_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RevisionDefinedName(const RevisionDefinedName& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RevisionDefinedName(const Revision& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RevisionDefinedName();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RevisionDefinedName& operator=(const RevisionDefinedName& src);
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
    /// Represents the type of revision.
    /// </summary>
    ASPOSE_CELLS_API RevisionType GetType();
    /// <summary>
    /// Gets the text of the defined name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets the old formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetOldFormula();
    /// <summary>
    /// Gets the formula.
    /// </summary>
    ASPOSE_CELLS_API U16String GetNewFormula();
    
};

} } }

#endif
