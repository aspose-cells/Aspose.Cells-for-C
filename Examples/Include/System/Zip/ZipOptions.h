#ifndef _SYSTEM_ZIP_ZIPOPTIONS_H_
#define _SYSTEM_ZIP_ZIPOPTIONS_H_

#include <stdint.h>
#include "System/Zip/CompressionMode.h"

namespace Aspose {
	namespace Cells {
		namespace OpenXML
		{
			class ZipConstants
			{
			public:
				static const  uint32_t PackedToRemovableMedia = 0x30304b50;
				static const  uint32_t Zip64EndOfCentralDirectoryRecordSignature = 0x06064b50;
				static const  uint32_t Zip64EndOfCentralDirectoryLocatorSignature = 0x07064b50;
				static const  uint32_t EndOfCentralDirectorySignature = 0x06054b50;
				static const  int32_t ZipEntrySignature = 0x04034b50;
				static const  int32_t ZipEntryDataDescriptorSignature = 0x08074b50;
				static const  int32_t SplitArchiveSignature = 0x08074b50;
				static const  int32_t ZipDirEntrySignature = 0x02014b50;

				// These are dictated by the Zip Spec.See APPNOTE.txt
				static const  int32_t AesKeySize = 192;  // 128, 192, 256
				static const  int32_t AesBlockSize = 128;  // ???

				static const  uint16_t AesAlgId128 = 0x660E;
				static const  uint16_t AesAlgId192 = 0x660F;
				static const  uint16_t AesAlgId256 = 0x6610;
			};


			enum FlushType
			{
				/// <summary>No flush at all.</summary>
				FlushType_None = 0,

				/// <summary>Closes the current block, but doesn't flush it to
				/// the output. Used internally only in hypothetical
				/// scenarios.  This was supposed to be removed by Zlib, but it is
				/// still in use in some edge cases.
				/// </summary>
				FlushType_Partial,

				/// <summary>
				/// Use this during compression to specify that all pending output should be
				/// flushed to the output buffer and the output should be aligned on a byte
				/// boundary.  You might use this in a streaming communication scenario, so that
				/// the decompressor can get all input data available so far.  When using this
				/// with a ZlibCodec, <c>AvailableBytesIn</c> will be zero after the call if
				/// enough output space has been provided before the call.  Flushing will
				/// degrade compression and so it should be used only when necessary.
				/// </summary>
				FlushType_Sync,

				/// <summary>
				/// Use this during compression to specify that all output should be flushed, as
				/// with <c>FlushType.Sync</c>, but also, the compression state should be reset
				/// so that decompression can restart from this point if previous compressed
				/// data has been damaged or if random access is desired.  Using
				/// <c>FlushType.Full</c> too often can significantly degrade the compression.
				/// </summary>
				FlushType_Full,

				/// <summary>Signals the end of the compression/decompression stream.</summary>
				FlushType_Finish,
			};

			enum CompressionStrategy
			{
				/// <summary>
				/// The default strategy is probably the best for normal data.
				/// </summary>
				CompressionStrategy_Default = 0,

				/// <summary>
				/// The <c>Filtered</c> strategy is intended to be used most effectively with data produced by a
				/// filter or predictor.  By this definition, filtered data consists mostly of small
				/// values with a somewhat random distribution.  In this case, the compression algorithm
				/// is tuned to compress them better.  The effect of <c>Filtered</c> is to force more Huffman
				/// coding and less string matching; it is a half-step between <c>Default</c> and <c>HuffmanOnly</c>.
				/// </summary>
				CompressionStrategy_Filtered = 1,

				/// <summary>
				/// Using <c>HuffmanOnly</c> will force the compressor to do Huffman encoding only, with no
				/// string matching.
				/// </summary>
				CompressionStrategy_HuffmanOnly = 2,
			};

			//////////////////// zipfile options //////////////////////////

