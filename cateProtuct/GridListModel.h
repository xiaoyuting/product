//
//  GridListModel.h
//  cateProtuct
//
//  Created by 雨停 on 2017/8/11.
//  Copyright © 2017年 qianying. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface GridListModel : NSObject

@property (nonatomic, strong) NSString *imageurl;
@property (nonatomic, strong) NSString *wname;
@property (nonatomic, assign) float jdPrice;
@property (nonatomic, assign) int totalCount;

@end
