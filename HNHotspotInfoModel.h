//
//  HNHotspotInfoModel.h
//  demo
//
//  Created by 东哥 on 2022/4/25.
//

#import <Foundation/Foundation.h>

#import "HNHotspotStatusModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HNHotspotInfoModel : NSObject

@property (nonatomic , strong)HNHotspotStatusModel  *model;

@property (nonatomic , copy)NSString    *owner;

@property (nonatomic , copy)NSString    *address;

/// 当前区块高度
@property (nonatomic , assign)NSInteger  block;


@property (nonatomic , assign)CGFloat   reward_scale;

@property (nonatomic , copy)NSString    *name;



@end

NS_ASSUME_NONNULL_END
