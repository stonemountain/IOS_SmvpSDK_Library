//
//  M3u8SegmentList.h
//  SmvpClient
//
//  Created by yangfei on 14-11-28.
//  Copyright (c) 2014年 smvp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "M3u8SegmentInfo.h"

@interface M3u8SegmentList : NSObject

@property (nonatomic, retain) NSMutableArray *segments;
@property (assign) NSInteger length;

- (id)initWithSegments:(NSMutableArray *)segmentList;
- (void) rmSegment:(NSInteger)index;
- (M3u8SegmentInfo *)getSegment:(NSInteger)index;

@end
