// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_ENUMERATOR_H
#define ASPOSE_CELLS_ENUMERATOR_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
/// <summary>
/// Enumeration template class, provides a simple way to iterate over a collection.
/// </summary>
/// <typeparam name="T"></typeparam>
template <typename T>
class Enumerator {
private:
	void* _impl;

public:
	/// <summary>
	/// Constructs from an implementation object. Internal use.
	/// </summary>
	Enumerator(void* impl);
	/// <summary>
	/// Copy constructor.
	/// </summary>
	ASPOSE_CELLS_API Enumerator(const Enumerator<T>& src);
	/// <summary>
	/// Destructor.
	/// </summary>
	ASPOSE_CELLS_API ~Enumerator();
	/// <summary>
	/// operator=
	/// </summary>
	ASPOSE_CELLS_API Enumerator<T>& operator=(const Enumerator<T>& src);
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
	/// Gets the current element in the enumeration.
	/// </summary>
	ASPOSE_CELLS_API T GetCurrent();
	/// <summary>
	/// Advances the enumerator to the next element of the enumeration and returns a boolean indicating whether an element is available.
	/// </summary>
	/// <returns>Returns true if an element is available. Otherwise, returns false</returns>
	ASPOSE_CELLS_API bool MoveNext();
	/// <summary>
	/// Resets the enumerator to the beginning of the enumeration.
	/// </summary>
	ASPOSE_CELLS_API void Reset();

};

} }

#endif
