#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"

namespace Aspose {
	namespace Cells {
		namespace DigitalSignatures {
			class IDigitalSignature;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace DigitalSignatures{
			/// <summary>
			///  Provides a collection of digital signatures attached to a document. 
			/// </summary>
	class ASPOSE_CELLS_API IDigitalSignatureCollection : public Aspose::Cells::Systems::Collections::IEnumerable , public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Add one signature to DigitalSignatureCollection.
			/// </summary>
			/// <param name="digitalSignature" >Digital signature in collection.</param>
			 virtual void 		AddIDigitalSignature(intrusive_ptr<Aspose::Cells::DigitalSignatures::IDigitalSignature> digitalSignature)=0;
			/// <summary>
			/// Get the enumerator for DigitalSignatureCollection, 
			/// this enumerator allows iteration over the collection
			/// </summary>
			/// <returns>The enumerator to iteration.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Collections::IEnumerator> GetEnumerator()=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
}
