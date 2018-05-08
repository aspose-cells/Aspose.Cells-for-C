#ifndef _SYSTEM_STRING_H_
#define _SYSTEM_STRING_H_

#include "System/Object.h"
#include "System/StringComparison.h"
#include "System/StringSplitOptions.h"
#include "System/Char.h"
#include "System/Byte.h"
#include "System/IComparable.h"
#include "unicode/unistr.h"

using namespace std;
using namespace icu;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class CultureInfo;
			}
		}
	}
}

using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System {

			template <class T> class Array1D;

			//template <class T> class intrusive_ptr;
 ;
			class ASPOSE_CELLS_API String : public Object, public IComparable
			{
			public:
				Char*		_wstr;
				int32_t		_len;

			private:
				static const int32_t _defaultCapacity = 16;
				int32_t		_capacity;
				UnicodeString* _uniStr;
				int16_t		_wstrVersion;
				int16_t		_uniStrVersion;

			public:
				String();
				virtual ~String();
				String(const Char* wstr);
				String(int32_t len, const Char* wstr);
				String(const Char* wstr, int32_t index, int32_t len);
				String(const String& str);
				String(Char c);
				String(Char c, int32_t count);
				String(intrusive_ptr<Array1D<Char>> value, int startIndex, int length);
				String(intrusive_ptr<Array1D<Char>> value);
				String(intrusive_ptr<String> v);
				String(const char* v);
				String(UnicodeString* v);
				String(UnicodeString& v);
				UnicodeString* UniValue();
				void EnsureCapacity(int32_t capacity);
				int32_t Length() const;

			private:
				bool IsCharEqual(Char c1, Char c2);
				int MakeSeparatorList(intrusive_ptr<Array1D<Char>> separator, intrusive_ptr<Array1D<int>> sepList);
				int MakeSeparatorList(intrusive_ptr<Array1D<String*>> separators, intrusive_ptr<Array1D<int>> sepList, intrusive_ptr<Array1D<int>> lengthList);
				intrusive_ptr<Array1D<String*>> InternalSplitOmitEmptyEntries(intrusive_ptr<Array1D<int>> sepList, intrusive_ptr<Array1D<int>> lengthList, int numReplaces, int count);
				intrusive_ptr<Array1D<String*>> InternalSplitKeepEmptyEntries(intrusive_ptr<Array1D<int>> sepList, intrusive_ptr<Array1D<int>> lengthList, int numReplaces, int count);
				intrusive_ptr<String> TrimHelper(int trimType);
				intrusive_ptr<String> TrimHelper(intrusive_ptr<Array1D<Char>> trimChars, int trimType);
				intrusive_ptr<String> CreateTrimmedString(int start, int end);
				intrusive_ptr<String> InternalSubString(int startIndex, int length, bool fAlwaysCopy);
				static intrusive_ptr<String> ConcatArray(intrusive_ptr<Array1D<String*>> values, int totalLength);
				static void FillStringChecked(intrusive_ptr<String> dest, int destPos, intrusive_ptr<String> src);
				int LastIndexOfAnyUnchecked(intrusive_ptr<Array1D<Char>> anyOf, int startIndex, int count);
				int LastIndexOfUnchecked(Char value, int startIndex, int count);
				intrusive_ptr<Array1D<String*>> SplitInternal(intrusive_ptr<Array1D<Char>> separator, int count, StringSplitOptions options);

			public:
				Char* value();
				char* charValue();
				static void deleteCharValue(char* value);
				static intrusive_ptr<String> Empty;

				intrusive_ptr<String> ToString();
			public:
				int32_t CompareTo(ObjectPtr value);
				int32_t CompareTo(intrusive_ptr<String> strB);
				int32_t CompareTo(intrusive_ptr<String> strB, StringComparison comparisonType);
				bool Equals(ObjectPtr obj);
				bool Equals(intrusive_ptr<String> value);
				bool Equals(intrusive_ptr<String> value, bool IgnoreCase);
				bool Equals(intrusive_ptr<String> value, StringComparison comparisonType);
				static bool Equals(intrusive_ptr<String> a, intrusive_ptr<String> b);
				static bool Equals(intrusive_ptr<String> a, intrusive_ptr<String> b, StringComparison comparisonType);
				bool EndsWith(intrusive_ptr<String> value);
				bool EndsWith(intrusive_ptr<String> value, StringComparison comparisonType);
				int32_t IndexOf(Char value, int32_t startIndex);
				int32_t IndexOf(Char value, int32_t startIndex, int32_t count);
				int32_t IndexOf(intrusive_ptr<String> value);
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex);
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count);
				int32_t IndexOf(intrusive_ptr<String> value, StringComparison comparisonType);
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex, StringComparison comparisonType);
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count, StringComparison comparisonType);
				int32_t LastIndexOf(Char value);
				int32_t LastIndexOf(Char value, int32_t startIndex);
				int32_t LastIndexOf(Char value, int32_t startIndex, int32_t count);
				int32_t LastIndexOf(intrusive_ptr<String> value);
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex);
				int32_t LastIndexOf(intrusive_ptr<String> value, StringComparison comparisonType);
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count);
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex, StringComparison comparisonType);
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count, StringComparison comparisonType);
				int32_t IndexOfAny(intrusive_ptr<Array1D<Char>> anyOf);
				int32_t IndexOfAny(intrusive_ptr<Array1D<Char>> anyOf, int32_t startIndex);
				int32_t IndexOfAny(intrusive_ptr<Array1D<Char>> anyOf, int32_t startIndex, int32_t count);
				int32_t LastIndexOfAny(intrusive_ptr<Array1D<Char>> anyOf);
				int32_t LastIndexOfAny(intrusive_ptr<Array1D<Char>> anyOf, int32_t startIndex, int32_t count);
				intrusive_ptr<String> Remove(int startIndex, int count);
				intrusive_ptr<String> Replace(Char oldChar, Char newChar);
				intrusive_ptr<String> Replace(intrusive_ptr<String> oldValue, intrusive_ptr<String> newValue);
				intrusive_ptr<String> Substring(int32_t startIndex);
				intrusive_ptr<String> Substring(int32_t startIndex, int32_t length);
				intrusive_ptr<Array1D<String*>> Split(Char separator);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator, int32_t count);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator, StringSplitOptions options);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator, int32_t count, StringSplitOptions options);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<String*>> separator, StringSplitOptions options);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<String*>> separator, int32_t count, StringSplitOptions options);
				bool StartsWith(intrusive_ptr<String> value);
				bool StartsWith(intrusive_ptr<String> value, StringComparison comparisonType);
				intrusive_ptr<Array1D<Char>> ToCharArray();
				intrusive_ptr<Array1D<Char>> ToCharArray(int32_t startIndex, int32_t length);
				intrusive_ptr<String> ToLower();
				intrusive_ptr<String> ToLowerInvariant();
				intrusive_ptr<String> ToUpper();
				intrusive_ptr<String> ToUpper(intrusive_ptr<CultureInfo> culture);
				intrusive_ptr<String> ToUpperInvariant();
				intrusive_ptr<String> Trim();
				intrusive_ptr<String> Trim(Char trimChar);
				intrusive_ptr<String> Trim(intrusive_ptr<Array1D<Char>> trimChars);
				intrusive_ptr<String> TrimEnd();
				intrusive_ptr<String> TrimEnd(Char trimChar);
				intrusive_ptr<String> TrimEnd(intrusive_ptr<Array1D<Char>> trimChars);
				intrusive_ptr<String> TrimStart();
				intrusive_ptr<String> TrimStart(Char trimChar);
				intrusive_ptr<String> TrimStart(intrusive_ptr<Array1D<Char>> trimChars);
				static intrusive_ptr<String> Copy(intrusive_ptr<String> str);
				void CopyTo(int32_t sourceIndex, intrusive_ptr<Array1D<Char>> destination, int32_t destinationIndex, int32_t count);
				Char CharAt(int32_t index);
				int GetHashCode();
				static intrusive_ptr<String> Concat(intrusive_ptr<Array1D<String*>> values);
				intrusive_ptr<String> PadLeft(int totalWidth);
				intrusive_ptr<String> PadLeft(int totalWidth, Char paddingChar);
				intrusive_ptr<String> PadRight(int totalWidth);
				intrusive_ptr<String> PadRight(int totalWidth, Char paddingChar);
				bool Contains(intrusive_ptr<String> value);
				intrusive_ptr<String> StringAppend(intrusive_ptr<String> rv);
				intrusive_ptr<String> Append(intrusive_ptr<String> rv);
				static void wstrcpy(Char* dmem, const Char* smem, int charCount);
				static intrusive_ptr<String> FastAllocateString(int len);

			public:
				String& operator = (const String& str);
				//intrusive_ptr<String>  operator + (const Char * ch);
				//intrusive_ptr<String>  operator + (const char * ch);
				friend ASPOSE_CELLS_API intrusive_ptr<String>  operator + (intrusive_ptr<String> strSrc, const char* ch);
				friend ASPOSE_CELLS_API intrusive_ptr<String>  operator + (intrusive_ptr<String> strSrc, const Char* ch);
				String& Copy(const Char* str, int32_t index, int32_t len);

				String& Append(Char chr);
				String& AppendS(String* str);
				String& Append(const Char* str);
				String& Append(Char* str, int32_t len);
				String& Append(Char* str, int32_t index, int32_t len);
				String& Insert(int32_t dstIndex, Char chr);
				String& Insert(int32_t dstIndex, Char* str, int32_t len);
				String& Insert(int32_t dstIndex, Char* str, int32_t srcIndex, int32_t len);

				String& Replace(Char* oldStr, Char newChar);
				int32_t IndexOf(Char chr);
				String& MakeEmpty();
				String& RemoveEnd(int32_t len);
				bool Equals(String* str);
				bool Equals(Char* str, int32_t start, int32_t len);
				bool Equals(const Char* str);

			public:
				static bool IsNullString(String* str);
				static bool IsEmptyString(String* str);
				static bool IsNullOrEmpty(String* str);
				static bool IsNullString(intrusive_ptr<String> str);
				static bool IsEmptyString(intrusive_ptr<String> str);
				static bool IsNullOrEmpty(intrusive_ptr<String> str);
				static int32_t GetHashCode(Char* str, int32_t index, int32_t len);

				static int32_t IndexOf(Char* str, Char chr);
				static String* Substring(Char* str, int32_t startIndex);
				static String* Substring(Char* str, int32_t startIndex, int32_t length);

				static bool Equals(String* str1, String* str2);
				static bool Equals(String* str1, const Char* str2);

				static void Free(String* str);
			};

			typedef intrusive_ptr<String> StringPtr;
		}
	}
}	// namespace System

#endif	// _SYSTEM_STRING_H_
