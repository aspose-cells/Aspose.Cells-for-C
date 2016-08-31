#ifndef _SYSTEM_STRING_H_
#define _SYSTEM_STRING_H_

//#include "common.h"
#include "System/Object.h"
#include "System/StringComparison.h"
#include "System/StringSplitOptions.h"
#include "System/Char.h"
//#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/IComparable.h"
//#include <Winnls.h>
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

			template <class T>
			class Array1D;

			//typedef Array1D<Char> CString;
			//typedef Array1D<Byte> BString;

			class ASPOSE_CELLS_API String : public Object, public IComparable
			{
			private:
				//Char* _value;
				//int32_t _length;
				UnicodeString* _uniStr;

				bool IsCharEqual(Char c1, Char c2);
				int MakeSeparatorList(intrusive_ptr<Array1D<Char>> separator, intrusive_ptr<Array1D<int>> sepList);
				int MakeSeparatorList(intrusive_ptr<Array1D<String*>> separators, intrusive_ptr<Array1D<int>> sepList, intrusive_ptr<Array1D<int>> lengthList);
				intrusive_ptr<Array1D<String*>> InternalSplitOmitEmptyEntries(intrusive_ptr<Array1D<int>> sepList, intrusive_ptr<Array1D<int>> lengthList, int numReplaces, int count);
				intrusive_ptr<Array1D<String*>> InternalSplitKeepEmptyEntries(intrusive_ptr<Array1D<int>> sepList, intrusive_ptr<Array1D<int>> lengthList, int numReplaces, int count);
				intrusive_ptr<String> TrimHelper(int trimType);
				intrusive_ptr<String> CreateTrimmedString(int start, int end);
				intrusive_ptr<String> InternalSubString(int startIndex, int length, bool fAlwaysCopy);
				intrusive_ptr<String> TrimHelper(intrusive_ptr<Array1D<Char>> trimChars, int trimType);
				static intrusive_ptr<String> ConcatArray(intrusive_ptr<Array1D<String*>> values, int totalLength);
				static void FillStringChecked(intrusive_ptr<String> dest, int destPos, intrusive_ptr<String> src);
				int LastIndexOfAnyUnchecked(intrusive_ptr<Array1D<Char>> anyOf, int startIndex, int count);
				int LastIndexOfUnchecked(Char value, int startIndex, int count);

			public:
				String();
				virtual ~String();
				//String(const UnicodeString &v);
				String(UnicodeString* v);
				String(const char* v);
				//NEW String(const wchar_t* v);
				String(const String& v);
				String(const String* v);
				String(Char c);
				String(Char c, int32_t count);
				String(intrusive_ptr<Array1D<Char>> value, int startIndex, int length);
				String(intrusive_ptr<Array1D<Char>> value);
				String(intrusive_ptr<String> v);
				//static String* FormatStringWithArray1D(Array1D<Char>* value);//for : NEW String(Array1D<Char>& v);   
				int32_t Length() const;

				Char* value();
				//const Char* value();
				char* charValue();
				static void deleteCharValue(char* value);
				UnicodeString* UniValue();
				static intrusive_ptr<String> Empty;

				intrusive_ptr<String> ToString();
				//operator const char*();
			public:
				int32_t CompareTo(ObjectPtr value);
				int32_t CompareTo(intrusive_ptr<String> strB);
				int32_t CompareTo(intrusive_ptr<String> strB, StringComparison comparisonType);
				bool Equals(ObjectPtr obj);
				bool Equals(intrusive_ptr<String> value);
				bool Equals(intrusive_ptr<String> value, bool IgnoreCase);
				bool Equals(intrusive_ptr<String> value, StringComparison comparisonType);//to do
				static bool Equals(intrusive_ptr<String> a, intrusive_ptr<String> b);
				static bool Equals(intrusive_ptr<String> a, intrusive_ptr<String> b, StringComparison comparisonType);//to do
				bool EndsWith(intrusive_ptr<String> value);
				bool EndsWith(intrusive_ptr<String> value, StringComparison comparisonType);//to do
				////bool EndsWith(String* value, bool ignoreCase, CultureInfo culture);
				int32_t IndexOf(Char value);
				int32_t IndexOf(Char value, int32_t startIndex);
				int32_t IndexOf(Char value, int32_t startIndex, int32_t count);
				int32_t IndexOf(intrusive_ptr<String> value);
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex);
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count);
				int32_t IndexOf(intrusive_ptr<String> value, StringComparison comparisonType);//to do
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex, StringComparison comparisonType);//to do
				int32_t IndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count, StringComparison comparisonType);//to do
				int32_t LastIndexOf(Char value);
				int32_t LastIndexOf(Char value, int32_t startIndex);
				int32_t LastIndexOf(Char value, int32_t startIndex, int32_t count);
				int32_t LastIndexOf(intrusive_ptr<String> value);
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex);
				int32_t LastIndexOf(intrusive_ptr<String> value, StringComparison comparisonType);//to do
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count);
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex, StringComparison comparisonType);//to do
				int32_t LastIndexOf(intrusive_ptr<String> value, int32_t startIndex, int32_t count, StringComparison comparisonType);//to do
				int32_t IndexOfAny(intrusive_ptr<Array1D<Char>> anyOf);
				int32_t IndexOfAny(intrusive_ptr<Array1D<Char>> anyOf, int32_t startIndex);
				int32_t IndexOfAny(intrusive_ptr<Array1D<Char>> anyOf, int32_t startIndex, int32_t count);
				int32_t LastIndexOfAny(intrusive_ptr<Array1D<Char>> anyOf);
				int32_t LastIndexOfAny(intrusive_ptr<Array1D<Char>> anyOf, int32_t startIndex, int32_t count);
				intrusive_ptr<String> Replace(Char oldChar, Char newChar);
				intrusive_ptr<String> Replace(intrusive_ptr<String> oldValue, intrusive_ptr<String> newValue);
				intrusive_ptr<String> Substring(int32_t startIndex);
				intrusive_ptr<String> Substring(int32_t startIndex, int32_t length);
				////Array1D<String*>* Split(Array1D<Char>* separator);
				intrusive_ptr<Array1D<String*>> Split(Char separator);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator, int32_t count);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator, StringSplitOptions options);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<Char>> separator, int32_t count, StringSplitOptions options);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<String*>> separator, StringSplitOptions options);
				intrusive_ptr<Array1D<String*>> Split(intrusive_ptr<Array1D<String*>> separator, int32_t count, StringSplitOptions options);
				bool StartsWith(intrusive_ptr<String> value);
				bool StartsWith(intrusive_ptr<String> value, StringComparison comparisonType);//to do
				////bool StartsWith(String* value, bool ignoreCase, CultureInfo culture);
				intrusive_ptr<Array1D<Char>> ToCharArray();
				intrusive_ptr<Array1D<Char>> ToCharArray(int32_t startIndex, int32_t length);
				intrusive_ptr<String> ToLower();
				////String* ToLower(CultureInfo culture);
				intrusive_ptr<String> ToLowerInvariant();
				////String* ToString(intrusive_ptr<IFormatProvider> provider);
				intrusive_ptr<String> ToUpper();
				intrusive_ptr<String> ToUpper(intrusive_ptr<CultureInfo> culture);
				intrusive_ptr<String> ToUpperInvariant();
				intrusive_ptr<String> Trim();
				intrusive_ptr<String> Trim(Char trimChar);
				intrusive_ptr<String> Trim(intrusive_ptr<Array1D<Char>> trimChars);
				intrusive_ptr<String> TrimEnd();//for : "String* TrimEnd(Array1D<Char>* trimChars);", take no param??
				intrusive_ptr<String> TrimEnd(Char trimChar);
				intrusive_ptr<String> TrimEnd(intrusive_ptr<Array1D<Char>> trimChars);
				intrusive_ptr<String> TrimStart();
				intrusive_ptr<String> TrimStart(intrusive_ptr<Array1D<Char>> trimChars);
				//void Copy(Object* obj);//??
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

			public:
				//operator:
				//String& operator =(String rv);
				intrusive_ptr<String> StringAppend(intrusive_ptr<String> rv);
				//String* StringAppend(const int rv);
				//String* StringAppend(const Color* rv);//"; " + this->Color会产生类似";"+"Color [Red]"的效果，可通过Color->Name来获得
				/*
				String* operator +(String* rv);
				String* operator +(const int rv);
				String* operator +(Char rv);
				String* operator +(Double rv);
				String* operator +(char rv);
				//String* operator +(Object* rv);
				*/

				//trans "+=" as "Append"
				//String*& operator +=(const String*& rv);
				intrusive_ptr<String> Append(intrusive_ptr<String> rv);
				//String* Append(char rv);
				//String* Append(int rv);

				//bool operator ==(String* rv);
				//bool operator <(String* rv);
				//bool operator >(String* rv);


			protected://internal
				intrusive_ptr<Array1D<String*>> SplitInternal(intrusive_ptr<Array1D<Char>> separator, int count, StringSplitOptions options);
				
			public://internal
				static void wstrcpy(Char* dmem, const Char* smem, int charCount);
				static intrusive_ptr<String> FastAllocateString(int len);
			};

			//inline bool operator==(intrusive_ptr<String> a, intrusive_ptr<String> b)
			//{
			//	//return a->Equals(b);
			//	return String::Equals(a, b);
			//}

			/*
			inline String* operator +(Char lv, String* rv)
			{
				String* tmp(lv, 1);
				return tmp->StringAppend(rv);
			}
			inline String* operator +(int lv, String* rv)
			{
				char s[15];
				_itoa_s(lv, s, 10);
				String* tmpStr(s);
				return tmpStr->StringAppend(rv);
			}
			*/
			//typedef String* PString;
			typedef intrusive_ptr<String> StringPtr;
		}
	}
}	// namespace System

#endif	// _SYSTEM_STRING_H_
