/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-PER`
 */

#ifndef	_Altitude_H_
#define	_Altitude_H_


#include <etsi_its_mapem_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_coding/AltitudeValue.h"
#include "etsi_its_mapem_coding/AltitudeConfidence.h"
#include <etsi_its_mapem_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Altitude */
typedef struct Altitude {
	AltitudeValue_t	 altitudeValue;
	AltitudeConfidence_t	 altitudeConfidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Altitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Altitude;
extern asn_SEQUENCE_specifics_t asn_SPC_Altitude_specs_1;
extern asn_TYPE_member_t asn_MBR_Altitude_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Altitude_H_ */
#include <etsi_its_mapem_coding/asn_internal.h>
