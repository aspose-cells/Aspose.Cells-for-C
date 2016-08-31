#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
#include "System/Byte.h"
#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_PROTECTEDRANGE() 

namespace Aspose {
namespace Cells {
class ProtectedRangeCollection;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API ProtectedRange : public Aspose::Cells::System::Object
#else	class ProtectedRange : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Name;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> m_Areas;
			intrusive_ptr<Aspose::Cells::System::String> m_Password;
			Aspose::Cells::System::UInt16 m_hashPassword;
			Aspose::Cells::ProtectedRangeCollection* m_Ranges;
			intrusive_ptr<Aspose::Cells::System::String> m_SecurityDescriptor;
	public:

			 ProtectedRange(intrusive_ptr<Aspose::Cells::ProtectedRangeCollection> ranges);
			 ProtectedRange(intrusive_ptr<Aspose::Cells::ProtectedRangeCollection> ranges , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::CellArea> cellArea);
			 ProtectedRange(intrusive_ptr<Aspose::Cells::ProtectedRangeCollection> ranges , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> cellAreaList);
			void Copy(intrusive_ptr<Aspose::Cells::ProtectedRange> source);
			intrusive_ptr<Aspose::Cells::System::String> GetName();
			void SetName(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::CellArea> GetCellArea();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellArea*>> GetAreas();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetInternalAreas();
			void AddArea(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void AddArea(intrusive_ptr<Aspose::Cells::CellArea> ca);
			intrusive_ptr<Aspose::Cells::System::String> GetPassword();
			void SetPassword(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::UInt16 GetHashPassword();
			void SetHashPassword(Aspose::Cells::System::UInt16 value);
			intrusive_ptr<Aspose::Cells::System::String> GetSecurityDescriptor();
			void SetSecurityDescriptor(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> BinarySecurity;
			 ProtectedRange();
		public:
			virtual ~ProtectedRange();
	};

}

}
