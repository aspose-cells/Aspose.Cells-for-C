// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALLINKCOLLECTION_H
#define ASPOSE_CELLS_EXTERNALLINKCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/Enumerator.h"

#include "Aspose.Cells/DirectoryType.h"

namespace Aspose { namespace Cells {
    class ExternalLink;
} }

namespace Aspose { namespace Cells {

class ExternalLinkCollection_Impl;

/// <summary>
/// Represents external links collection in a workbook.
/// </summary>
class ExternalLinkCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ExternalLinkCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ExternalLinkCollection(ExternalLinkCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ExternalLinkCollection(const ExternalLinkCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ExternalLinkCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ExternalLinkCollection& operator=(const ExternalLinkCollection& src);
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
    /// Gets the number of elements actually contained in the collection.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Adds an external link.
    /// </summary>
    /// <param name="fileName">The external file name.</param>
    /// <param name="sheetNames">All sheet names of the external file.</param>
    /// <returns>The position of the external name in this list. </returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& fileName, const Vector<U16String>& sheetNames);
    /// <summary>
    /// Adds an external link.
    /// </summary>
    /// <param name="fileName">The external file name.</param>
    /// <param name="sheetNames">All sheet names of the external file.</param>
    /// <returns>The position of the external name in this list. </returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* fileName, const Vector<U16String>& sheetNames);
    /// <summary>
    /// Add an external link .
    /// </summary>
    /// <param name="directoryType">The directory type of the file name.</param>
    /// <param name="fileName">the file name.</param>
    /// <param name="sheetNames">All sheet names of the external file.</param>
    /// <returns>The position of the external name in this list. </returns>
    ASPOSE_CELLS_API int32_t Add(DirectoryType directoryType, const U16String& fileName, const Vector<U16String>& sheetNames);
    /// <summary>
    /// Add an external link .
    /// </summary>
    /// <param name="directoryType">The directory type of the file name.</param>
    /// <param name="fileName">the file name.</param>
    /// <param name="sheetNames">All sheet names of the external file.</param>
    /// <returns>The position of the external name in this list. </returns>
    ASPOSE_CELLS_API int32_t Add(DirectoryType directoryType, const char16_t* fileName, const Vector<U16String>& sheetNames);
    /// <summary>
    /// Gets the <see cref="ExternalLink"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API ExternalLink Get(int32_t index);
    /// <summary>
    /// Removes all external links.
    /// </summary>
    /// <remarks>
    /// When removing external links, all formulas that reference to them will be removed too because
    /// the references become invalid.
    /// </remarks>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Removes all external links.
    /// </summary>
    /// <param name="updateReferencesAsLocal">
    /// Whether update all references of external links in formulas to references of current workbook itself.
    /// </param>
    /// <remarks>
    /// If references are required to be updated, those references of external links in formulas
    /// will be changed to current workbook when it is possible.
    /// For example, one cell's original formula is "='externalsource.xlam'!customfunction()",
    /// after removing external links, the formula will become "=customfunction()";
    /// When the original formula is "='[externalsource.xlam]Sheet1'!$A$1",
    /// according to whether there is one sheet with name "Sheet1" in current workbook:
    /// if true, the formula will become "=Sheet1!$A$1";
    /// if false, the formula will become "=#REF!$A$1".<br></br>
    /// If references are not required to be updated, all formulas with references to external links
    /// will be removed too because those references become invalid.
    /// </remarks>
    ASPOSE_CELLS_API void Clear(bool updateReferencesAsLocal);
    /// <summary>
    /// Removes the specified external link from the workbook.
    /// </summary>
    /// <param name="index">the index of the external link to be removed.</param>
    /// <remarks>
    /// When removing the external link, all formulas that reference to it will be removed too because
    /// the references become invalid.
    /// </remarks>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Removes the specified external link from the workbook.
    /// </summary>
    /// <param name="index">the index of the external link to be removed.</param>
    /// <param name="updateReferencesAsLocal">
    /// Whether update all references of given external link to reference of current workbook itself.
    /// Check <see cref="Clear(bool)"/> to get more details about this parameter.
    /// </param>
    ASPOSE_CELLS_API void RemoveAt(int32_t index, bool updateReferencesAsLocal);
    /// <summary>
    /// Get an enumerator that iterates through this collection.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Enumerator<ExternalLink> GetEnumerator();
    
};

} }

#endif
