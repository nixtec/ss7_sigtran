/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "../asn/tcap.asn"
 */

#ifndef	_TCMessage_H_
#define	_TCMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Unidirectional.h"
#include "Begin.h"
#include "End.h"
#include "Continue.h"
#include "Abort.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TCMessage_PR {
	TCMessage_PR_NOTHING,	/* No components present */
	TCMessage_PR_unidirectional,
	TCMessage_PR_begin,
	TCMessage_PR_end,
	TCMessage_PR_continue,
	TCMessage_PR_abort
} TCMessage_PR;

/* TCMessage */
typedef struct TCMessage {
	TCMessage_PR present;
	union TCMessage_u {
		Unidirectional_t	 unidirectional;
		Begin_t	 begin;
		End_t	 end;
		Continue_t	 Continue;
		Abort_t	 abort;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TCMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TCMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _TCMessage_H_ */
