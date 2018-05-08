#ifndef _SYSTEM_DRAWING_STRINGFORMAT_H_
#define _SYSTEM_DRAWING_STRINGFORMAT_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/IntPtr.h"
#include "System/ICloneable.h"
#include "System/IDisposable.h"
#include "System/Exception.h"
#include "System/Array1D.h"
#include "System/Drawing/StringFormatFlags.h"
#include "System/Drawing/StringAlignment.h"
#include "System/Drawing/StringTrimming.h"
#include "System/Drawing/CharacterRange.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace System
{
namespace Drawing {
	class ASPOSE_CELLS_API StringFormat : public Object, public ICloneable, public IDisposable
	{
	private:
		intrusive_ptr<IntPtr> nativeStrFmt;
	public:
		StringFormat();
		StringFormat(intrusive_ptr<StringFormat> format);
		StringFormat(StringFormatFlags options);
		StringFormat(StringFormatFlags options, int language);
		StringFormat(intrusive_ptr<IntPtr> native);
		void InitVars();

		intrusive_ptr<IntPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<IntPtr> value);

		StringFormatFlags GetFormatFlags();
		void SetFormatFlags(StringFormatFlags _value);
		static intrusive_ptr<StringFormat> GetGenericDefault();
		static intrusive_ptr<StringFormat> GetGenericTypographic();
		StringAlignment GetAlignment();
		void SetAlignment(StringAlignment _value);
		StringAlignment GetLineAlignment();
		void SetLineAlignment(StringAlignment _value);
		int  GetMeasurableCharacterRangeCount();
		void SetMeasurableCharacterRanges(intrusive_ptr<Array1D<CharacterRange*>> ranges);
		void SetTrimming(StringTrimming value);
		ObjectPtr Clone()
		{
			throw Exception("StringFormat.Clone NotSupport");
		}
		void Dispose(bool disposing);
		void Dispose()
		{
			throw Exception("StringFormat.Dispose NotSupport");
		}

		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}
		~StringFormat(){ Dispose(false); }

	};
}
}
}
}
#endif
