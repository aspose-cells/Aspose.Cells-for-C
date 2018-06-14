#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509INCLUDEOPTION_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509INCLUDEOPTION_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {
					namespace X509Certificates {

						enum X509IncludeOption
						{
							// Summary:
							//     No X.509 chain information is included.
							X509IncludeOption_None = 0,
							//
							// Summary:
							//     The entire X.509 chain is included except for the root certificate.
							X509IncludeOption_ExcludeRoot = 1,
							//
							// Summary:
							//     Only the end certificate is included in the X.509 chain information.
							X509IncludeOption_EndCertOnly = 2,
							//
							// Summary:
							//     The entire X.509 chain is included.
							X509IncludeOption_WholeChain = 3,
						};
					} //namespace X509Certificates
				} // namespace Cryptography
			}	// namespace Security
		}	// namespace System
	}
}
#endif