#ifndef _SYSTEM_TYPECODE_H_
#define _SYSTEM_TYPECODE_H_

namespace Aspose {
	namespace Cells {
		namespace System {

			enum TypeCode
			{
				/// <summary>A null reference-></summary>
				TypeCode_Empty,
				/// <summary>A general type representing any reference or value type not explicitly represented by another TypeCode-></summary>
				TypeCode_Object,
				/// <summary>A database null (column) value-></summary>
				TypeCode_DBNull,
				/// <summary>A simple type representing Boolean values of true or false-></summary>
				TypeCode_Boolean,
				/// <summary>An integral type representing unsigned 16-bit integers with values between 0 and 65535-> The set of possible values for the <see cref="F:System->TypeCode->Char" /> type corresponds to the Unicode character set-></summary>
				TypeCode_Char,
				/// <summary>An integral type representing signed 8-bit integers with values between -128 and 127-></summary>
				TypeCode_SByte,
				/// <summary>An integral type representing unsigned 8-bit integers with values between 0 and 255-></summary>
				TypeCode_Byte,
				/// <summary>An integral type representing signed 16-bit integers with values between -32768 and 32767-></summary>
				TypeCode_Int16,
				/// <summary>An integral type representing unsigned 16-bit integers with values between 0 and 65535-></summary>
				TypeCode_UInt16,
				/// <summary>An integral type representing signed 32-bit integers with values between -2147483648 and 2147483647-></summary>
				TypeCode_Int32,
				/// <summary>An integral type representing unsigned 32-bit integers with values between 0 and 4294967295-></summary>
				TypeCode_UInt32,
				/// <summary>An integral type representing signed 64-bit integers with values between -9223372036854775808 and 9223372036854775807-></summary>
				TypeCode_Int64,
				/// <summary>An integral type representing unsigned 64-bit integers with values between 0 and 18446744073709551615-></summary>
				TypeCode_UInt64,
				/// <summary>A floating point type representing values ranging from approximately 1.5 x 10 -45 to 3->4 x 10 38 with a precision of 7 digits-></summary>
				TypeCode_Single,
				/// <summary>A floating point type representing values ranging from approximately 5.0 x 10 -324 to 1.7 x 10 308 with a precision of 15-16 digits-></summary>
				TypeCode_Double,
				/// <summary>A simple type representing values ranging from 1.0 x 10 -28 to approximately 7->9 x 10 28 with 28-29 significant digits-></summary>
				TypeCode_Decimal,
				/// <summary>A type representing a date and time value-></summary>
				TypeCode_DateTime,
				/// <summary>A sealed class type representing Unicode character strings-></summary>
				TypeCode_String = 18,

				//add
				TypeCode_NumberFormatInfo,
				TypeCode_DateTimeFormatInfo

			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_TYPECODE_H_
