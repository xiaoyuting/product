//
//  GridListCollectionViewCell.h
//  cateProtuct
//
//  Created by 雨停 on 2017/8/11.
//  Copyright © 2017年 qianying. All rights reserved.
//


#import <UIKit/UIKit.h>

#define kCellIdentifier_CollectionViewCell @"GridListCollectionViewCell"

@class GridListModel;

@interface GridListCollectionViewCell : UICollectionViewCell

/**
 0：列表视图，1：格子视图
 */
@property (nonatomic, assign) BOOL isGrid;

@property (nonatomic, strong) GridListModel *model;

@end
