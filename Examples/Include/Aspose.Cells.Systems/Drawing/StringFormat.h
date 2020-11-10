#ifndef _SYSTEM_DRAWING_STRINGFORMAT_H_
#define _SYSTEM_DRAWING_STRINGFORMAT_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/IntegerPtr.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IDisposable.h"
#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Drawing/StringFormatFlags.h"
#include "Aspose.Cells.Systems/Drawing/StringAlignment.h"
#include "Aspose.Cells.Systems/Drawing/StringTrimming.h"
#include "Aspose.Cells.Systems/Drawing/CharacterRange.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Drawing ;
namespace Aspose { 
namespace Cells { 
namespace Systems
{
namespace Drawing {
	class ASPOSE_CELLS_API StringFormat : public Object, public ICloneable, public IDisposable
	{
	private:
		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> nativeStrFmt;
	public:
		StringFormat();
		StringFormat(intrusive_ptr<StringFormat> format);
		StringFormat(StringFormatFlags options);
		StringFormat(StringFormatFlags options, int language);
		StringFormat(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> native);
		void InitVars();

		intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> GetNativeObject();
		void SetNativeObject(intrusive_ptr<Aspose::Cells::Systems::IntegerPtr> value);

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
