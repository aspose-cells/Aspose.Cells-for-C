#pragma once
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#define STATIC_LICENSE() 


namespace Aspose {
	namespace Cells {

#ifdef WIN32
		class ASPOSE_CELLS_API License : public Aspose::Cells::Systems::Object
#else	
		class License : public Aspose::Cells::Systems::Object
#endif
		{
		private:
			void Init_Vars();
		public:

			License();

			/// <summary>
			///  Set a valid license.
			///  </summary>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///  //Instantiating a license object
			///	 intrusive_ptr<License> license = new License();
			///  //set the path and name of license file
			///  intrusive_ptr<String> licenseName = new String("MyLicense.lic");
			///	 //Set a license by license file name
			///  license->SetLicense(licenseName);
			///  </code>
			/// 
			///  </example>
			/// 
			void SetLicense(intrusive_ptr<Aspose::Cells::Systems::String> licenseName);
			/// <summary>
			///  Set a valid license by file stream.
			/// </summary>					
			void SetLicense(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream);
		public:
			virtual ~License();
		};

	}
}
