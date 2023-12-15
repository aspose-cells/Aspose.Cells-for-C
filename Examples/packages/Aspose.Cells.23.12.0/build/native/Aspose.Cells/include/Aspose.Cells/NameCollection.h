// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_NAMECOLLECTION_H
#define ASPOSE_CELLS_NAMECOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/NameScopeType.h"

namespace Aspose { namespace Cells {
    class Name;
} }

namespace Aspose { namespace Cells {

class NameCollection_Impl;

/// <summary>
/// Represents a collection of all the <see cref="Name"/> objects in the spreadsheet.
/// </summary>
class NameCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    NameCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API NameCollection(NameCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API NameCollection(const NameCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~NameCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API NameCollection& operator=(const NameCollection& src);
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
    /// Defines a new name.
    /// </summary>
    /// <param name="text">The text to use as the name.</param>
    /// <returns><see cref="Name"/> object index.</returns>
    /// <remarks>Name cannot include spaces and cannot look like cell references.</remarks>
    ASPOSE_CELLS_API int32_t Add(const U16String& text);
    /// <summary>
    /// Defines a new name.
    /// </summary>
    /// <param name="text">The text to use as the name.</param>
    /// <returns><see cref="Name"/> object index.</returns>
    /// <remarks>Name cannot include spaces and cannot look like cell references.</remarks>
    ASPOSE_CELLS_API int32_t Add(const char16_t* text);
    /// <summary>
    /// Gets the <see cref="Name"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Name Get(int32_t index);
    /// <summary>
    /// Gets all defined name by scope.
    /// </summary>
    /// <param name="type">The scope type.</param>
    /// <param name="sheetIndex">
    /// The sheet index.
    /// Only effects when scope type is <see cref="NameScopeType.Worksheet"/>
    /// </param>
    /// <returns></returns>
    ASPOSE_CELLS_API Vector<Name> Filter(NameScopeType type, int32_t sheetIndex);
    /// <summary>
    /// Gets the <see cref="Name"/> element with the specified name.
    /// </summary>
    /// <param name="text">Name text.</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API Name Get(const U16String& text);
    /// <summary>
    /// Gets the <see cref="Name"/> element with the specified name.
    /// </summary>
    /// <param name="text">Name text.</param>
    /// <returns>The element with the specified name.</returns>
    ASPOSE_CELLS_API Name Get(const char16_t* text);
    /// <summary>
    /// Remove an array of name
    /// </summary>
    /// <param name="names">The names' text.</param>
    ASPOSE_CELLS_API void Remove(const Vector<U16String>& names);
    /// <summary>
    /// Remove the name.
    /// </summary>
    /// <param name="text">The name text.</param>
    ASPOSE_CELLS_API void Remove(const U16String& text);
    /// <summary>
    /// Remove the name.
    /// </summary>
    /// <param name="text">The name text.</param>
    ASPOSE_CELLS_API void Remove(const char16_t* text);
    /// <summary>
    /// Remove the name at the specific index.
    /// </summary>
    /// <param name="index">index of the Name to be removed.</param>
    /// <remarks>
    /// Please make sure that the name is not referred by the other formulas before calling the method.
    /// And if the name is referred, setting Name.RefersTo as null is better.
    /// </remarks>
    ASPOSE_CELLS_API void RemoveAt(int32_t index);
    /// <summary>
    /// Remove all defined names which are not referenced by the formulas and data source.
    /// If the defined name is referred, we only set Name.ReferTo as null and hide them.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// Remove the duplicate defined names
    /// </summary>
    ASPOSE_CELLS_API void RemoveDuplicateNames();
    /// <summary>
    /// Sorts defined names.
    /// </summary>
    /// <remarks>If you create a large amount of named ranges in the Excel file, please call this method after all named ranges are created and before saving </remarks>
    ASPOSE_CELLS_API void Sort();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
