/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_LaneAttributes_H_
#define	_LaneAttributes_H_


#include <etsi_its_mapem_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_coding/LaneDirection.h"
#include "etsi_its_mapem_coding/LaneSharing.h"
#include "etsi_its_mapem_coding/LaneTypeAttributes.h"
#include <etsi_its_mapem_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RegionalExtension;

/* LaneAttributes */
typedef struct LaneAttributes {
	LaneDirection_t	 directionalUse;
	LaneSharing_t	 sharedWith;
	LaneTypeAttributes_t	 laneType;
	struct RegionalExtension	*regional	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LaneAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes;
extern asn_SEQUENCE_specifics_t asn_SPC_LaneAttributes_specs_1;
extern asn_TYPE_member_t asn_MBR_LaneAttributes_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_mapem_coding/RegionalExtension.h"

#endif	/* _LaneAttributes_H_ */
#include <etsi_its_mapem_coding/asn_internal.h>
