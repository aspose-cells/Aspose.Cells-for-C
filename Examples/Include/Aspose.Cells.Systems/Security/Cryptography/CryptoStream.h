#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/Security/Cryptography/CryptoStreamMode.h"
#include "Aspose.Cells.Systems/Security/Cryptography/ICryptoTransform.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API CryptoStream : public Stream  //to do
					{
					public:
						CryptoStream(Aspose::Cells::Systems::IO::StreamPtr stream, intrusive_ptr<ICryptoTransform> transform, CryptoStreamMode mode)
						{}//to do ...

						bool CanRead(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("CryptoStream->CanRead() Not Supported!!!"));
#endif	 					
							return false; 
						}
						bool CanWrite(){
#ifdef _DEBUG
							Console::WriteLine(NEW String("CryptoStream->CanWrite() Not Supported!!!"));
#endif
							return false; 
						}
					bool CanSeek(){
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->CanSeek() Not Supported!!!"));
#endif 
						return false; }
						int64_t GetLength()
						{
#ifdef _DEBUG
							Console::WriteLine(NEW String("CryptoStream->GetLength() Not Supported!!!"));
#endif 
							return 0;
						}
						void SetLength(int64_t length){
#ifdef _DEBUG
							Console::WriteLine(NEW String("CryptoStream->SetLength() Not Supported!!!"));
#endif
						}
						int64_t GetPosition(){
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->GetPosition() Not Supported!!!"));
#endif 
						return 0; }
						void SetPosition(int64_t position){
#ifdef _DEBUG
							Console::WriteLine(NEW String("CryptoStream->SetPosition() Not Supported!!!"));
#endif
						}

						int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count){
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->Read() Not Supported!!!"));
#endif
						return 0; }
					void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count){
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->Write() Not Supported!!!"));
#endif
					}
						int32_t ReadByte()
						{
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->CanRead() Not Supported!!!"));
#endif 
						return 0; }
						void WriteByte(uint8_t value){
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->WriteByte() Not Supported!!!"));
#endif
						}
						int64_t Seek(int64_t offset, SeekOrigin origin)
						{
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->WriteLine() Not Supported!!!"));
#endif 
						return 0; }
						void Flush(){
#ifdef _DEBUG
						Console::WriteLine(NEW String("CryptoStream->Flush() Not Supported!!!"));
#endif
										}


					protected:
						void Dispose(bool disposing){}
					};
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_H_