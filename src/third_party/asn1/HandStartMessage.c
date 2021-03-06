/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "HandStartMessage.h"

static int
memb_smallBlind_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                             asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	value = *(const long *)sptr;

	if((value >= 1 && value <= 100000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_seatStates_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                             asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;

	if((size >= 2 && size <= 10)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_yourCards_3[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct yourCards, choice.plainCards),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PlainCards,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"plainCards"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct yourCards, choice.encryptedCards),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EncryptedCards,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"encryptedCards"
	},
};
static asn_TYPE_tag2member_t asn_MAP_yourCards_tag2el_3[] = {
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plainCards at 490 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* encryptedCards at 492 */
};
static asn_CHOICE_specifics_t asn_SPC_yourCards_specs_3 = {
	sizeof(struct yourCards),
	offsetof(struct yourCards, _asn_ctx),
	offsetof(struct yourCards, present),
	sizeof(((struct yourCards *)0)->present),
	asn_MAP_yourCards_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_yourCards_3 = {
	"yourCards",
	"yourCards",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_yourCards_3,
	2,	/* Elements count */
	&asn_SPC_yourCards_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_seatStates_8[] = {
	{	ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetPlayerState,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
	},
};
static ber_tlv_tag_t asn_DEF_seatStates_tags_8[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_seatStates_specs_8 = {
	sizeof(struct seatStates),
	offsetof(struct seatStates, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_seatStates_8 = {
	"seatStates",
	"seatStates",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_seatStates_tags_8,
	sizeof(asn_DEF_seatStates_tags_8)
	/sizeof(asn_DEF_seatStates_tags_8[0]), /* 1 */
	asn_DEF_seatStates_tags_8,	/* Same as above */
	sizeof(asn_DEF_seatStates_tags_8)
	/sizeof(asn_DEF_seatStates_tags_8[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_seatStates_8,
	1,	/* Single element */
	&asn_SPC_seatStates_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HandStartMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct HandStartMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct HandStartMessage, yourCards),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_yourCards_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"yourCards"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct HandStartMessage, smallBlind),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_smallBlind_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"smallBlind"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct HandStartMessage, seatStates),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_seatStates_8,
		memb_seatStates_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"seatStates"
	},
};
static ber_tlv_tag_t asn_DEF_HandStartMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (23 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HandStartMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* gameId at 488 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -1, 0 }, /* smallBlind at 493 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, 0, 0 }, /* seatStates at 495 */
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* plainCards at 490 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* encryptedCards at 492 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandStartMessage_specs_1 = {
	sizeof(struct HandStartMessage),
	offsetof(struct HandStartMessage, _asn_ctx),
	asn_MAP_HandStartMessage_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HandStartMessage = {
	"HandStartMessage",
	"HandStartMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_HandStartMessage_tags_1,
	sizeof(asn_DEF_HandStartMessage_tags_1)
	/sizeof(asn_DEF_HandStartMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_HandStartMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandStartMessage_tags_1)
	/sizeof(asn_DEF_HandStartMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_HandStartMessage_1,
	4,	/* Elements count */
	&asn_SPC_HandStartMessage_specs_1	/* Additional specs */
};

