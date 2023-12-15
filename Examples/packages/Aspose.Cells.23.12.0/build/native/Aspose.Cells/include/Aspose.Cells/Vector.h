// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_VECTOR_H
#define ASPOSE_CELLS_VECTOR_H

#include <stdint.h>
#include <initializer_list>

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

/// <summary>
/// Vector template class. The elements are stored contiguously.
/// </summary>
/// <typeparam name="T"></typeparam>
template <typename T>
class Vector {
private:
	T*			_data;
	int32_t		_len;

public:
	/// <summary>
	/// Constructs an element Vector of the specified length.
	/// </summary>
	/// <param name="len"></param>
	/// <returns></returns>
	ASPOSE_CELLS_API Vector(int32_t len);
	/// <summary>
	/// Constructs from an element array. All elements will be copied.
	/// </summary>
	/// <param name="data">The element array pointer</param>
	/// <param name="len">The length of the array</param>
	/// <returns></returns>
	ASPOSE_CELLS_API Vector(const T* data, int32_t len);
	/// <summary>
	/// Constructs using initialization list.
	/// </summary>
	ASPOSE_CELLS_API Vector(std::initializer_list<T> init);
	/// <summary>
	/// Copy constructor.
	/// </summary>
	ASPOSE_CELLS_API Vector(const Vector& src);
	/// <summary>
	/// Destructor.
	/// </summary>
	ASPOSE_CELLS_API ~Vector();

	/// <summary>
	/// operator=
	/// </summary>
	ASPOSE_CELLS_API Vector& operator=(const Vector& src);
	/// <summary>
	/// Array subscript operator.
	/// </summary>
	/// <param name="index">subscript index</param>
	/// <returns>Element reference</returns>
	ASPOSE_CELLS_API T& operator[](int32_t index) const;
	/// <summary>
	/// Gets the address of the element array in this vector.
	/// </summary>
	/// <returns>Pointer to the element array.</returns>
	ASPOSE_CELLS_API T* GetData() const;
	/// <summary>
	/// Gets the length of the elements in this Vector.
	/// </summary>
	ASPOSE_CELLS_API int32_t GetLength() const;
	/// <summary>
	/// operator bool()
	/// </summary>
	/// <returns>Returns true if the element array is not nullptr. Otherwise, returns false</returns>
	ASPOSE_CELLS_API explicit operator bool() const { return _data != nullptr; }
	/// <summary>
	/// Checks whether the element array is nullptr.
	/// </summary>
	/// <returns>Returns true if the element array is nullptr. Otherwise, returns false</returns>
	ASPOSE_CELLS_API bool IsNull() const { return _data == nullptr; }

};

} }

#endif
