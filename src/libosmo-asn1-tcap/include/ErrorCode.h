/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn/tcap.asn"
 */

#ifndef	_ErrorCode_H_
#define	_ErrorCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <INTEGER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ErrorCode_PR {
	ErrorCode_PR_NOTHING,	/* No components present */
	ErrorCode_PR_nationaler,
	ErrorCode_PR_privateer
} ErrorCode_PR;

/* ErrorCode */
typedef struct ErrorCode {
	ErrorCode_PR present;
	union ErrorCode_u {
		long	 nationaler;
		INTEGER_t	 privateer;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ErrorCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ErrorCode;

#ifdef __cplusplus
}
#endif

#endif	/* _ErrorCode_H_ */
