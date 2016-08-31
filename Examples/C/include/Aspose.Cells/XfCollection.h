#pragma once
#include "System/Collections/CollectionBase.h"
//#include "System/Collections/ArrayList.h"
#include "IStylePool.h"
//#include "System/Math.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "StyleCleanupStrategy.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "Style.h"
#define STATIC_XFCOLLECTION() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
	class XfCollection : public Aspose::Cells::System::Collections::CollectionBase , public Aspose::Cells::IStylePool
	{
	protected:

			 virtual void OnClearComplete();
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 RUNTIME_CLEANUP_THRESHOLD;
			bool cleanup;
			Aspose::Cells::System::Int32 AddStyle(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 CleanUpCellStyles(Aspose::Cells::System::Int32 threshold , Aspose::Cells::StyleCleanupStrategy strategy);
	public:

			Aspose::Cells::WorksheetCollection* worksheets;
			 XfCollection(intrusive_ptr<Aspose::Cells::WorksheetCollection> worksheets);
			Aspose::Cells::System::Int32 GetCeilingXF();
			bool IsBuiltIn();
			intrusive_ptr<Aspose::Cells::Style> GetRefStyle(Aspose::Cells::System::Int32 xfIndex);
			intrusive_ptr<Aspose::Cells::Style> CheckRefStyle(Aspose::Cells::System::Int32 xfIndex);
			intrusive_ptr<Aspose::Cells::Style> GetNamedStyle(intrusive_ptr<Aspose::Cells::System::String> name);
			void SetRefStyle(Aspose::Cells::System::Int32 xfIndex , intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 FindXFIndex(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Style> GetIndexObject(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Style> value);
			Aspose::Cells::System::Int32 FindXFIndex(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 parentXFIndex);
			Aspose::Cells::System::Int32 CheckXFIndex(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AddInTable(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 CombineStyle(Aspose::Cells::System::Int32 nbr , intrusive_ptr<Aspose::Cells::System::String> fmt , Aspose::Cells::System::Int32 origXF);
			Aspose::Cells::System::Int32 AppendReadStyle(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AppendReadNamedStyle(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AddReadNamedStyle(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AddStyle(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 FindNamedStyleWithoutReplace(intrusive_ptr<Aspose::Cells::Style> style);
			Aspose::Cells::System::Int32 AddNamedStyle(intrusive_ptr<Aspose::Cells::Style> style);
			void Copy(intrusive_ptr<Aspose::Cells::XfCollection> source);
			void CreateDefaultFonts();
			void CreateDefaultStyles();
			Aspose::Cells::System::Int32 CleanUp(Aspose::Cells::System::Int32 threshold , Aspose::Cells::StyleCleanupStrategy strategy);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> Condense();
			static Aspose::Cells::System::Byte BuildBorderFlag(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CheckRowBorder();
			 XfCollection();
		public:
			virtual ~XfCollection();
		public:
			virtual void add_ref() {IStylePool::add_ref();}
			virtual int release_ref() {return IStylePool::release_ref();}
	};

}

}
