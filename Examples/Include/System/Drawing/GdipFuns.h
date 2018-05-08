#ifndef _SYSTEM_DRAWING_GDIPFUNS_H_
#define _SYSTEM_DRAWING_GDIPFUNS_H_

#include "System/System.h"
#include "System/Exception.h"
#include "System/ArgumentException.h"
#include "System/OutOfMemoryException.h"
#include "System/NotSupportedException.h"
#include "System/OverflowException.h"
#include "System/NotImplementedException.h"
#include "System/InvalidOperationException.h"
#include "System/Drawing/Drawing2D/MatrixOrder.h"
#include <comdef.h>
#include <gdiplus.h>
#include <gdiplustypes.h>

using namespace Gdiplus;
using namespace Gdiplus::DllExports;

namespace Aspose {
	namespace Cells {
		namespace System{
			namespace Drawing {
				class ASPOSE_CELLS_API GdipStartUp
				{
				private:
					GdiplusStartupInput gdiplusStartupInput;
					
				public:
					static ULONG_PTR gdiplusToken;
					GdipStartUp();
					~GdipStartUp();
				};
				///ULONG_PTR GdipStartUp::gdiplusToken = 0;

				///static GdipStartUp gdipInit;

				static StringPtr GetText(StringPtr msg)
				{
					return msg;
				}
				static void CheckStatus(Status status)
				{
					StringPtr msg;
					switch (status) {
					case Ok:
						return;
					case GenericError:
						msg = GetText(NEW String("Generic Error [GDI+ status: GenericError!]"));
						throw Exception(msg);
					case InvalidParameter:
						msg = GetText(NEW String("A null reference or invalid value was found [GDI+ status: InvalidParameter]"));
						throw ArgumentException(msg);
					case OutOfMemory:
						msg = GetText(NEW String("Not enough memory to complete operation [GDI+ status: OutOfMemory]"));
						throw OutOfMemoryException(msg);
					case ObjectBusy:
						msg = GetText(NEW String("Object is busy and cannot state allow this operation [GDI+ status: ObjectBusy]"));
						throw Exception(msg);//MemberAccessException
					case InsufficientBuffer:
						msg = GetText(NEW String("Insufficient buffer provided to complete operation [GDI+ status: InsufficientBuffer]"));
						throw Exception(msg);//InternalBufferOverflowException
					case PropertyNotSupported:
						msg = GetText(NEW String("Property not supported [GDI+ status: PropertyNotSupported]"));
						throw NotSupportedException(msg);
					case FileNotFound:
						msg = GetText(NEW String("Requested file was not found [GDI+ status: FileNotFound]"));
						throw Exception(msg);//FileNotFoundException
					case AccessDenied:
						msg = GetText(NEW String("Access to resource was denied [GDI+ status: AccessDenied]"));
						throw Exception(msg);//UnauthorizedAccessException
					case UnknownImageFormat:
						msg = GetText(NEW String("Either the image format is unknown or you don't have the required libraries to decode this format [GDI+ status: UnknownImageFormat]"));
						throw NotSupportedException(msg);
					case NotImplemented:
						msg = GetText(NEW String("The requested feature is not implemented [GDI+ status: NotImplemented]"));
						throw NotImplementedException(msg);
					case WrongState:
						msg = GetText(NEW String("Object is not in a state that can allow this operation [GDI+ status: WrongState]"));
						throw ArgumentException(msg);
					case FontFamilyNotFound:
						msg = GetText(NEW String("The requested FontFamily could not be found [GDI+ status: FontFamilyNotFound]"));
						throw ArgumentException(msg);
					case ValueOverflow:
						msg = GetText(NEW String("Argument is out of range [GDI+ status: ValueOverflow]"));
						throw OverflowException(msg);
					case Win32Error:
						msg = GetText(NEW String("The operation is invalid [GDI+ status: Win32Error]"));
						throw InvalidOperationException(msg);
					default:
						msg = GetText(NEW String("Unknown Error [GDI+ status: Other Errors!! ]"));// , status);
						throw Exception(msg);
					}
				}
			}
		}
	}
}
#endif
