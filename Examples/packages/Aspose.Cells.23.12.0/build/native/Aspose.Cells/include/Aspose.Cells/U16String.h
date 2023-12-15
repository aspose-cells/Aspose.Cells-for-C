// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_U16STRING_H
#define ASPOSE_CELLS_U16STRING_H

#include <stdint.h>
#include <string>

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the char16_t array class and ends with u'\0'.
/// </summary>
class ASPOSE_CELLS_API2 U16String {
private:
	char16_t* _data;
	int32_t		_len;

public:
	/// <summary>
	/// Default constructor. Constructs an empty U16String object.
	/// </summary>
	ASPOSE_CELLS_API U16String();
	/// <summary>
	/// Constructs from an const char* string.
	/// </summary>
	ASPOSE_CELLS_API U16String(const char* str);
	/// <summary>
	/// Constructs from an const char16_t* string.
	/// </summary>
	ASPOSE_CELLS_API U16String(const char16_t* ustr);
	/// <summary>
	/// Constructs from const char16_t* string with specified length.
	/// </summary>
	ASPOSE_CELLS_API U16String(const char16_t* ustr, int32_t len);
	/// <summary>
	/// Copy constructor.
	/// </summary>
	ASPOSE_CELLS_API U16String(const U16String& src);
	/// <summary>
	/// Destructor.
	/// </summary>
	ASPOSE_CELLS_API ~U16String();

	/// <summary>
	/// operator=
	/// </summary>
	ASPOSE_CELLS_API U16String& operator=(const U16String& str);
	/// <summary>
	/// Concatenate another string into this.
	/// </summary>
	/// <param name="str">an U16String object.</param>
	ASPOSE_CELLS_API U16String& operator+=(const U16String& str);
	/// <summary>
	/// Concatenate another string into this.
	/// </summary>
	/// <param name="str">an const char* string.</param>
	ASPOSE_CELLS_API U16String& operator+=(const char* str);
	/// <summary>
	/// Concatenate another string into this.
	/// </summary>
	/// <param name="ustr">an const char16_t* string.</param>
	ASPOSE_CELLS_API U16String& operator+=(const char16_t* ustr);
	/// <summary>
	/// Concatenate a char16_t character into this
	/// </summary>
	/// <param name="ch">a char16_t character.</param>
	ASPOSE_CELLS_API U16String& operator+=(const char16_t ch);
	/// <summary>
	/// Array subscript operator.
	/// </summary>
	/// <param name="index"></param>
	/// <returns>char16_t</returns>
	ASPOSE_CELLS_API char16_t operator[](int32_t index);
	/// <summary>
	/// operator bool()
	/// </summary>
	/// <returns>Returns true if the char16_t array is not nullptr. Otherwise, returns false</returns>
	ASPOSE_CELLS_API explicit operator bool() const { return _data != nullptr; }
	/// <summary>
	/// Checks whether the object array is nullptr.
	/// </summary>
	/// <returns>Returns true if the char16_t array is nullptr. Otherwise, returns false</returns>
	ASPOSE_CELLS_API bool IsNull() const { return _data == nullptr; }

	/// <summary>
	/// Gets the address of the char16_t array in this vector.
	/// </summary>
	/// <returns>Pointer to the char16_t array.</returns>
	ASPOSE_CELLS_API const char16_t* GetData() const;
	/// <summary>
	/// Gets the length of the char16_t array in this Vector. Excluding the trailing u'\0'.
	/// </summary>
	ASPOSE_CELLS_API int32_t GetLength() const;
	/// <summary>
	/// Checks whether the char16_t array is empty.
	/// </summary>
	/// <returns>Returns true if the char16_t array is empty. Otherwise, returns false</returns>
	ASPOSE_CELLS_API bool IsEmpty() const { return _len == 0; }
	/// <summary>
	/// Returns the index of the first occurrence of the value in this.
	/// </summary>
	/// <param name="value">To be searched.</param>
	ASPOSE_CELLS_API int32_t IndexOf(const char16_t value) const;
	/// <summary>
	/// Returns the index of the first occurrence of the value in this.
	/// </summary>
	/// <param name="value">To be searched.</param>
	ASPOSE_CELLS_API int32_t IndexOf(const char16_t* value) const;
	/// <summary>
	/// Returns the index of the first occurrence of the value in this.
	/// </summary>
	/// <param name="value">To be searched.</param>
	ASPOSE_CELLS_API int32_t IndexOf(const U16String& value) const;
	/// <summary>
	/// Trims leading and trailing spaces in this.
	/// </summary>
	/// <returns>A new U16String object.</returns>
	ASPOSE_CELLS_API U16String Trim() const;

	/// <summary>
	/// Converts this to UTF8 string.
	/// </summary>
	/// <param name="output">The output buffer. The output does not end with '\0'.</param>
	/// <param name="len">The length of output buffer.</param>
	/// <returns>The length of output buffer. If ToUtf8(nullptr, 0) is called, it returns the desired output buffer length.</returns>
	ASPOSE_CELLS_API int32_t ToUtf8(char* output, int32_t len) const;

	/// <summary>
	/// Converts this to std::string in UTF8 format. The result does not end with '\0'.
	/// </summary>
	std::string ToUtf8() const {
		std::string str;
		int32_t len = this->ToUtf8(nullptr, 0);
		if (len > 0) {
			str.resize(len);
			ToUtf8(&str[0], len);
		}
		return str;
	}

	/// <summary>
	/// Concatenate two U16String objects and returns a new U16String object.
	/// </summary>
	friend ASPOSE_CELLS_API U16String operator+(const U16String& lhs, const U16String& rhs);
	/// <summary>
	/// Concatenate a U16String object and a const char* string, returns a new U16String object.
	/// </summary>
	friend ASPOSE_CELLS_API U16String operator+(const U16String& lhs, const char* str);
	/// <summary>
	/// Concatenate a U16String object and a const char16_t* string, returns a new U16String object.
	/// </summary>
	friend ASPOSE_CELLS_API U16String operator+(const U16String& lhs, const char16_t* ustr);
};

/// <summary>
/// operator==
/// </summary>
ASPOSE_CELLS_API bool operator==(const U16String& str1, const U16String& str2);
/// <summary>
/// operator!=
/// </summary>
ASPOSE_CELLS_API bool operator!=(const U16String& str1, const U16String& str2);

} }

#endif
