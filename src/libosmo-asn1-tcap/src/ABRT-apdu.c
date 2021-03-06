/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "DialoguePDUs"
 * 	found in "../asn/DialoguePDUs.asn"
 */

#include <asn_internal.h>

#include "ABRT-apdu.h"

static asn_TYPE_member_t asn_MBR_user_information_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (8 << 2)),
		0,
		&asn_DEF_EXTERNAL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_user_information_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_user_information_specs_3 = {
	sizeof(struct user_information),
	offsetof(struct user_information, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_user_information_3 = {
	"user-information",
	"user-information",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_user_information_tags_3,
	sizeof(asn_DEF_user_information_tags_3)
		/sizeof(asn_DEF_user_information_tags_3[0]) - 1, /* 1 */
	asn_DEF_user_information_tags_3,	/* Same as above */
	sizeof(asn_DEF_user_information_tags_3)
		/sizeof(asn_DEF_user_information_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_user_information_3,
	1,	/* Single element */
	&asn_SPC_user_information_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ABRT_apdu_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ABRT_apdu, abort_source),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ABRT_source,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"abort-source"
		},
	{ ATF_POINTER, 1, offsetof(struct ABRT_apdu, user_information),
		(ASN_TAG_CLASS_CONTEXT | (30 << 2)),
		0,
		&asn_DEF_user_information_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"user-information"
		},
};
static ber_tlv_tag_t asn_DEF_ABRT_apdu_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ABRT_apdu_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* abort-source at 50 */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 1, 0, 0 } /* user-information at 51 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ABRT_apdu_specs_1 = {
	sizeof(struct ABRT_apdu),
	offsetof(struct ABRT_apdu, _asn_ctx),
	asn_MAP_ABRT_apdu_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ABRT_apdu = {
	"ABRT-apdu",
	"ABRT-apdu",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ABRT_apdu_tags_1,
	sizeof(asn_DEF_ABRT_apdu_tags_1)
		/sizeof(asn_DEF_ABRT_apdu_tags_1[0]) - 1, /* 1 */
	asn_DEF_ABRT_apdu_tags_1,	/* Same as above */
	sizeof(asn_DEF_ABRT_apdu_tags_1)
		/sizeof(asn_DEF_ABRT_apdu_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ABRT_apdu_1,
	2,	/* Elements count */
	&asn_SPC_ABRT_apdu_specs_1	/* Additional specs */
};

