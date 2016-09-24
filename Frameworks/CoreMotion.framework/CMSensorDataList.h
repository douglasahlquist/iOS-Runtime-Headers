/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSensorDataList : NSObject <NSFastEnumeration> {
    struct Unpacker { 
        char *fData; 
        unsigned int fBitsLeft; 
        unsigned char fPartial; 
        unsigned int fTimestampLast; 
        int fTimestampLastDelta; 
        int fAccelerationLast[3]; 
    }  fAccelUnpacker;
    unsigned int  fBlockOffset;
    NSMutableArray * fCachedAccel;
    CLSensorRecorderAccelMeta * fCurrentBlock;
    int  fCurrentBlockDataIdentifier;
    unsigned int  fCurrentBlockIdentifier;
    double  fCurrentBlockStartTime;
    unsigned int  fCurrentBlockTimestamp;
    unsigned int  fCurrentIdentifier;
    NSObject<OS_xpc_object> * fDataBuffer;
    unsigned long  fDataBufferLength;
    char * fDataBufferPtr;
    NSArray * fMetaArray;
    CMSensorRecorderInternal * fProxy;
    int  fRetrievedDataBufferIdentifier;
    unsigned int  fStartingIdentifier;
}

- (id).cxx_construct;
- (void)_updateCurrentBlockProperties;
- (BOOL)_updatePointers;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)initFrom:(double)arg1 to:(double)arg2;
- (id)initWithIdentifier:(unsigned int)arg1;

@end