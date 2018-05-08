#ifndef _SYSTEM_DRAWING_IMAGING_IMAGECODECINFO_H_
#define _SYSTEM_DRAWING_IMAGING_IMAGECODECINFO_H_

#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/Guid.h"
#include "System/Drawing/Imaging/ImageCodecFlags.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Drawing {
				namespace Imaging {
					class ImageCodecInfo : public Object
					{
					private:
						intrusive_ptr<Guid> clsid;
						StringPtr codecName;
						StringPtr dllName;
						StringPtr filenameExtension;
						ImageCodecFlags flags;
						StringPtr formatDescription;
						intrusive_ptr<Guid> formatID;
						StringPtr	mimeType;
						intrusive_ptr<Array2D<Byte>> signatureMasks;
						intrusive_ptr<Array2D<Byte>> signaturePatterns;
						Int32 version;

					public:
						static intrusive_ptr<Array1D<ImageCodecInfo*>> GetImageDecoders();
						static intrusive_ptr<Array1D<ImageCodecInfo*>> GetImageEncoders();

						virtual ~ImageCodecInfo();

						intrusive_ptr<Guid> GetClsid();
						void SetClsid(intrusive_ptr<Guid> value);
						StringPtr GetCodecName();
						void SetCodecName(StringPtr value);
						StringPtr GetDllName();
						void SetDllName(StringPtr value);
						StringPtr GetFilenameExtension();
						void SetFilenameExtension(StringPtr value);
						ImageCodecFlags GetFlags();
						void SetFlags(ImageCodecFlags value);
						StringPtr GetFormatDescription();
						void SetFormatDescription(StringPtr value);
						intrusive_ptr<Guid> GetFormatID();
						void SetFormatID(intrusive_ptr<Guid> value);
						StringPtr GetMimeType();
						void SetMimeType(StringPtr value);
						intrusive_ptr<Array2D<Byte>> GetSignatureMasks();
						void SetSignatureMasks(intrusive_ptr<Array2D<Byte>> value);
						intrusive_ptr<Array2D<Byte>> GetSignaturePatterns();
						void SetSignaturePatterns(intrusive_ptr<Array2D<Byte>> value);
						Int32 GetVersion();
						void SetVersion(Int32 value);

					private:
						ImageCodecInfo();

						static void MarshalTo(void* pcodec, intrusive_ptr<ImageCodecInfo> imageCodecInfo);

					};
				}
			}
		}
	}
}
#endif
