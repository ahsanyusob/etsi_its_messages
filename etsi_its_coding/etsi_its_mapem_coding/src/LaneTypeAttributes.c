/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#include "etsi_its_mapem_coding/LaneTypeAttributes.h"

static asn_oer_constraints_t asn_OER_type_LaneTypeAttributes_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LaneTypeAttributes_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LaneTypeAttributes_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.vehicle),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Vehicle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.crosswalk),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Crosswalk,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"crosswalk"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.bikeLane),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Bike,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bikeLane"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.sidewalk),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Sidewalk,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sidewalk"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.median),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Barrier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"median"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.striping),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Striping,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"striping"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.trackedVehicle),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_TrackedVehicle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trackedVehicle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LaneTypeAttributes, choice.parking),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneAttributes_Parking,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"parking"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LaneTypeAttributes_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vehicle */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crosswalk */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bikeLane */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sidewalk */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* median */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* striping */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* trackedVehicle */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* parking */
};
asn_CHOICE_specifics_t asn_SPC_LaneTypeAttributes_specs_1 = {
	sizeof(struct LaneTypeAttributes),
	offsetof(struct LaneTypeAttributes, _asn_ctx),
	offsetof(struct LaneTypeAttributes, present),
	sizeof(((struct LaneTypeAttributes *)0)->present),
	asn_MAP_LaneTypeAttributes_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0,
	8	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LaneTypeAttributes = {
	"LaneTypeAttributes",
	"LaneTypeAttributes",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LaneTypeAttributes_constr_1, &asn_PER_type_LaneTypeAttributes_constr_1, CHOICE_constraint },
	asn_MBR_LaneTypeAttributes_1,
	8,	/* Elements count */
	&asn_SPC_LaneTypeAttributes_specs_1	/* Additional specs */
};

