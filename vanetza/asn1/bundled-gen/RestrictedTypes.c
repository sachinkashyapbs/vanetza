/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "/home/rieblr/work/car2x/vanetza/vanetza/asn1/denm_en302637-3v1.2.0.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "RestrictedTypes.h"

static asn_TYPE_member_t asn_MBR_RestrictedTypes_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_StationType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_RestrictedTypes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RestrictedTypes_specs_1 = {
	sizeof(struct RestrictedTypes),
	offsetof(struct RestrictedTypes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_RestrictedTypes = {
	"RestrictedTypes",
	"RestrictedTypes",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RestrictedTypes_tags_1,
	sizeof(asn_DEF_RestrictedTypes_tags_1)
		/sizeof(asn_DEF_RestrictedTypes_tags_1[0]), /* 1 */
	asn_DEF_RestrictedTypes_tags_1,	/* Same as above */
	sizeof(asn_DEF_RestrictedTypes_tags_1)
		/sizeof(asn_DEF_RestrictedTypes_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RestrictedTypes_1,
	1,	/* Single element */
	&asn_SPC_RestrictedTypes_specs_1	/* Additional specs */
};

