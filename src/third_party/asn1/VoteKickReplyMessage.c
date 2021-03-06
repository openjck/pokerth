/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "VoteKickReplyMessage.h"

static asn_TYPE_member_t asn_MBR_voteKickReplyType_4[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct voteKickReplyType, choice.voteKickAck),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VoteKickAck,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"voteKickAck"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct voteKickReplyType, choice.voteKickDenied),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VoteKickDenied,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"voteKickDenied"
	},
};
static asn_TYPE_tag2member_t asn_MAP_voteKickReplyType_tag2el_4[] = {
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* voteKickAck at 643 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* voteKickDenied at 645 */
};
static asn_CHOICE_specifics_t asn_SPC_voteKickReplyType_specs_4 = {
	sizeof(struct voteKickReplyType),
	offsetof(struct voteKickReplyType, _asn_ctx),
	offsetof(struct voteKickReplyType, present),
	sizeof(((struct voteKickReplyType *)0)->present),
	asn_MAP_voteKickReplyType_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_voteKickReplyType_4 = {
	"voteKickReplyType",
	"voteKickReplyType",
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
	asn_MBR_voteKickReplyType_4,
	2,	/* Elements count */
	&asn_SPC_voteKickReplyType_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_VoteKickReplyMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct VoteKickReplyMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct VoteKickReplyMessage, petitionId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"petitionId"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct VoteKickReplyMessage, voteKickReplyType),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_voteKickReplyType_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"voteKickReplyType"
	},
};
static ber_tlv_tag_t asn_DEF_VoteKickReplyMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (68 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VoteKickReplyMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* gameId at 640 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 }, /* petitionId at 641 */
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* voteKickAck at 643 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* voteKickDenied at 645 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VoteKickReplyMessage_specs_1 = {
	sizeof(struct VoteKickReplyMessage),
	offsetof(struct VoteKickReplyMessage, _asn_ctx),
	asn_MAP_VoteKickReplyMessage_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VoteKickReplyMessage = {
	"VoteKickReplyMessage",
	"VoteKickReplyMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_VoteKickReplyMessage_tags_1,
	sizeof(asn_DEF_VoteKickReplyMessage_tags_1)
	/sizeof(asn_DEF_VoteKickReplyMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_VoteKickReplyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_VoteKickReplyMessage_tags_1)
	/sizeof(asn_DEF_VoteKickReplyMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_VoteKickReplyMessage_1,
	3,	/* Elements count */
	&asn_SPC_VoteKickReplyMessage_specs_1	/* Additional specs */
};

