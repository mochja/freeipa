/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "KeytabModule"
 * 	found in "ipa.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include <asn_internal.h>

#include "GKNewKeys.h"

static asn_TYPE_member_t asn_MBR_enctypes_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Int32,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_enctypes_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_enctypes_specs_3 = {
	sizeof(struct enctypes),
	offsetof(struct enctypes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_enctypes_3 = {
	"enctypes",
	"enctypes",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_enctypes_tags_3,
	sizeof(asn_DEF_enctypes_tags_3)
		/sizeof(asn_DEF_enctypes_tags_3[0]), /* 2 */
	asn_DEF_enctypes_tags_3,	/* Same as above */
	sizeof(asn_DEF_enctypes_tags_3)
		/sizeof(asn_DEF_enctypes_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_enctypes_3,
	1,	/* Single element */
	&asn_SPC_enctypes_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GKNewKeys_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GKNewKeys, serviceIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"serviceIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GKNewKeys, enctypes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_enctypes_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"enctypes"
		},
	{ ATF_POINTER, 1, offsetof(struct GKNewKeys, password),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"password"
		},
};
static ber_tlv_tag_t asn_DEF_GKNewKeys_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GKNewKeys_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* serviceIdentity at 13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* enctypes at 14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* password at 15 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GKNewKeys_specs_1 = {
	sizeof(struct GKNewKeys),
	offsetof(struct GKNewKeys, _asn_ctx),
	asn_MAP_GKNewKeys_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GKNewKeys = {
	"GKNewKeys",
	"GKNewKeys",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GKNewKeys_tags_1,
	sizeof(asn_DEF_GKNewKeys_tags_1)
		/sizeof(asn_DEF_GKNewKeys_tags_1[0]), /* 1 */
	asn_DEF_GKNewKeys_tags_1,	/* Same as above */
	sizeof(asn_DEF_GKNewKeys_tags_1)
		/sizeof(asn_DEF_GKNewKeys_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GKNewKeys_1,
	3,	/* Elements count */
	&asn_SPC_GKNewKeys_specs_1	/* Additional specs */
};

