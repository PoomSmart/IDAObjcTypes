#ifndef _NX_TYPES
#define _NX_TYPES

#import "../Types.h"

typedef struct _NXTabletPointData {
	SInt32  x;
    SInt32  y;
	SInt32  z;
    UInt16  buttons;
    UInt16  pressure;
    struct {
        SInt16 x;
        SInt16 y;
	} tilt;
	UInt16  rotation;
	SInt16  tangentialPressure;
	UInt16  deviceID;
	SInt16  vendor1;
	SInt16  vendor2;
	SInt16  vendor3;
} NXTabletPointData, *NXTabletPointDataPtr;

typedef struct _NXTabletProximityData {
    UInt16  vendorID;
	UInt16  tabletID;
	UInt16  pointerID;
	UInt16  deviceID;
	UInt16  systemTabletID;
	UInt16  vendorPointerType;
	UInt32  pointerSerialNumber;
	UInt64  uniqueID __attribute__ ((packed));
	UInt32  capabilityMask;
	UInt8   pointerType;
	UInt8   enterProximity;
	SInt16  reserved1;
} NXTabletProximityData, *NXTabletProximityDataPtr;

typedef	union NXEventData {
    typedef struct mouse {
        UInt8   subx;
        UInt8   suby;
        SInt16  eventNum;
        SInt32  click;
        UInt8   pressure;
        UInt8   buttonNumber;
        UInt8   subType;
        UInt8   reserved2;
        SInt32  reserved3;
        typedef union tablet {
            NXTabletPointData      point;
            NXTabletProximityData  proximity;
        } tablet;
    } mouse;
    typedef struct mouseMove {
        SInt32  dx;
        SInt32  dy;
        UInt8   subx;
        UInt8   suby;
        UInt8   subType;
        UInt8   reserved1;
        SInt32  reserved2;
        typedef union tablet {
            NXTabletPointData      point;
            NXTabletProximityData  proximity;
        } tablet;
    } mouseMove;
    typedef struct key {
        UInt16  origCharSet;
        SInt16  repeat;
        UInt16  charSet;
        UInt16  charCode;
        UInt16  keyCode;
        UInt16  origCharCode;
        SInt32  reserved1;
        UInt32  keyboardType;
        SInt32  reserved2;
        SInt32  reserved3;
        SInt32  reserved4;
        SInt32  reserved5[4];
    } key;
    typedef struct tracking {
        SInt16  reserved;
        SInt16  eventNum;
        SInt32  trackingNum;
        SInt32  userData;
        SInt32  reserved1;
        SInt32  reserved2;
        SInt32  reserved3;
        SInt32  reserved4;
        SInt32  reserved5;
        SInt32  reserved6[4];
    } tracking;
    typedef struct {
        SInt16  deltaAxis1;
        SInt16  deltaAxis2;
        SInt16  deltaAxis3;
        SInt16  reserved1;
        SInt32  fixedDeltaAxis1;
        SInt32  fixedDeltaAxis2;
        SInt32  fixedDeltaAxis3;
        SInt32  pointDeltaAxis1;
        SInt32  pointDeltaAxis2;
        SInt32  pointDeltaAxis3;
        SInt32  reserved8[4];
    } scrollWheel, zoom;
    typedef struct compound {
        SInt16  reserved;
        SInt16  subType;
        typedef union misc {
            float   F[11];
            SInt32  L[11];
            SInt16  S[22];
            char    C[44];
        } misc;
    } compound;
    typedef struct tablet {
        SInt32  x;
        SInt32  y;
        SInt32  z;
        UInt16  buttons;
        UInt16  pressure;
        typedef struct {
            SInt16 x;
            SInt16 y;
        } tilt;
        UInt16  rotation;
        SInt16  tangentialPressure;
        UInt16  deviceID;
        SInt16  vendor1;
        SInt16  vendor2;
        SInt16  vendor3;
        SInt32  reserved[4];
    } tablet;
    typedef struct proximity {
        UInt16  vendorID;
        UInt16  tabletID;
        UInt16  pointerID;
        UInt16  deviceID;
        UInt16  systemTabletID;
        UInt16  vendorPointerType;
        UInt32  pointerSerialNumber;
        UInt64  uniqueID __attribute__ ((packed));
        UInt32  capabilityMask;
        UInt8   pointerType;
        UInt8   enterProximity;
        SInt16  reserved1;
        SInt32  reserved2[4];
    } proximity;
} NXEventData;

#endif