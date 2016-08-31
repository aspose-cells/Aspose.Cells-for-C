#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerable.h"
#include "System/String.h"
#include "DocumentProperty.h"
#include "PropertyGroup.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_DOCUMENTPROPERTYCOLLECTION() 


namespace Aspose {
namespace Cells {
namespace Properties {
#ifdef WIN32

	class ASPOSE_CELLS_API DocumentPropertyCollection : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#else	class DocumentPropertyCollection : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> mItems;
	protected:

			 DocumentPropertyCollection();
	public:

			Aspose::Cells::System::Int32 GetCount();
			 virtual intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> name);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(Aspose::Cells::Properties::PropertyGroup group , Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::Object> value , bool isGeneratedName);
			intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> Add(intrusive_ptr<Aspose::Cells::Properties::DocumentProperty> newProperty);
			bool Contains(intrusive_ptr<Aspose::Cells::System::String> name);
			Aspose::Cells::System::Int32 IndexOf(intrusive_ptr<Aspose::Cells::System::String> name);
			void Remove(intrusive_ptr<Aspose::Cells::System::String> name);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void Clear();
			 virtual intrusive_ptr<Aspose::Cells::Properties::DocumentPropertyCollection> Clone();
		public:
			virtual ~DocumentPropertyCollection();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
