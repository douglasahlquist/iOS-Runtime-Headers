/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying> {
    NPKProtoHash *_expectedHash;
    BOOL _fullResyncNeeded;
    struct { 
        unsigned int resyncID : 1; 
        unsigned int fullResyncNeeded : 1; 
    } _has;
    NSMutableArray *_manifestHashes;
    unsigned int _resyncID;
    NSMutableArray *_uniqueIDs;
}

@property(retain) NPKProtoHash * expectedHash;
@property BOOL fullResyncNeeded;
@property(readonly) BOOL hasExpectedHash;
@property BOOL hasFullResyncNeeded;
@property BOOL hasResyncID;
@property(retain) NSMutableArray * manifestHashes;
@property unsigned int resyncID;
@property(retain) NSMutableArray * uniqueIDs;

- (void).cxx_destruct;
- (void)addManifestHashes:(id)arg1;
- (void)addUniqueIDs:(id)arg1;
- (void)clearManifestHashes;
- (void)clearUniqueIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expectedHash;
- (BOOL)fullResyncNeeded;
- (BOOL)hasExpectedHash;
- (BOOL)hasFullResyncNeeded;
- (BOOL)hasResyncID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)manifestHashes;
- (id)manifestHashesAtIndex:(unsigned int)arg1;
- (unsigned int)manifestHashesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)resyncID;
- (void)setExpectedHash:(id)arg1;
- (void)setFullResyncNeeded:(BOOL)arg1;
- (void)setHasFullResyncNeeded:(BOOL)arg1;
- (void)setHasResyncID:(BOOL)arg1;
- (void)setManifestHashes:(id)arg1;
- (void)setResyncID:(unsigned int)arg1;
- (void)setUniqueIDs:(id)arg1;
- (id)uniqueIDs;
- (id)uniqueIDsAtIndex:(unsigned int)arg1;
- (unsigned int)uniqueIDsCount;
- (void)writeTo:(id)arg1;

@end