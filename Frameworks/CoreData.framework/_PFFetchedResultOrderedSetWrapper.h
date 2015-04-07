/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {
    int _cd_rc;
    NSArray *_underlyingArray;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)allObjects;
- (id)array;
- (id)arrayFromObjectIDs;
- (Class)classForArchiver;
- (Class)classForCoder;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)initWithArray:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectEnumerator;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (void)willRead;

@end