#ifndef _SYSTEM_RUNTIME_INTEROPSERVICES_VARENUM_H_
#define _SYSTEM_RUNTIME_INTEROPSERVICES_VARENUM_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Runtime
			{
				namespace InteropServices
				{
					enum VarEnum
					{
						// Summary:
						//     Indicates that a value was not specified->
						VarEnum_VT_EMPTY = 0,
						//
						// Summary:
						//     Indicates a null value, similar to a null value in SQL->
						VarEnum_VT_NULL = 1,
						//
						// Summary:
						//     Indicates a short integer->
						VarEnum_VT_I2 = 2,
						//
						// Summary:
						//     Indicates a long integer->
						VarEnum_VT_I4 = 3,
						//
						// Summary:
						//     Indicates a float value->
						VarEnum_VT_R4 = 4,
						//
						// Summary:
						//     Indicates a double value->
						VarEnum_VT_R8 = 5,
						//
						// Summary:
						//     Indicates a currency value->
						VarEnum_VT_CY = 6,
						//
						// Summary:
						//     Indicates a DATE value->
						VarEnum_VT_DATE = 7,
						//
						// Summary:
						//     Indicates a BSTR String*->
						VarEnum_VT_BSTR = 8,
						//
						// Summary:
						//     Indicates an IDispatch pointer->
						VarEnum_VT_DISPATCH = 9,
						//
						// Summary:
						//     Indicates an SCODE->
						VarEnum_VT_ERROR = 10,
						//
						// Summary:
						//     Indicates a Boolean value->
						VarEnum_VT_BOOL = 11,
						//
						// Summary:
						//     Indicates a VARIANT far pointer->
						VarEnum_VT_VARIANT = 12,
						//
						// Summary:
						//     Indicates an IUnknown pointer->
						VarEnum_VT_UNKNOWN = 13,
						//
						// Summary:
						//     Indicates a decimal value->
						VarEnum_VT_DECIMAL = 14,
						//
						// Summary:
						//     Indicates a char value->
						VarEnum_VT_I1 = 16,
						//
						// Summary:
						//     Indicates a byte->
						VarEnum_VT_UI1 = 17,
						//
						// Summary:
						//     Indicates an unsignedshort->
						VarEnum_VT_UI2 = 18,
						//
						// Summary:
						//     Indicates an unsignedlong->
						VarEnum_VT_UI4 = 19,
						//
						// Summary:
						//     Indicates a 64-bit integer->
						VarEnum_VT_I8 = 20,
						//
						// Summary:
						//     Indicates an 64-bit unsigned integer->
						VarEnum_VT_UI8 = 21,
						//
						// Summary:
						//     Indicates an integer value->
						VarEnum_VT_INT = 22,
						//
						// Summary:
						//     Indicates an unsigned integer value->
						VarEnum_VT_UINT = 23,
						//
						// Summary:
						//     Indicates a C style void->
						VarEnum_VT_VOID = 24,
						//
						// Summary:
						//     Indicates an HRESULT->
						VarEnum_VT_HRESULT = 25,
						//
						// Summary:
						//     Indicates a pointer type->
						VarEnum_VT_PTR = 26,
						//
						// Summary:
						//     Indicates a SAFEARRAY-> Not valid in a VARIANT->
						VarEnum_VT_SAFEARRAY = 27,
						//
						// Summary:
						//     Indicates a C style array->
						VarEnum_VT_CARRAY = 28,
						//
						// Summary:
						//     Indicates a user defined type->
						VarEnum_VT_USERDEFINED = 29,
						//
						// Summary:
						//     Indicates a null-terminated String*->
						VarEnum_VT_LPSTR = 30,
						//
						// Summary:
						//     Indicates a wide String* terminated by null->
						VarEnum_VT_LPWSTR = 31,
						//
						// Summary:
						//     Indicates a user defined type->
						VarEnum_VT_RECORD = 36,
						//
						// Summary:
						//     Indicates a FILETIME value->
						VarEnum_VT_FILETIME = 64,
						//
						// Summary:
						//     Indicates length prefixed bytes->
						VarEnum_VT_BLOB = 65,
						//
						// Summary:
						//     Indicates that the name of a stream follows->
						VarEnum_VT_STREAM = 66,
						//
						// Summary:
						//     Indicates that the name of a storage follows->
						VarEnum_VT_STORAGE = 67,
						//
						// Summary:
						//     Indicates that a stream contains an object->
						VarEnum_VT_STREAMED_OBJECT = 68,
						//
						// Summary:
						//     Indicates that a storage contains an object->
						VarEnum_VT_STORED_OBJECT = 69,
						//
						// Summary:
						//     Indicates that a blob contains an object->
						VarEnum_VT_BLOB_OBJECT = 70,
						//
						// Summary:
						//     Indicates the clipboard format->
						VarEnum_VT_CF = 71,
						//
						// Summary:
						//     Indicates a class ID->
						VarEnum_VT_CLSID = 72,
						//
						// Summary:
						//     Indicates a simple, counted array->
						VarEnum_VT_VECTOR = 4096,
						//
						// Summary:
						//     Indicates a SAFEARRAY pointer->
						VarEnum_VT_ARRAY = 8192,
						//
						// Summary:
						//     Indicates that a value is a reference->
						VarEnum_VT_BYREF = 16384,
					};
				}
			}
		}
	}
}
#endif//_SYSTEM_RUNTIME_INTEROPSERVICES_VARENUM_H_