			enum ZipOption
			{
				/// <summary>
				/// The default behavior. This is the same as "Never".
				/// (For COM clients, this is a 0 (zero).)
				/// </summary>
				ZipOption_Default = 0,
				/// <summary>
				/// Never use the associated option.
				/// (For COM clients, this is a 0 (zero).)
				/// </summary>
				ZipOption_Never = 0,
				/// <summary>
				/// Use the associated behavior "as necessary."
				/// (For COM clients, this is a 1.)
				/// </summary>
				ZipOption_AsNecessary = 1,
				/// <summary>
				/// Use the associated behavior Always, whether necessary or not.
				/// (For COM clients, this is a 2.)
				/// </summary>
				ZipOption_Always
			};

			enum AddOrUpdateAction
			{
				AddOrUpdateAction_AddOnly = 0,
				AddOrUpdateAction_AddOrUpdate
			};

			enum CompressionMethod
			{
				/// <summary>
				/// No compression at all. For COM environments, the value is 0 (zero).
				/// </summary>
				CompressionMethod_None = 0,

				/// <summary>
				///   DEFLATE compression, as described in <see
				///   href="http://www.ietf.org/rfc/rfc1951.txt">IETF RFC
				///   1951</see>.  This is the "normal" compression used in zip
				///   files. For COM environments, the value is 8.
				/// </summary>
				CompressionMethod_Deflate = 8,
			};

			enum ZipEntrySource
			{
				/// <summary>
				/// Default value.  Invalid on a bonafide ZipEntry.
				/// </summary>
				ZipEntrySource_None = 0,

				/// <summary>
				/// The entry was instantiated by calling AddFile() or another method that 
				/// added an entry from the filesystem.
				/// </summary>
				ZipEntrySource_FileSystem,

				/// <summary>
				/// The entry was instantiated via <see cref="Aspose.Cells.OpenXML.ZipFile.AddEntry(string,string)"/> or
				/// <see cref="Aspose.Cells.OpenXML.ZipFile.AddEntry(string,System.IO.Stream)"/> .
				/// </summary>
				ZipEntrySource_Stream,

				/// <summary>
				/// The ZipEntry was instantiated by reading a zipfile.
				/// </summary>
				ZipEntrySource_ZipFile,

				/// <summary>
				/// The content for the ZipEntry will be or was provided by the WriteDelegate.
				/// </summary>
				ZipEntrySource_WriteDelegate,

				/// <summary>
				/// The content for the ZipEntry will be obtained from the stream dispensed by the <c>OpenDelegate</c>.
				/// The entry was instantiated via <see cref="Aspose.Cells.OpenXML.ZipFile.AddEntry(string,OpenDelegate,CloseDelegate)"/>.
				/// </summary>
				ZipEntrySource_JitStream,

				/// <summary>
				/// The content for the ZipEntry will be or was obtained from a <c>ZipOutputStream</c>.
				/// </summary>
				ZipEntrySource_ZipOutputStream,
			};

			enum ZipEntryTimestamp
			{
				/// <summary>
				/// Default value.
				/// </summary>
				ZipEntryTimestamp_None = 0,

				/// <summary>
				/// A DOS timestamp with 2-second precision.
				/// </summary>
				ZipEntryTimestamp_DOS = 1,

				/// <summary>
				/// A Windows timestamp with 100-ns precision.
				/// </summary>
				ZipEntryTimestamp_Windows = 2,

				/// <summary>
				/// A Unix timestamp with 1-second precision.
				/// </summary>
				ZipEntryTimestamp_Unix = 4,

				/// <summary>
				/// A Unix timestamp with 1-second precision, stored in InfoZip v1 format.  This
				/// format is outdated and is supported for reading archives only.
				/// </summary>
				ZipEntryTimestamp_InfoZip1 = 8,
			};

			enum EncryptionAlgorithm
			{
				/// <summary>
				/// No encryption at all.
				/// </summary>
				EncryptionAlgorithm_None = 0,

				/// <summary>
				/// Traditional or Classic pkzip encryption.
				/// </summary>
				EncryptionAlgorithm_PkzipWeak,

				/// <summary>
				/// An encryption algorithm that is not supported by DotNetZip.
				/// </summary>
				EncryptionAlgorithm_Unsupported = 4,
				// others... not implemented (yet?)
			};

		}
	}
}
#endif//_SYSTEM_ZIP_ZIPOPTIONS_H_
