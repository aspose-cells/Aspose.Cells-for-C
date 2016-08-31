#pragma once

#define LICENSE_CXX

#include "System/IO/Stream.h"
#include "EditionType.h"
#include "System/String.h"
#include "LicenseState.h"
#include "System/Collections/Hashtable.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/DateTime.h"

#ifndef LICENSE_CXX
#include "System/Reflection/Assembly.h"
#include "System/Xml/XmlNode.h"
#include "System/Xml/XmlElement.h"
#include "System/Xml/XmlDocument.h"
#else
#include "XmlNode.h"
#include "XmlElement.h"
#include "XmlDocument.h"
#include "XmlNodeList.h"
using namespace Aspose::Cells::Xml;
#endif

#define STATIC_LICENSECORE() 

namespace Aspose {
namespace Cells {
	class LicenseCore : public Aspose::Cells::System::Object
	{
	private:
		class ProductNameMapping : public Aspose::Cells::System::Object
		{
		private:

				void Init_Vars();
				 static const intrusive_ptr<Aspose::Cells::System::String> AsposeDot;
				
				static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::LicenseCore::ProductNameMapping*>> Static_Array_Init_gProductNameMap();
		public:
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::LicenseCore::ProductNameMapping*>> gProductNameMap;
				intrusive_ptr<Aspose::Cells::System::String> OldName;
				intrusive_ptr<Aspose::Cells::System::String> NewName;
				 ProductNameMapping(intrusive_ptr<Aspose::Cells::System::String> oldName , intrusive_ptr<Aspose::Cells::System::String> newName);
				 ProductNameMapping();
			public:
				virtual ~ProductNameMapping();
		};

	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::String> MapOldProductName(intrusive_ptr<Aspose::Cells::System::String> productName);
			static void VerifySignature(intrusive_ptr<XmlNode> dataElem , intrusive_ptr<XmlNode> signatureElem);
			static intrusive_ptr<Aspose::Cells::System::String> GetStringValue(intrusive_ptr<XmlElement> parentElem , intrusive_ptr<Aspose::Cells::System::String> childElemName);
			static intrusive_ptr<Aspose::Cells::System::DateTime> GetDateValue(intrusive_ptr<XmlElement> parentElem , intrusive_ptr<Aspose::Cells::System::String> childElemName);
#ifndef LICENSE_CXX
			static intrusive_ptr<Aspose::Cells::System::IO::Stream> ProbeLicense(intrusive_ptr<Aspose::Cells::System::String> licenseName , intrusive_ptr<Aspose::Cells::System::Reflection::Assembly> callingAssembly);
			static intrusive_ptr<Aspose::Cells::System::String> GetAssemblyPath(intrusive_ptr<Aspose::Cells::System::Reflection::Assembly> assembly);
			static intrusive_ptr<Aspose::Cells::System::IO::Stream> GetResourceByPartialName(intrusive_ptr<Aspose::Cells::System::Reflection::Assembly> assembly , intrusive_ptr<Aspose::Cells::System::String> partialName);
#endif
			static intrusive_ptr<XmlElement> GetElementByName(intrusive_ptr<XmlElement> parentElem, intrusive_ptr<Aspose::Cells::System::String> childElemName);
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> LoadBlackList();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> mProducts;
			Aspose::Cells::EditionType mEditionType;
			intrusive_ptr<Aspose::Cells::System::String> mSerialNumber;
			intrusive_ptr<Aspose::Cells::System::DateTime> mSubscriptionExpiry;
			intrusive_ptr<Aspose::Cells::System::DateTime> mLicenseExpiry;
			Aspose::Cells::LicenseState mLicenseState;
			static intrusive_ptr<Aspose::Cells::LicenseCore> gLicense;
			static intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> gBlackListCache;
	public:

			void SetLicenseCore(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void SetLicenseCore(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static Aspose::Cells::LicenseState GetLicenseState();
			static void CheckEdition(Aspose::Cells::EditionType wantEditionType , intrusive_ptr<Aspose::Cells::System::String> message);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetProducts();
			Aspose::Cells::EditionType GetEditionType();
			intrusive_ptr<Aspose::Cells::System::String> GetSerialNumber();
			intrusive_ptr<Aspose::Cells::System::DateTime> GetSubscriptionExpiry();
			intrusive_ptr<Aspose::Cells::System::DateTime> GetLicenseExpiry();
			void LoadLicense(intrusive_ptr<Aspose::Cells::System::String> fileName);
			void LoadLicense(intrusive_ptr<XmlDocument> doc);
#ifndef LICENSE_CXX
			static intrusive_ptr<Aspose::Cells::System::String> GetFileNameInFolderOfAssembly(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::Reflection::Assembly> assembly);
			void SetLicenseCore(intrusive_ptr<Aspose::Cells::System::String> licenseName, intrusive_ptr<Aspose::Cells::System::Reflection::Assembly> clientAssembly);
#endif
		public:
			virtual ~LicenseCore();
	};

}

}
