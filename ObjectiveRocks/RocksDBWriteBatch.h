//
//  RocksDBWriteBatch.h
//  ObjectiveRocks
//
//  Created by Iska on 02/12/14.
//  Copyright (c) 2014 BrainCookie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RocksDBEncodingOptions.h"

@class RocksDBColumnFamily;

@interface RocksDBWriteBatch : NSObject

- (void)setObject:(id)anObject forKey:(id)aKey;
- (void)setData:(NSData *)data forKey:(NSData *)aKey;
- (void)setObject:(id)anObject forKey:(id)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;
- (void)setData:(NSData *)data forKey:(NSData *)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;

- (void)mergeOperation:(NSString *)aMerge forKey:(id)aKey;
- (void)mergeObject:(id)anObject forKey:(id)aKey;
- (void)mergeData:(NSData *)data forKey:(NSData *)aKey;
- (void)mergeOperation:(NSString *)aMerge forKey:(id)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;
- (void)mergeObject:(id)anObject forKey:(id)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;
- (void)mergeData:(NSData *)data forKey:(NSData *)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;


- (void)deleteObjectForKey:(id)aKey;
- (void)deleteDataForKey:(NSData *)aKey;
- (void)deleteObjectForKey:(id)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;
- (void)deleteDataForKey:(NSData *)aKey inColumnFamily:(RocksDBColumnFamily *)columnFamily;

- (void)putLogData:(NSData *)logData;

- (void)clear;

- (int)count;
- (NSData *)data;
- (size_t)dataSize;

@end
